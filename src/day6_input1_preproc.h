
const char *input = "llqnqffqsqttfffbcfcbcbdcczccfssvwswrwddzlddpdhdwwlvlffjllnjjwjqwjjttwbwcwfccdmmnddgvvpwvvgsshnshsgglljfjzjpjfpfjpplddjcchdhvhlhvllvflfbllsdllgppwjjprjpjrrdwrdrggjvjppgbgttdppwhhcshsvvgpvggsllstsggdjdmjjrvjjszjsjbbsffjwjnwwzjjjvqvfftbffbpffndfdzfdfvdfdggmpmbbwgbgnnbtnnnhggdmdffrqrlrhrzzrmzzmbzzcdcwwzffsrrnfnvfnnvppwjjndjnndtdppgcppsmppljlpjjmlldlsltlglwgwcwnwvwddzrrllwjjnvjvwvppjssncnfcnfcfcczfccpjphjphjjjsgszzhthghjhrjrbrtrjrhrsrfftfzftfmmwmpmgghbggjrrsdswddtjjvnnrwrzrpzzlglwggrnrgrfftnffwwgllrqqzbqbbtltbbgdgpgphggspggplggmcmscsffzcfzzbggdrgrqgrrnlrnrbnnzsnnzcctvvnvwvnwnhhwpwtptllpflfcfttwtjjhwjhhbwhbbtppwhwvhvghvhphpwwcgwwhbbfvbffzpzlllrzlrrbnnrngrnrpnnsszbbqffpsffhfshfhzzqhhcgcgfggzmmdllthhrhnrrwggdqdsstccqllflmflfddjwjzjffvjjfgjgdgbdgdngnpgpnpffsnsjnnbbjdbjbtbmmbrrlbbqmqpqrprjjrbbvnbbzvvcwwlfwfggmhhdhsdhsdhshhqfhfrhhqlqttffpmmjzjqjggqzzdfzflfsllshhvjvfvbfvbbjljhhzrzqqszqzsqqswswbsbzszgzdgzzhjzhhvffhthvtthltthghzhvvjttczttlssvvgjjmsjstjjrfjjhbjbnjbjddqrddnbdnbnwbnbqbmqqgtgqtttcmmqbqrrgrrsrszssvpsvvjqjttjpjwwmwfwttczttgccwhcwwrzwzbwwqbqmqnmqqnfnmmmzdmzmpmssdpsslbbmgmbmlmnlldlccvzzlrzzqbqfqlflwlvlhhtrtcttgnnqhnqqtjjphjhwjhwhpwwvdvfddmndncnppcffhllfvfdfllhgslvtsqhtlfdflcjfmqbnctnfnwqrlqbzrcbvldrffcptsgslqcszqcfdvtpggvdqblwcgmdjqrpjdhtrmvrfrzznspqlfhnjsppbpjdggcwjwprpnlnntgfgmflctqphdmzfvpzzmbzmvrqdgchzmdvjdzmfsslpqvhpgznmpspjpdmlfwwjbbwqbfthghclldpmnsbcwlzswrsnfzbdzpcnrrpspdpfqhvmtfjlppqtphvzzqrwhzccnrgrtgfbfgtwvlwsmcvzmqmhsvztmmvpjzfwzgfwntbrsfthdgrcmgtdsvzcllmcshrlqldrvrnmdgbwttmhczvscrdvfgdvrhfvlghhsfbmrptbwmpnvtsrjlpjlbmmjzwwzbdtjlqqdczqgpzfjslccrcrblhplndblghchczbjjfzlsvvrqhvgdsncgpjhjlprhfhswwbmrnszqzhhlrbqpphvgtfsgmdpjwgcmqnvfdhrqmbspjpdrtdbqnbmbpgqwgmltqwrjprvsfjsmpldcqqbvmfhgzltzfvhlnfdqrphzzjrbdvnnjspvnlnnsdzvgqsqztndjpmnbqtwnpzmmfhsswwnnwwlbnpgbrhzchbnsrwwpprhntngsjzvssttqwfvjrdddtfpgtqqzcwljzmdjtgzdqjjvbqgdttdgvqvlfdsgcjhsmdmwrwdcqdflpfjbfzsvjrzrhhcnvcjblwcdvtbgfhfgcwrcjsrzcdrfwtvdqrghdtrjgdmhrfcsnwwwdpvjtpzdqfgrlmrqscjbfgdbgvflhvdjmnmslvsbcbgwplgqljmlzpgrfjwmvqfwmwrhnmdjhdwgjrngvccrbzmhcqthvvtdtmfqvfczhqbfgzgrmdtprznfzjtrcwqgztchtdmzmnwbfbnbttbvzsflcpsjshgphfdlvhdrcpsqnhjjggbnsqrfpwsdznzcwjbcswwndzbpdnfcbdrfgrmqzvtjttltbntznmqfsmqlgqvlqnrvgrnggslqhbplmgpzwlfzbvwdvrchsnhrnvgmzjdprvvspltcdzmdnlgtmrwnwpdndpdqjltcnmsggrvbprslqhfgmzqtppdpsjcmmbvfgmbpdnwdcgnssfgjhzhrjljdwhrzznscndgbscdmbbtbrnzbqzvcjgjgljbjlrrvdhjdllsnjzhwlmjslghrqplwjwssbzzpdzdfhhsqctlcddnfnnvbcwpdvzdcsgcqpctsjtdtnzpggpzsrrhfjtthqcqhtvwzltbdvdnbgwlppblwzjsqqbcpcrthhrhdnzhdnflqlvbzmcjfcrbmgdgqptfqfbmlfbblqdfmnwgvbdhmcmtmvtggqstjpwhvzjhbgpblmdrnggvrvphbglqgfcphmrgfmrwcdchtwfllqwsnbqttwdcvrwgzjfztmcffppqtmnwpgcrgwtjbdtjlmnpmvlzndljglzblwdrggqvbbfvqcbcbpqttrmqlcqnqvrfqsnlpmwlcgfwfcqpgmszfccbqtcqfwlwqrjjhrdbjqvdmfzjgncjqgqbthpgjgbfdvltbhpnbjqqwrsczrthfhmlzjjjgsjtsvgmwfsjngzfqdqzfhvwjrswvnqvsvvsjdbwlwdcsszdngmmhnnqsgvsrvpnndghrwgzztqczvhcrzdpqtrmrnfsfrlpdnbbtshfhplzqvdvzdvwhwsbpnbzlvcbgptdszjlcgfdzchjcsvhzdljvgpwstzwnssvhztcptnhslggnrschvfnmhcnjvldthtfpqzdvltfgnmtgvlrljhwqdzqfmfblstvfnpfcdsqslrqbztrbfzmsfjtjwhlzfnhrvpfqfqvtdllrvchmqphgljwcspgpwsdwqfdhsqhsflpbcbjjmjrfjrqrqfqcqzqsqcnqhfgsclfnfzblfdhphrvqdpvcqmllrcdnrlwqbrgqsbfqqllcvmglntjwcsjljgntmmldscndfdjcqpwbqpbmfjsgwfwcqbqbbhhgprlbzmvdfjcsmsqvhfhmgrhnwpslztmwbhdgrfzfcmwjswpbpzwstfbfmgwtprmptzjwtrqthrqwgslnmtlfgnvgpwvsfwthtrgwfbnnnwmdcfrpqqztplscvfnfpfwwdnfnzjccnhswwlcrrdqfhvsrnvcdrwmjswzggscplggbwgndsbntqvtrjbmbzrnbbmdjvwrmmtrmfjjhnvrcjcbqlhlthbvtjjczddblbbttmmzgdqmtdqswjdwbjhsrjbvdtqzqdbhhgbttgmgwfgfpczpqpfsddgslltwsvngwbwfbfcdzlqghwdbfzzldjpwpmpjmslwnwbrjjvwcsjgdzjwrrwnvgvrqlgjhwvrgnczspfplhfbtdpbpfqmhbvmcqdgrrjfslzgsqfpwrrrmjdtgbslddwvddrbmrdsdhhnlwsncrmnglrrpvtbrfvjbdmcpgphcdfwnfcglvmlbslttpmjnspqhnmbcqgmncfjjpdfjqhggnswbgppjhllscrvtmtmmbwbpgddtzblscntrmccdpzdnllqpvfdpfpwwvnnbjlzphvqwffwsjmbtllctrjmllwscmldcdrpfrzrqlpwbjwfgmnshzqzgdjqhcwtsqlsjffvzcpnrzmvtlzlgwvrrjtdbcnddbhjgqqzrvhplrbsrwgscjnfmhbcnpdcjqrltgdzzzzbqtsspbcdssbjrzfqdgvhmgdzsjdsqcfwbgrnhrlzgpjmhctqdccmvqzddmcptsjgtfshprqmslvtmtrprfsngrnnpnrccrvnrvcwzrbbnbghlwvcncgzglnqthchhsnzlfrcggdptvwlrbnfwgjpflgrcfzhhgffwcbhwlsdmvmsvvzvdcrlvlnstgz";
