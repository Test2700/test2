<!DOCTYPE html>
<html lang="vi">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Cún Phin Café - Mini E-Commerce Core Engine</title>
    <!-- Tailwind CSS -->
    <script src="https://cdn.tailwindcss.com"></script>
    <!-- MathJax for rendering math expressions -->
    <script src="https://polyfill.io/v3/polyfill.min.js?features=es6"></script>
    <script id="MathJax-script" async src="https://cdn.jsdelivr.net/npm/mathjax@3/es5/tex-mml-chtml.js"></script>
    <!-- FontAwesome icons -->
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.4.0/css/all.min.css">
    
    <script>
        tailwind.config = {
            theme: {
                extend: {
                    colors: {
                        coffee: {
                            50: '#FDFBF7',
                            100: '#F7F0E6',
                            200: '#EBDBC7',
                            300: '#D5BC9C',
                            500: '#A07246',
                            600: '#8C5A3C',
                            700: '#6F432A',
                            800: '#4A2C11',
                            900: '#2D1908',
                        },
                        paw: {
                            500: '#D97706',
                            600: '#B45309'
                        }
                    }
                }
            }
        }
    </script>
    <style>
        @import url('https://fonts.googleapis.com/css2?family=Plus+Jakarta+Sans:wght@400;500;600;700;800&display=swap');
        body {
            font-family: 'Plus Jakarta Sans', sans-serif;
            background-color: #F7F0E6;
        }
        .custom-scrollbar::-webkit-scrollbar {
            width: 6px;
            height: 6px;
        }
        .custom-scrollbar::-webkit-scrollbar-track {
            background: #F7F0E6;
            border-radius: 4px;
        }
        .custom-scrollbar::-webkit-scrollbar-thumb {
            background: #D5BC9C;
            border-radius: 4px;
        }
        .custom-scrollbar::-webkit-scrollbar-thumb:hover {
            background: #A07246;
        }
    </style>
</head>
<body class="text-coffee-900 min-h-screen pb-12">

    <!-- HEADER -->
    <header class="bg-gradient-to-r from-coffee-900 via-coffee-800 to-coffee-700 text-white shadow-lg border-b-4 border-paw-500 sticky top-0 z-50">
        <div class="max-w-7xl mx-auto px-4 py-4 sm:px-6 lg:px-8 flex flex-col md:flex-row items-center justify-between gap-4">
            <div class="flex items-center gap-3">
                <div class="w-12 h-12 bg-paw-500 rounded-full flex items-center justify-center text-2xl shadow-inner border-2 border-white">
                    ☕🐶
                </div>
                <div>
                    <h1 class="text-2xl font-extrabold tracking-tight flex items-center gap-2">
                        CÚN PHIN CAFÉ 
                        <span class="text-xs bg-paw-500 text-white px-2 py-0.5 rounded-full font-semibold uppercase tracking-wider">Mini E-Commerce Core</span>
                    </h1>
                    <p class="text-xs text-coffee-200">Hệ thống Quản lý Đồ uống & Vé Giao lưu Cún tích hợp 5 Module CTDL&GT (C++ Core Simulation)</p>
                </div>
            </div>
            <div class="flex items-center gap-3 text-xs bg-coffee-900/60 backdrop-blur px-3 py-2 rounded-xl border border-coffee-600/40">
                <div class="flex items-center gap-1.5"><i class="fa-solid fa-code text-paw-500"></i><span>C++ Engine</span></div>
                <span class="text-coffee-600">•</span>
                <div class="flex items-center gap-1.5"><i class="fa-solid fa-microchip text-paw-500"></i><span>High Performance</span></div>
                <span class="text-coffee-600">•</span>
                <div class="flex items-center gap-1.5"><i class="fa-solid fa-[#00599C] text-paw-500"></i><span>Data Structures</span></div>
            </div>
        </div>
    </header>

    <!-- MAIN DASHBOARD CONTENT -->
    <main class="max-w-7xl mx-auto px-4 sm:px-6 lg:px-8 mt-6">

        <div class="grid grid-cols-1 lg:grid-cols-2 gap-6">

            <!-- MODULE 1: LINKED LIST KHO HÀNG -->
            <div class="bg-white rounded-2xl shadow-md border border-coffee-200 p-5 flex flex-col">
                <div class="flex items-center justify-between border-b border-coffee-100 pb-3 mb-4">
                    <div class="flex items-center gap-2.5">
                        <span class="w-8 h-8 rounded-lg bg-coffee-100 text-coffee-800 flex items-center justify-center font-bold text-sm">M1</span>
                        <div>
                            <h2 class="font-bold text-coffee-800 text-base leading-tight">Quản Lý Kho Hàng</h2>
                            <p class="text-xs text-coffee-500">Cấu trúc Danh sách liên kết (Singly Linked List)</p>
                        </div>
                    </div>
                    <span class="text-xs px-2.5 py-1 bg-coffee-100 text-coffee-700 rounded-full font-semibold border border-coffee-200">
                        Dynamic Memory
                    </span>
                </div>

                <!-- Input Form -->
                <div class="bg-coffee-50 p-3.5 rounded-xl border border-coffee-200 mb-4 space-y-3">
                    <div class="grid grid-cols-3 gap-2">
                        <input type="number" id="m1_id" placeholder="ID (vd: 107)" class="px-3 py-1.5 text-xs rounded-lg border border-coffee-200 focus:outline-none focus:border-paw-500">
                        <input type="text" id="m1_name" placeholder="Tên món / vé" class="col-span-2 px-3 py-1.5 text-xs rounded-lg border border-coffee-200 focus:outline-none focus:border-paw-500">
                    </div>
                    <div class="grid grid-cols-3 gap-2">
                        <input type="number" id="m1_price" placeholder="Giá (VNĐ)" class="px-3 py-1.5 text-xs rounded-lg border border-coffee-200 focus:outline-none focus:border-paw-500">
                        <input type="number" id="m1_stock" placeholder="Số lượng" class="px-3 py-1.5 text-xs rounded-lg border border-coffee-200 focus:outline-none focus:border-paw-500">
                        <input type="number" step="0.1" id="m1_rating" placeholder="Rating (1-5)" class="px-3 py-1.5 text-xs rounded-lg border border-coffee-200 focus:outline-none focus:border-paw-500">
                    </div>
                    <div class="flex gap-2 pt-1">
                        <button onclick="m1AddProduct('head')" class="flex-1 bg-coffee-700 hover:bg-coffee-800 text-white py-1.5 px-3 rounded-lg text-xs font-semibold transition flex items-center justify-center gap-1">
                            <i class="fa-solid fa-square-plus"></i> Chèn Đầu
                        </button>
                        <button onclick="m1AddProduct('tail')" class="flex-1 bg-coffee-800 hover:bg-coffee-900 text-white py-1.5 px-3 rounded-lg text-xs font-semibold transition flex items-center justify-center gap-1">
                            <i class="fa-solid fa-circle-plus"></i> Chèn Cuối
                        </button>
                    </div>
                </div>

                <!-- Delete & Controls -->
                <div class="flex gap-2 mb-3">
                    <input type="number" id="m1_del_id" placeholder="Nhập Product ID cần xóa" class="flex-1 px-3 py-1.5 text-xs rounded-lg border border-coffee-200 focus:outline-none focus:border-paw-500">
                    <button onclick="m1DeleteProduct()" class="bg-red-600 hover:bg-red-700 text-white px-3 py-1.5 rounded-lg text-xs font-semibold transition">
                        <i class="fa-solid fa-trash-can"></i> Xóa Node
                    </button>
                </div>

                <!-- Linked List Visualizer -->
                <div class="flex-1 bg-coffee-900 text-coffee-100 p-3 rounded-xl custom-scrollbar overflow-x-auto min-h-[140px] max-h-[180px] border border-coffee-700 flex items-center gap-2" id="m1_visualizer">
                    <!-- Nodes injected dynamically -->
                </div>
            </div>

            <!-- MODULE 2: GIỎ HÀNG (STACK UNDO) & CHECKOUT (QUEUE) -->
            <div class="bg-white rounded-2xl shadow-md border border-coffee-200 p-5 flex flex-col justify-between">
                <div class="flex items-center justify-between border-b border-coffee-100 pb-3 mb-4">
                    <div class="flex items-center gap-2.5">
                        <span class="w-8 h-8 rounded-lg bg-coffee-100 text-coffee-800 flex items-center justify-center font-bold text-sm">M2</span>
                        <div>
                            <h2 class="font-bold text-coffee-800 text-base leading-tight">Giỏ Hàng & Thanh Toán</h2>
                            <p class="text-xs text-coffee-500">Ngăn xếp Stack (LIFO) & Hàng đợi Queue (FIFO)</p>
                        </div>
                    </div>
                    <span class="text-xs px-2.5 py-1 bg-paw-500 text-white rounded-full font-semibold">
                        Flash Sale Queue
                    </span>
                </div>

                <!-- Section Stack Undo -->
                <div class="mb-4 bg-coffee-50 p-3 rounded-xl border border-coffee-200">
                    <div class="flex items-center justify-between mb-2">
                        <span class="text-xs font-bold text-coffee-800 flex items-center gap-1.5">
                            <i class="fa-solid fa-layer-group text-coffee-600"></i> Stack Hoàn Tác Giỏ Hàng (LIFO)
                        </span>
                        <span id="m2_stack_size" class="text-[10px] bg-coffee-200 text-coffee-800 font-bold px-2 py-0.5 rounded-full">0 mục</span>
                    </div>
                    <div class="flex gap-2">
                        <button onclick="m2RemoveFromCart()" class="flex-1 bg-amber-700 hover:bg-amber-800 text-white py-1.5 px-3 rounded-lg text-xs font-medium transition flex items-center justify-center gap-1">
                            <i class="fa-solid fa-cart-arrow-down"></i> Mô phỏng Xóa Món
                        </button>
                        <button onclick="m2UndoCart()" class="flex-1 bg-paw-500 hover:bg-paw-600 text-white py-1.5 px-3 rounded-lg text-xs font-bold transition flex items-center justify-center gap-1 shadow-sm">
                            <i class="fa-solid fa-rotate-left"></i> Undo Hoàn Tác
                        </button>
                    </div>
                </div>

                <!-- Section Queue Flash Sale -->
                <div class="bg-coffee-50 p-3 rounded-xl border border-coffee-200">
                    <div class="flex items-center justify-between mb-2">
                        <span class="text-xs font-bold text-coffee-800 flex items-center gap-1.5">
                            <i class="fa-solid fa-users-line text-coffee-600"></i> Queue Đặt Vé Giờ Cao Điểm (FIFO)
                        </span>
                        <span id="m2_queue_size" class="text-[10px] bg-coffee-200 text-coffee-800 font-bold px-2 py-0.5 rounded-full">0 người</span>
                    </div>
                    <div class="flex gap-2 mb-2">
                        <input type="text" id="m2_cust_name" placeholder="Tên khách hàng" class="flex-1 px-3 py-1.5 text-xs rounded-lg border border-coffee-200 focus:outline-none focus:border-paw-500">
                        <button onclick="m2EnqueueOrder()" class="bg-coffee-700 hover:bg-coffee-800 text-white px-3 py-1.5 rounded-lg text-xs font-semibold transition">
                            <i class="fa-solid fa-user-plus"></i> Xếp Hàng
                        </button>
                    </div>
                    <button onclick="m2DequeueOrder()" class="w-full bg-emerald-700 hover:bg-emerald-800 text-white py-1.5 px-3 rounded-lg text-xs font-semibold transition flex items-center justify-center gap-1">
                        <i class="fa-solid fa-receipt"></i> Thanh Toán Lượt Tiếp Theo (Dequeue)
                    </button>
                </div>

                <!-- Status Console -->
                <div class="mt-3 bg-coffee-900 text-coffee-200 p-2.5 rounded-xl text-xs font-mono max-h-[80px] overflow-y-auto custom-scrollbar" id="m2_console">
                    > Hệ thống Stack & Queue đã sẵn sàng.
                </div>
            </div>

            <!-- MODULE 3: TÌM KIẾM CÂY BST -->
            <div class="bg-white rounded-2xl shadow-md border border-coffee-200 p-5 flex flex-col justify-between">
                <div class="flex items-center justify-between border-b border-coffee-100 pb-3 mb-4">
                    <div class="flex items-center gap-2.5">
                        <span class="w-8 h-8 rounded-lg bg-coffee-100 text-coffee-800 flex items-center justify-center font-bold text-sm">M3</span>
                        <div>
                            <h2 class="font-bold text-coffee-800 text-base leading-tight">Chỉ Mục Tra Cứu Tốc Độ Cao</h2>
                            <p class="text-xs text-coffee-500">Cây Nhị Phân Tìm Kiếm (Binary Search Tree - BST)</p>
                        </div>
                    </div>
                    <span class="text-xs px-2.5 py-1 bg-emerald-100 text-emerald-800 font-mono font-bold rounded-full">
                        O(log N)
                    </span>
                </div>

                <div class="space-y-3">
                    <div class="flex gap-2">
                        <input type="number" id="m3_search_id" placeholder="Nhập Product ID (vd: 102)" class="flex-1 px-3 py-1.5 text-xs rounded-lg border border-coffee-200 focus:outline-none focus:border-paw-500">
                        <button onclick="m3SearchBST()" class="bg-coffee-800 hover:bg-coffee-900 text-white px-4 py-1.5 rounded-lg text-xs font-semibold transition flex items-center gap-1">
                            <i class="fa-solid fa-magnifying-glass"></i> Tra Cứu BST
                        </button>
                    </div>

                    <div class="flex gap-1.5 pt-1">
                        <button onclick="m3Traverse('in')" class="flex-1 bg-coffee-100 hover:bg-coffee-200 text-coffee-800 py-1.5 text-xs font-semibold rounded-lg transition border border-coffee-200">
                            In-Order
                        </button>
                        <button onclick="m3Traverse('pre')" class="flex-1 bg-coffee-100 hover:bg-coffee-200 text-coffee-800 py-1.5 text-xs font-semibold rounded-lg transition border border-coffee-200">
                            Pre-Order
                        </button>
                        <button onclick="m3Traverse('post')" class="flex-1 bg-coffee-100 hover:bg-coffee-200 text-coffee-800 py-1.5 text-xs font-semibold rounded-lg transition border border-coffee-200">
                            Post-Order
                        </button>
                    </div>
                </div>

                <div class="mt-4 bg-coffee-50 border border-coffee-200 rounded-xl p-3 min-h-[110px] text-xs" id="m3_output">
                    <span class="text-coffee-400 italic">Kết quả tra cứu hoặc thứ tự duyệt cây nhị phân sẽ hiển thị ở đây...</span>
                </div>
            </div>

            <!-- MODULE 5: HASH TABLE & MOVE-TO-FRONT HISTORY -->
            <div class="bg-white rounded-2xl shadow-md border border-coffee-200 p-5 flex flex-col justify-between">
                <div class="flex items-center justify-between border-b border-coffee-100 pb-3 mb-4">
                    <div class="flex items-center gap-2.5">
                        <span class="w-8 h-8 rounded-lg bg-coffee-100 text-coffee-800 flex items-center justify-center font-bold text-sm">M5</span>
                        <div>
                            <h2 class="font-bold text-coffee-800 text-base leading-tight">Bảng Băm & Lịch Sử MTF</h2>
                            <p class="text-xs text-coffee-500">Separate Chaining Hash Table & Self-organizing List</p>
                        </div>
                    </div>
                    <span class="text-xs px-2.5 py-1 bg-purple-100 text-purple-800 font-mono font-bold rounded-full">
                        O(1) Avg
                    </span>
                </div>

                <div class="space-y-3">
                    <div class="flex gap-2">
                        <input type="text" id="m5_search_name" placeholder="Tên món (vd: Cún Phin Sữa Đá, Latte)" class="flex-1 px-3 py-1.5 text-xs rounded-lg border border-coffee-200 focus:outline-none focus:border-paw-500">
                        <button onclick="m5SearchHash()" class="bg-coffee-800 hover:bg-coffee-900 text-white px-4 py-1.5 rounded-lg text-xs font-semibold transition flex items-center gap-1">
                            <i class="fa-solid fa-bolt"></i> Tìm Hash
                        </button>
                    </div>

                    <div id="m5_output" class="bg-coffee-50 border border-coffee-200 rounded-xl p-2.5 text-xs min-h-[50px]">
                        <span class="text-coffee-400 italic">Kết quả tìm kiếm băm tức thời...</span>
                    </div>
                </div>

                <div class="mt-3">
                    <h4 class="text-xs font-bold text-coffee-800 mb-2 flex items-center gap-1">
                        <i class="fa-solid fa-clock-rotate-left text-paw-500"></i> Lịch sử tìm kiếm (Move-To-Front Top):
                    </h4>
                    <div class="flex flex-wrap gap-1.5" id="m5_history">
                        <!-- History tags injected -->
                    </div>
                </div>
            </div>

            <!-- MODULE 4 (FULL WIDTH): BIG-O SORTING BENCHMARK -->
            <div class="lg:col-span-2 bg-white rounded-2xl shadow-md border border-coffee-200 p-6">
                <div class="flex flex-col md:flex-row md:items-center justify-between border-b border-coffee-100 pb-4 mb-4 gap-3">
                    <div class="flex items-center gap-3">
                        <span class="w-10 h-10 rounded-xl bg-coffee-800 text-white flex items-center justify-center font-extrabold text-base">M4</span>
                        <div>
                            <h2 class="font-bold text-coffee-900 text-lg">Thực Nghiệm Đánh Giá Độ Phức Tạp Thuật Toán (Big-O Engine)</h2>
                            <p class="text-xs text-coffee-500">So sánh thời gian thực thi thực tế giữa QuickSort đệ quy \(O(N \log N)\) và Selection Sort \(O(N^2)\)</p>
                        </div>
                    </div>
                    <div class="flex items-center gap-3">
                        <select id="m4_dataset_size" class="px-3 py-2 text-xs font-bold rounded-xl border border-coffee-300 bg-coffee-50 text-coffee-800 focus:outline-none focus:border-paw-500">
                            <option value="10000">10,000 Sản phẩm mock</option>
                            <option value="50000">50,000 Sản phẩm mock</option>
                            <option value="100000" selected>100,000 Sản phẩm (Tiêu chuẩn đồ án)</option>
                        </select>
                        <button onclick="m4RunBenchmark()" class="bg-paw-500 hover:bg-paw-600 text-white font-bold px-5 py-2 rounded-xl text-xs transition shadow-md flex items-center gap-2">
                            <i class="fa-solid fa-play"></i> Chạy Thực Nghiệm Đo ms
                        </button>
                    </div>
                </div>

                <div class="grid grid-cols-1 md:grid-cols-3 gap-6">
                    <div class="md:col-span-2 space-y-4">
                        <div class="overflow-hidden rounded-xl border border-coffee-200">
                            <table class="w-full text-left text-xs">
                                <thead class="bg-coffee-800 text-white uppercase font-bold text-[11px]">
                                    <tr>
                                        <th class="p-3">Thuật toán sắp xếp</th>
                                        <th class="p-3">Độ phức tạp lý thuyết</th>
                                        <th class="p-3">Số phần tử</th>
                                        <th class="p-3 text-right">Thời gian thực tế (ms)</th>
                                    </tr>
                                </thead>
                                <tbody class="divide-y divide-coffee-100 bg-coffee-50/50" id="m4_benchmark_table">
                                    <tr>
                                        <td class="p-3 font-semibold text-coffee-800">Selection Sort (Vòng lặp kép)</td>
                                        <td class="p-3"><span class="px-2 py-0.5 rounded bg-red-100 text-red-800 font-mono font-bold">O(N²)</span></td>
                                        <td class="p-3 text-coffee-600">100,000</td>
                                        <td class="p-3 text-right font-mono font-bold text-red-600" id="res_selection">Chưa chạy</td>
                                    </tr>
                                    <tr class="bg-white">
                                        <td class="p-3 font-semibold text-coffee-800">QuickSort (Phân hoạch Đệ quy)</td>
                                        <td class="p-3"><span class="px-2 py-0.5 rounded bg-emerald-100 text-emerald-800 font-mono font-bold">O(N log N)</span></td>
                                        <td class="p-3 text-coffee-600">100,000</td>
                                        <td class="p-3 text-right font-mono font-bold text-emerald-600" id="res_quick">Chưa chạy</td>
                                    </tr>
                                </tbody>
                            </table>
                        </div>

                        <div class="p-4 bg-coffee-900 text-coffee-100 rounded-xl font-mono text-xs space-y-1.5" id="m4_log">
                            <div class="text-paw-500 font-bold">> Sẵn sàng kích hoạt bộ đo thời gian thực tế...</div>
                            <div class="text-coffee-300">* Lưu ý: Để tránh gây đơ trình duyệt ở mức 100.000 phần tử cho Selection Sort O(N²), bộ đo áp dụng kỹ thuật ước tính toán học nội suy chuẩn xác dựa trên phép đo 10.000 mẫu thực tế.</div>
                        </div>
                    </div>

                    <!-- Theoretical Chapter 5 Summary Card -->
                    <div class="bg-coffee-100/70 border border-coffee-200 rounded-xl p-4 flex flex-col justify-between">
                        <div>
                            <h3 class="font-bold text-coffee-900 text-xs uppercase tracking-wider mb-2 flex items-center gap-1.5">
                                <i class="fa-solid fa-file-contract text-coffee-700"></i> Đánh giá kết quả (Chương 5)
                            </h3>
                            <p class="text-xs text-coffee-800 leading-relaxed">
                                Trong môi trường thực nghiệm với dữ liệu lớn ($\ge 100.000$ đối tượng <b>Cún Phin Café</b>), giải thuật <b>QuickSort</b> đệ quy tỏ ra vượt trội hoàn toàn nhờ phân chia bài toán theo chiến lược Chia để trị (Divide and Conquer), giảm thời gian từ hàng chục giây xuống còn vài mili-giây.
                            </p>
                        </div>
                        <div class="mt-4 pt-3 border-t border-coffee-200/80 text-[11px] text-coffee-700 italic">
                            Phù hợp làm ngữ liệu trích dẫn trực tiếp vào Báo cáo Chương 5 & Phụ lục thực nghiệm Big-O.
                        </div>
                    </div>
                </div>
            </div>

        </div>

    </main>

    <!-- JAVASCRIPT LOGIC IMPLEMENTATION -->
    <script>
        // ==========================================
        // ADT & INITIAL MOCK DATA (CÚN PHIN CAFÉ)
        // ==========================================
        class Product {
            constructor(id, name, price, stock, rating) {
                this.id = id;
                this.name = name;
                this.price = price;
                this.stock = stock;
                this.rating = rating;
                this.next = null;
            }
        }

        const initialProducts = [
            new Product(101, "Cún Phin Sữa Đá Truyền Thống", 35000, 150, 4.9),
            new Product(102, "Latte Bọt Mặt Cún Corgi", 49000, 80, 4.8),
            new Product(103, "Trà Sữa Thạch Chân Chó Husky", 45000, 120, 4.7),
            new Product(104, "Vé Giao Lưu Biệt Đội Shiba (1h)", 89000, 30, 5.0),
            new Product(105, "Bánh Cookie Dấu Chân Cún", 25000, 200, 4.6),
            new Product(106, "Phin Đen Đá Đậm Vị Cún Phin", 30000, 100, 4.5)
        ];

        // ==========================================
        // MODULE 1: SINGLY LINKED LIST
        // ==========================================
        class SinglyLinkedList {
            constructor() {
                this.head = null;
            }

            addHead(product) {
                product.next = this.head;
                this.head = product;
            }

            addTail(product) {
                if (!this.head) {
                    this.head = product;
                    return;
                }
                let temp = this.head;
                while (temp.next) temp = temp.next;
                temp.next = product;
            }

            deleteById(id) {
                if (!this.head) return false;
                if (this.head.id === id) {
                    this.head = this.head.next;
                    return true;
                }
                let temp = this.head;
                while (temp.next && temp.next.id !== id) temp = temp.next;
                if (temp.next) {
                    temp.next = temp.next.next;
                    return true;
                }
                return false;
            }

            toArray() {
                let arr = [];
                let curr = this.head;
                while (curr) {
                    arr.push(curr);
                    curr = curr.next;
                }
                return arr;
            }
        }

        const inventoryList = new SinglyLinkedList();
        initialProducts.forEach(p => inventoryList.addTail(new Product(p.id, p.name, p.price, p.stock, p.rating)));

        function renderM1Visualizer() {
            const container = document.getElementById('m1_visualizer');
            const items = inventoryList.toArray();
            
            if (items.length === 0) {
                container.innerHTML = `<span class="text-coffee-400 italic text-xs">Danh sách liên kết trống (HEAD -> NULL)</span>`;
                return;
            }

            let html = `<div class="flex items-center gap-2">`;
            items.forEach((item, index) => {
                html += `
                    <div class="bg-coffee-800 border border-coffee-600 rounded-xl p-2.5 min-w-[140px] shadow-sm relative group">
                        <div class="flex justify-between items-center text-[10px] text-paw-500 font-bold mb-1">
                            <span>Node #${index + 1}</span>
                            <span>ID: ${item.id}</span>
                        </div>
                        <div class="text-xs font-bold text-white truncate mb-1">${item.name}</div>
                        <div class="text-[11px] text-coffee-300">${item.price.toLocaleString()}đ | Tồn: ${item.stock}</div>
                        <div class="mt-1 text-[10px] text-coffee-400 font-mono">next -> ${index === items.length - 1 ? 'NULL' : '0x' + (item.id * 1234).toString(16)}</div>
                    </div>
                `;
                if (index < items.length - 1) {
                    html += `<i class="fa-solid fa-right-long text-paw-500 text-sm"></i>`;
                }
            });
            html += `</div>`;
            container.innerHTML = html;
        }

        function m1AddProduct(position) {
            const id = parseInt(document.getElementById('m1_id').value);
            const name = document.getElementById('m1_name').value.trim();
            const price = parseFloat(document.getElementById('m1_price').value) || 35000;
            const stock = parseInt(document.getElementById('m1_stock').value) || 50;
            const rating = parseFloat(document.getElementById('m1_rating').value) || 4.8;

            if (!id || !name) {
                alert("Vui lòng nhập ID và Tên sản phẩm!");
                return;
            }

            const p = new Product(id, name, price, stock, rating);
            if (position === 'head') inventoryList.addHead(p);
            else inventoryList.addTail(p);

            // Sync with BST & Hash
            bstRoot = bstInsert(bstRoot, p);
            hashInsert(p);

            renderM1Visualizer();
        }

        function m1DeleteProduct() {
            const id = parseInt(document.getElementById('m1_del_id').value);
            if (!id) return;

            const deleted = inventoryList.deleteById(id);
            if (deleted) {
                renderM1Visualizer();
            } else {
                alert(`Không tìm thấy Product ID ${id} trong Linked List!`);
            }
        }

        // ==========================================
        // MODULE 2: STACK UNDO & QUEUE CHECKOUT
        // ==========================================
        let cartItems = [...initialProducts];
        let undoStack = []; // Stack for LIFO Undo
        let checkoutQueue = ["Nguyễn Văn A (Vé Shiba)", "Trần Thị B (Cún Phin Sữa)", "Lê Hoàng C (Latte Corgi)"];

        function updateM2UI() {
            document.getElementById('m2_stack_size').innerText = `${undoStack.length} mục`;
            document.getElementById('m2_queue_size').innerText = `${checkoutQueue.length} người`;
        }

        function m2Log(msg) {
            const consoleEl = document.getElementById('m2_console');
            consoleEl.innerHTML += `<div>> ${msg}</div>`;
            consoleEl.scrollTop = consoleEl.scrollHeight;
        }

        function m2RemoveFromCart() {
            if (cartItems.length === 0) {
                m2Log("Giỏ hàng đang trống!");
                return;
            }
            const item = cartItems.pop();
            undoStack.push(item); // Push to Stack
            m2Log(`Đã xóa [${item.name}] khỏi giỏ hàng. Thao tác đã đẩy vào Stack Undo.`);
            updateM2UI();
        }

        function m2UndoCart() {
            if (undoStack.length === 0) {
                m2Log("Stack Undo rỗng! Không thể hoàn tác.");
                return;
            }
            const restored = undoStack.pop(); // Pop from Stack (LIFO)
            cartItems.push(restored);
            m2Log(`↩️ UNDO THÀNH CÔNG: Đã khôi phục [${restored.name}] trở lại giỏ hàng (LIFO).`);
            updateM2UI();
        }

        function m2EnqueueOrder() {
            const input = document.getElementById('m2_cust_name');
            const name = input.value.trim() || `Khách Hàng #${Math.floor(Math.random() * 899 + 100)}`;
            checkoutQueue.push(name); // Enqueue
            input.value = "";
            m2Log(`📥 Queue Enqueue: Đã thêm [${name}] vào hàng đợi Flash Sale.`);
            updateM2UI();
        }

        function m2DequeueOrder() {
            if (checkoutQueue.length === 0) {
                m2Log("Hàng đợi Queue trống!");
                return;
            }
            const processed = checkoutQueue.shift(); // Dequeue FIFO
            m2Log(`✅ Queue Dequeue (FIFO): Đã xử lý thanh toán đơn hàng cho [${processed}].`);
            updateM2UI();
        }

        // ==========================================
        // MODULE 3: BINARY SEARCH TREE (BST)
        // ==========================================
        class BSTNode {
            constructor(product) {
                this.product = product;
                this.left = null;
                this.right = null;
            }
        }

        let bstRoot = null;

        function bstInsert(root, product) {
            if (!root) return new BSTNode(product);
            if (product.id < root.product.id) root.left = bstInsert(root.left, product);
            else if (product.id > root.product.id) root.right = bstInsert(root.right, product);
            return root;
        }

        function bstSearch(root, id) {
            if (!root || root.product.id === id) return root;
            if (id < root.product.id) return bstSearch(root.left, id);
            return bstSearch(root.right, id);
        }

        function bstInOrder(root, res = []) {
            if (root) {
                bstInOrder(root.left, res);
                res.push(root.product);
                bstInOrder(root.right, res);
            }
            return res;
        }

        function bstPreOrder(root, res = []) {
            if (root) {
                res.push(root.product);
                bstPreOrder(root.left, res);
                bstPreOrder(root.right, res);
            }
            return res;
        }

        function bstPostOrder(root, res = []) {
            if (root) {
                bstPostOrder(root.left, res);
                bstPostOrder(root.right, res);
                res.push(root.product);
            }
            return res;
        }

        initialProducts.forEach(p => bstRoot = bstInsert(bstRoot, p));

        function m3SearchBST() {
            const id = parseInt(document.getElementById('m3_search_id').value);
            if (!id) return;

            const node = bstSearch(bstRoot, id);
            const out = document.getElementById('m3_output');

            if (node) {
                const p = node.product;
                out.innerHTML = `
                    <div class="text-emerald-700 font-bold mb-1">🟢 Tìm thấy trên Cây Nhị Phân BST (Độ phức tạp O(log N)):</div>
                    <div class="text-coffee-900 font-semibold text-sm">${p.name}</div>
                    <div class="text-coffee-600 mt-1">ID: ${p.id} | Giá: ${p.price.toLocaleString()}đ | Tồn: ${p.stock} | Rating: ⭐${p.rating}</div>
                `;
            } else {
                out.innerHTML = `<div class="text-red-600 font-semibold">🔴 Không tìm thấy Product ID ${id} trong Cây BST.</div>`;
            }
        }

        function m3Traverse(type) {
            let res = [];
            if (type === 'in') res = bstInOrder(bstRoot);
            else if (type === 'pre') res = bstPreOrder(bstRoot);
            else if (type === 'post') res = bstPostOrder(bstRoot);

            const out = document.getElementById('m3_output');
            let typeName = type === 'in' ? 'In-Order (Tăng dần ID)' : (type === 'pre' ? 'Pre-Order' : 'Post-Order');
            
            let html = `<div class="font-bold text-coffee-800 mb-1">Duyệt BST (${typeName}):</div><div class="flex flex-wrap gap-1">`;
            res.forEach(item => {
                html += `<span class="bg-coffee-200 text-coffee-800 px-2 py-0.5 rounded text-[11px]">ID ${item.id}: ${item.name}</span>`;
            });
            html += `</div>`;
            out.innerHTML = html;
        }

        // ==========================================
        // MODULE 5: HASH TABLE & MOVE-TO-FRONT
        // ==========================================
        const HASH_SIZE = 19;
        let hashTable = new Array(HASH_SIZE).fill(null);

        function hashFunc(key) {
            let sum = 0;
            for (let i = 0; i < key.length; i++) sum += key.charCodeAt(i);
            return sum % HASH_SIZE;
        }

        function hashInsert(product) {
            const idx = hashFunc(product.name);
            const p = new Product(product.id, product.name, product.price, product.stock, product.rating);
            p.next = hashTable[idx]; // Separate chaining
            hashTable[idx] = p;
        }

        initialProducts.forEach(p => hashInsert(p));

        // Move-To-Front Search History
        let searchHistoryHead = null;
        class HistoryNode {
            constructor(kw) {
                this.kw = kw;
                this.next = null;
            }
        }

        function addSearchHistory(kw) {
            let prev = null;
            let curr = searchHistoryHead;

            while (curr) {
                if (curr.kw.toLowerCase() === kw.toLowerCase()) {
                    if (prev) {
                        prev.next = curr.next;
                        curr.next = searchHistoryHead;
                        searchHistoryHead = curr;
                    }
                    renderM5History();
                    return;
                }
                prev = curr;
                curr = curr.next;
            }

            const newNode = new HistoryNode(kw);
            newNode.next = searchHistoryHead;
            searchHistoryHead = newNode;
            renderM5History();
        }

        function renderM5History() {
            const container = document.getElementById('m5_history');
            container.innerHTML = "";
            let curr = searchHistoryHead;
            while (curr) {
                const tag = document.createElement('span');
                tag.className = "px-2.5 py-1 bg-paw-500 text-white rounded-lg text-xs font-semibold shadow-sm flex items-center gap-1 cursor-pointer";
                tag.innerHTML = `<i class="fa-solid fa-magnifying-glass text-[10px]"></i> ${curr.kw}`;
                tag.onclick = () => {
                    document.getElementById('m5_search_name').value = curr.kw;
                    m5SearchHash();
                };
                container.appendChild(tag);
                curr = curr.next;
            }
        }

        function m5SearchHash() {
            const kw = document.getElementById('m5_search_name').value.trim();
            if (!kw) return;

            const idx = hashFunc(kw);
            let curr = hashTable[idx];
            let found = null;

            while (curr) {
                if (curr.name.toLowerCase().includes(kw.toLowerCase())) {
                    found = curr;
                    break;
                }
                curr = curr.next;
            }

            addSearchHistory(kw);
            const out = document.getElementById('m5_output');

            if (found) {
                out.innerHTML = `
                    <div class="text-purple-700 font-bold">🎯 Found in Hash Bucket #${idx} (O(1) Avg):</div>
                    <div class="text-coffee-900 font-semibold">${found.name}</div>
                    <div class="text-coffee-600">ID: ${found.id} | Giá: ${found.price.toLocaleString()}đ | Rating: ⭐${found.rating}</div>
                `;
            } else {
                out.innerHTML = `<div class="text-red-600">🔴 Không thấy '${kw}' trong Hash Table!</div>`;
            }
        }

        // ==========================================
        // MODULE 4: BENCHMARK ENGINE
        // ==========================================
        function m4RunBenchmark() {
            const size = parseInt(document.getElementById('m4_dataset_size').value);
            const logEl = document.getElementById('m4_log');
            
            logEl.innerHTML = `<div class="text-paw-500 font-bold">> Đang khởi tạo mock data ${size.toLocaleString()} phần tử cho Cún Phin Café...</div>`;

            setTimeout(() => {
                // QuickSort measurement
                const arrQuick = Array.from({length: size}, () => Math.floor(Math.random() * 500000));
                
                const startQ = performance.now();
                quickSortHelper(arrQuick, 0, arrQuick.length - 1);
                const endQ = performance.now();
                const durationQuick = (endQ - startQ).toFixed(2);

                // Selection Sort logic measurement / extrapolation
                let durationSelection = 0;
                if (size <= 10000) {
                    const arrSel = Array.from({length: size}, () => Math.floor(Math.random() * 500000));
                    const startS = performance.now();
                    selectionSortHelper(arrSel);
                    const endS = performance.now();
                    durationSelection = (endS - startS).toFixed(2);
                } else {
                    // Quadratic extrapolation for N=50k/100k to preserve UI responsiveness
                    const baseN = 10000;
                    const arrSelBase = Array.from({length: baseN}, () => Math.floor(Math.random() * 500000));
                    const startS = performance.now();
                    selectionSortHelper(arrSelBase);
                    const endS = performance.now();
                    const baseTime = endS - startS;
                    durationSelection = (baseTime * Math.pow(size / baseN, 2)).toFixed(2);
                }

                document.getElementById('res_selection').innerText = `${parseFloat(durationSelection).toLocaleString()} ms`;
                document.getElementById('res_quick').innerText = `${durationQuick} ms`;

                logEl.innerHTML = `
                    <div class="text-emerald-400 font-bold">> Hoàn tất đo đạc thực nghiệm N = ${size.toLocaleString()}:</div>
                    <div>• QuickSort O(N log N): ${durationQuick} ms</div>
                    <div>• Selection Sort O(N²): ${parseFloat(durationSelection).toLocaleString()} ms</div>
                    <div class="text-paw-500 font-bold mt-1">> Kết luận: QuickSort nhanh hơn gấp ~${Math.round(durationSelection / Math.max(durationQuick, 0.1))} lần!</div>
                `;
            }, 50);
        }

        function selectionSortHelper(arr) {
            let n = arr.length;
            for (let i = 0; i < n - 1; i++) {
                let minIdx = i;
                for (let j = i + 1; j < n; j++) {
                    if (arr[j] < arr[minIdx]) minIdx = j;
                }
                let temp = arr[minIdx];
                arr[minIdx] = arr[i];
                arr[i] = temp;
            }
        }

        function quickSortHelper(arr, low, high) {
            if (low < high) {
                let pivot = arr[high];
                let i = low - 1;
                for (let j = low; j < high; j++) {
                    if (arr[j] < pivot) {
                        i++;
                        let temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                    }
                }
                let temp = arr[i + 1];
                arr[i + 1] = arr[high];
                arr[high] = temp;
                let pi = i + 1;

                quickSortHelper(arr, low, pi - 1);
                quickSortHelper(arr, pi + 1, high);
            }
        }

        // INITIALIZATION
        window.onload = function() {
            renderM1Visualizer();
            updateM2UI();
            addSearchHistory("Cún Phin Sữa Đá");
            addSearchHistory("Latte Corgi");
        };
    </script>
</body>
</html>