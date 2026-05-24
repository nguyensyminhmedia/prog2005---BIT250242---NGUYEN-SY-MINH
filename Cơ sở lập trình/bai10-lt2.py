name = input("Nhập tên sinh viên: ")

toan = float(input("Nhập điểm Toán: "))
ly = float(input("Nhập điểm Lý: "))
hoa = float(input("Nhập điểm Hóa: "))

avg = (toan + ly + hoa) / 3

print("Tên sinh viên:", name)
print("Điểm trung bình:", round(avg, 2))