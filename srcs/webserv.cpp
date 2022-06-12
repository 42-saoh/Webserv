#include "../includes/Config.hpp"
#include <iostream>
#include <fstream>
#include <vector>
#include <exception>

void classify(std::string readline)
{
	/*
		bool server_flag;
		bool location_flag;
		
		server 나오고
		{ 나오면 s_flag = true;
		
		location 나오고
		{ 나오면 l_flag = true;

		} 나왔는데 l_flag 가 true 이면
		l_flag = false

		} 나왔는데 l_flag 가 false 이면
		s_flag = false;
		
		이렇게 한 server와 location에 대한 내용 구분


		server는 vector로 활용
		location 또한 vector로 활용.
	*/





	/*
		앞 공백이 다 잘려져 있는 상태

		\n(단순 개행), # (주석), { } (중괄호) 가 제일 앞에 있으면 해당 줄은 무시한다.

		enum으로 switch를 사용하든
		strcmp 사용 if elseif로 하나씩 비교하든
		현재 Server 구조체에 있는 변수가 10개.

		10개 각각 저장하는 함수를 만들어서 유효성 체크를 한다.
		[우리가 만든 conf파일이기에 유효성 체크를 하지 않아도 되면 저장하는 단순 함수로 사용한다]
		void save_port_number();
		void save_limit_body_size();
		...

		근데 index, methods 같은 경우에는 string이 여러개 들어올 수 있다.
		methods 같은 경우에 나중에 true false로 판단을 해줘야 하므로
		bool 로 3칸짜리 배열로 만드는 것도 고려
		index는 vector<string>로 만들거나 동적할당 해줘야 함.
	*/
}

void parsing(std::string file_path)
{
	/*
		fopen
			error 체크
		open 잘 되면

		while (1) {
			getline(file descriptor >> std::ws, readline);
			// 앞 공백을 잘라서 받음.
			if (eof)
				break;
			if ()
			classify(readline); // 분류하는 곳으로 보내기
			다 읽을때까지 반복
		}
	*/
}

int main(int argc, char *argv[])
{
	try
	{
		if (argc == 1)
			parsing("./default.conf");
		else if (argc == 2)
			parsing(argv[1]);
		else
			throw;
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	}
	return (0);
}
