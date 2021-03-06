// FizzBuzz.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>
#include <regex>
#include "FizzBuzzMethod.h"

using namespace std;

int main()
{
    string num;
    string result;
    // 整数のみの正規表現
    regex re(R"(\d+)");

    // インスタンス生成
    FizzBuzzMethod fb;

    cout << "FizzBuzzApp" << endl;
    cout << "5の倍数で「Fizz」、3の倍数で「Buzz」、5と3の倍数で「FizzBuzz」と出力されます!!" << endl;
    cout << "お好きな整数を入力してください" << endl;

    while (true)
    {
        // コンソール入力
        cin >> num;

        // バリデーション、整数
        if (!regex_match(num, re)) {
            cout << "整数を入力してください" << endl;
            continue;
        }

        // stringからintへ型変換
        int i = stoi(num);

        // FizzBuzzの判定関数
        result = fb.fizzBuzz(i);

        // 出力
        cout << result << endl;
    }
    
    return 0;
}

// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
