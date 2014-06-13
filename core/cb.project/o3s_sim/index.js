var path = require("path");

module.exports = {
    id: "o3s_sim",
    name: "O3S Simulation",
    
    sample: path.resolve(__dirname, "sample"),
    detector: path.resolve(__dirname, "detector.sh"),
    runner: [
        {
            id: "all",
            type: "build",
            script: path.resolve(__dirname, "build_all.sh")
        },
        {
            id: "clean",
            type: "clean",
            script: path.resolve(__dirname, "build_clean.sh")
        }
    ]
};