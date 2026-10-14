class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
	    int orignal=image[sr][sc];
	    if (orignal==color)
		    return image;

	    queue<pair<int,int>> q;
	    q.push({sr,sc});

	    image[sr][sc]=color;

	    int dr[4]={-1,1,0,0};
	    int dc[4]={0,0,-1,1};

	    while (!q.empty()){
		    int r=q.front().first;
		    int c=q.front().second;
		    q.pop();
		    for (int i=0;i<4;i++) {
    			int newR=r+dr[i];
	    		int newC=c+dc[i];
			    if (newR>=0&&newR<image.size()&&newC>=0&&newC<image[0].size()&&image[newR]  [newC] == orignal){
				    image[newR][newC]=color;
				    q.push({newR,newC});
			    }
		    }
	    }

	    return image;
    }
};