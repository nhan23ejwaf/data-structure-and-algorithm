Ước tính thời gian chạy của các thuật với N = 100

- O(logN):10<sup>-7</sup> giây
- O(N):10<sup>-6</sup>  giây
- O(NlogN):10<sup>-5</sup>  giây
- O(N<sup>2</sup>):10<sup>-4</sup> giây
- O(N<sup>6</sup>):3  phút
- O(2<sup>N</sup>):10<sup>14</sup> năm
- O(N!):10<sup>142</sup>  năm

Bạn có thể tham khảo thêm tại: [Tại đây](https://wiki.vnoi.info/algo/basic/computational-complexity.md)

---
Một số thuật toán tìm hiểu 

**Sắp xếp**

---
**Đường đi ngắn nhất**

---
**Thuật toán xấp xỉ**
+ Thế nhưng đôi khi, ngay cả với thuật mạnh nhất, dùng heuristics tốt nhất,
chạy trên máy tính nhanh nhất cũng trở nên quá chậm. Đối với các trường hợp 
này ta buộc phải hi sinh phần nào sự chính xác của kết quả. Thay vì cố đi tìm
đường đi ngắn nhất, ta đã có thể thỏa mãn với một con đường không dài hơn 
10% so với kết quả tối ưu.
Thực tế, có nhiều bài toán quan trọng mà thuật tối ưu của chúng quá chậm và
không sử dụng được. Nhóm bài nổi tiếng nhất cho tính cách này được gọi là 
NP - non-deterministic polynomial. Khi một bài toán nào đó được cho là NP-hard 
hay NP-complete, đồng nghĩa không ai biết thuật toán tối ưu của nó. Hơn nữa, nếu 
ai đó nghĩ ra được thuật tối ưu cho một bài toán NP-complete, thuật đó cũng áp dụng 
được cho mọi bài toán NP-complete khác.
---
**Thuật toán ngẫu nhiên**

---
**Compression - Nén**
+ Một lớp khác của thuật toán sẽ xử lí những vấn đề như data compression (nén dữ liệu).
Loại thuật toán này không có output xác định mà thay vào đó cố gắng tối ưu ở những tiêu 
chí khác. Với data compression, thuật (như LZW) sẽ cố gắng để cho output nhỏ nhất có thể, 
và vẫn có khả năng phục hồi lại trạng thái ban đầu. Những thuật toán kiểu này cho ra kết 
quả có thể chấp nhận được, nhưng không phải tối ưu nhất. Ví dụ thuật toán của JPG và MP3, 
dù khiến dữ liệu bị giảm chất lượng đi đôi chút, sẽ tạo ra những files nhỏ hơn files gốc 
rất nhiều. Files MP3 không cố gắng giữ lại mọi âm thanh của bài hát mà ghi vừa đủ thông 
tin để chất lượng vừa tốt, dung lượng files lại nhỏ. Files JPG cũng dựa trên ý tưởng tương tự.

- Maximum Flow - Luồng cực đại
Bài toán luồng cực đại liên quan đến bài toán tìm đường đi ngắn nhất đã được nói ở trên. 
Vào những năm 1950, bài toán lần đầu được nghiên cứu, để áp dụng với mạng lưới đường sắt 
của Liên Xô. Mỹ muốn biết Liên Xô có thể tiếp tế cho các nước vệ tinh ở Đông Âu thông qua 
mạng lưới đường sắt nhanh như thế nào.
Thêm vào đó, Mỹ còn muốn biết tuyến đường nào có thể bị phá hoại dễ dàng nhất nhằm chia 
cắt các nước này khỏi Liên Bang. Hóa ra, 2 vấn đề này liên quan mật thiết, và giải quyết 
được bài toán về tiếp tế sẽ giải quyết luôn vấn đề thứ hai.
Thuật toán hiệu quả đầu tiên cho bài toán tìm luồng cực đại được phát triển bởi Ford và 
Fulkerson; thuật toán được đặt tên 2 nhà khoa học máy tính này và đã trở thành một trong 
những thuật toán nổi tiếng nhất ngành. Trong 50 năm qua, một số cải tiến đã được áp dụng 
để thuật nhanh hơn, nhiều trong số đó vô cùng tinh tế.
---
**Sequence Comparison - So sánh chuỗi**
+ Nhiều coder đi làm cả đời mà không từng phải cài một thuật toán quy hoạch động nào. 
Thế nhưng quy hoạch động là cần thiết cho nhiều thuật toán quan trọng. Một thuật toán 
có lẽ nhiều người đã từng sử dụng qua mà không biết, là tìm khoảng cách của 2 chuỗi. 
Cụ thể hơn, tính toán xem sau bao nhiêu lần thêm, xóa hay sửa thì xâu A sẽ trở thành xâu B.
Ví dụ, có 2 xâu "AABAA" và "AAAB". Để chuyển xâu đầu thành xâu sau, đơn giản nhất là xóa 
kí tự 'B' ở giữa rồi chuyển 'A' cuối xâu thành 'B'. Thuật toán này có rất nhiều ứng dụng, 
ví dụ như trong các vấn đề liên quan đến DNA hay chống đạo văn. Với các lập trình viên, thuật 
toán này thường được dùng trong việc so sánh 2 phiên bản source code (mã nguồn) của cùng 1 file. 
Nếu các phần tử của chuỗi là các dòng của file, thuật sẽ cho ta biết dòng code nào bị xóa, dòng 
nào bị thêm vào hay sửa đi trong các phiên bản đó.

