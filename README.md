# Knife-Edge Beam Profiling Experiment

This repository contains codes and data for a knife-edge beam profiling experiment.  
It includes:
- **Arduino code** to acquire voltage from Transimpedance Amplifier (TIA)
- **Python (Jupyter Notebook)** for ELL20/M Thorlabs linear stage motion control, data collection, analysis, and plotting

---

## 📂 Folder Structure
- `Arduino/` → Contains Arduino sketches
- `Python/` → Jupyter notebook(s) for data collection and analysis

---

## 🚀 Usage
1. Upload the Arduino sketch (`Arduino/sketch_sep11a.ino`) to your Arduino board.
2. Open and run the Jupyter notebook (`Python/knife.ipynb`) for ELL20/M Thorlabs linear stage motion control, data collection by Arduino from the output of TIA, and analysis.

---

## 🔧 Requirements
Install the dependencies with:
```bash
pip install -r requirements.txt
