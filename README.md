# ![](https://drive.google.com/uc?id=10INx5_pkhMcYRdx_OO4rXNXxcsvPtBYq) 堆積排序（Heap Sort）
> ##### 理論請自行找，網路上有很多相關的文章，這邊只關注於範例實作的部分.

---

<!--ts-->
## 目錄
* [簡介](#簡介)
* [示意圖](#示意圖)
* [實作範例](#實作範例)
* [參考資料](#參考資料)
<!--te-->

---

## 簡介
堆積排序（Heap Sort）是一種基於二元堆積（Binary Heap）數據結構的排序算法。
<br>
堆積排序的大致解釋如下：<br>
- 堆積樹的建立：首先，將原始數列轉換為一個二元堆積數據結構。<br>
  - 堆積可以分為最大堆和最小堆。<br>
  - 在最大堆中，父節點的值大於或等於其子節點的值。<br>
  - 在最小堆中，父節點的值小於或等於其子節點的值。
- 建立最大堆：將原始數列視為完全二元樹，從最後一個非葉子節點開始進行操作。<br>
  通過比較父節點和其子節點的值，將最大值交換到父節點的位置上。<br>
  重複此過程直到整個樹構建為最大堆。
- 排序過程：從最大堆的根節點（具有最大值）開始，將根節點的值與數列的最後一個元素進行交換。<br>
  然後，將交換後的數列長度減1，並對剩餘元素進行最大堆的調整，確保根節點為最大值。<br>
  重複此過程直到所有元素都排好序。

<br>

堆積排序的時間複雜度為O(nlogn)，而且是一種不穩定的排序算法。

---

## 示意圖:
<img src="https://drive.google.com/uc?id=1V-epn2ATpgtX2zZF5uIsn80KkxtL20v2" height="70%" width="70%"/>

> 圖片來源：[iThome鐵人賽(Frank) - 演算法 堆積排序法 Heap Sort](https://ithelp.ithome.com.tw/articles/10279239) 

---

## 實作範例:
- [Example](https://github.com/RC-Dev-Tech/algorithm-heap-sort/blob/main/C%2B%2B/main.cpp) - Merge Sort (C++)

---

## 參考資料
* [Wiki - Heap Sort](https://zh.wikipedia.org/wiki/%E5%A0%86%E6%8E%92%E5%BA%8F) <br>
* [iThome鐵人賽(Frank) - 演算法 堆積排序法 Heap Sort](https://ithelp.ithome.com.tw/articles/10279239) <br>

---

<!--ts-->
#### [目錄 ↩](#目錄)
<!--te-->
---
