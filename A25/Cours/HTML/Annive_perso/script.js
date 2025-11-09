document.getElementById("anniversaire-form").addEventListener("submit", function(e) {
    e.preventDefault();
    const nom = document.getElementById("nom").value;
    const prenom = document.getElementById("prenom").value;
    const dateNaissance = new Date(document.getElementById("date").value);
    const aujourdhui = new Date();

    let prochainAnniv = new Date(aujourdhui.getFullYear(), dateNaissance.getMonth(), dateNaissance.getDate());
    if (prochainAnniv < aujourdhui) {
        prochainAnniv.setFullYear(aujourdhui.getFullYear() + 1);
    }

    const diffTime = prochainAnniv - aujourdhui;
    const diffDays = Math.ceil(diffTime / (1000 * 60 * 60 * 24));

    document.getElementById("resultat").innerText =
        `Bonjour ${prenom} ${nom}, il reste ${diffDays} jour(s) avant ton anniversaire 🎂`;
});

// ✅ Partie GTA 6
const gta6Date = new Date("2026-11-19");
const now = new Date();
const gtaDiff = Math.ceil((gta6Date - now) / (1000 * 60 * 60 * 24));

const gtaDiv = document.createElement("div");
gtaDiv.innerText = `🕹️ Il reste ${gtaDiff} jours avant la sortie de GTA VI (19 novembre 2026) !`;
gtaDiv.style.marginTop = "20px";
gtaDiv.style.color = "#880e4f";
gtaDiv.style.fontWeight = "bold";

document.body.appendChild(gtaDiv);
