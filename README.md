# Aadhaar Last Digit Predictor

This project is a **C implementation of the Verhoeff algorithm** used to generate the checksum (last digit) of an Aadhaar number.

The program accepts the **first 11 digits** of an Aadhaar number and predicts the **12th digit (checksum)** to form a valid Aadhaar number.

---

## 📌 Features
- Uses the official **Verhoeff checksum algorithm**
- Validates input length and digits
- Simple and fast execution
- Useful for **learning checksum algorithms**, not for misuse

---

## 🛠️ Technologies Used
- C Language
- Standard Libraries (`stdio.h`, `string.h`, `ctype.h`)

---

## 📥 Input
- First **11 digits** of Aadhaar number

## 📤 Output
- Predicted **12th checksum digit**
- Complete valid Aadhaar number

---

## ▶️ How to Run

### Compile
```bash
gcc aadhaar_checksum.c -o aadhaar
```
### Execute
```bash
./aadhaar
```

---

## ✅ File Structure
```bash
Aadhaar-Last-Digit-Predictor/
│── aadhaar_checksum.c
│── README.md
│── LICENSE

```
---
## 📌 Example

```
Enter first 11 digits of Aadhaar: 12345678901

Predicted Checksum (Last Digit) = 2
Predicted Valid Aadhaar Number = 123456789012
```
---

## ⚠️ Disclaimer

This project is created only for educational and academic purposes.
It does not generate real Aadhaar numbers and should not be used for illegal or unethical activities.

---

## 👤 Author

#####    Swaraj Roy

🌐 Website: https://swaraj.ai.in

🔗 GitHub: https://github.com/Swarajroy2006

---

## 📄 License
This project is licensed under the MIT License.

