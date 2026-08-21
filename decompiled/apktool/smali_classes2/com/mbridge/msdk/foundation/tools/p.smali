.class public final Lcom/mbridge/msdk/foundation/tools/p;
.super Ljava/lang/Object;
.source "MappingFile.java"


# static fields
.field private static final a:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 6

    .line 7
    new-instance v0, Ljava/util/HashMap;

    const/16 v1, 0x118

    invoke-direct {v0, v1}, Ljava/util/HashMap;-><init>(I)V

    sput-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "a"

    const-string v2, "\u8bfb\u53d6\u7535\u8bdd\u72b6\u6001"

    .line 10
    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 11
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "b"

    const-string v2, "\u8bbf\u95ee\u7f51\u7edc"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 12
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "c"

    const-string v2, "\u5141\u8bb8\u5e94\u7528\u7a0b\u5e8f\u8bf7\u6c42\u5b89\u88c5\u5305"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 13
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "d"

    const-string v2, "\u8bbf\u95ee\u7f51\u7edc\u72b6\u6001"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 14
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "e"

    const-string v2, "\u8bbf\u95ee\u65e0\u7ebf\u72b6\u6001"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 15
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "f"

    const-string v2, "\u8bfb\u53d6\u5916\u90e8\u5b58\u50a8"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 16
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "g"

    const-string v2, "\u5199\u5165\u5916\u90e8\u5b58\u50a8"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 17
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "h"

    const-string v2, "\u5524\u9192\u9501\u5b9a"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 18
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "i"

    const-string v2, "\u83b7\u53d6\u4efb\u52a1\u4fe1\u606f"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 19
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "j"

    const-string v2, "\u66f4\u6539\u65e0\u7ebf\u7f51\u7edc\u72b6\u6001"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 20
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "k"

    const-string v2, "\u53d8\u66f4\u7f51\u7edc\u72b6\u6001"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 21
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "l"

    const-string v2, "\u5141\u8bb8\u9707\u52a8"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 22
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "m"

    const-string v2, "\u8bbf\u95ee\u7c97\u7565\u5b9a\u4f4d"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 23
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "n"

    const-string v2, "\u8bbf\u95ee\u7cbe\u51c6\u5b9a\u4f4d"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 24
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "o"

    const-string v2, "\u8bfb\u53d6\u65e5\u5fd7"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 25
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "p"

    const-string v2, "\u5f00\u673a\u81ea\u52a8\u8fd0\u884c"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 26
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "q"

    const-string v2, "\u6392\u5e8f\u7cfb\u7edf\u4efb\u52a1"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 27
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "r"

    const-string v2, "\u4f7f\u7528\u524d\u53f0\u670d\u52a1"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 28
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "s"

    const-string v2, "\u6302\u8f7d\u6587\u4ef6\u7cfb\u7edf"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 29
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "t"

    const-string v2, "\u5141\u8bb8\u5ffd\u7565\u7535\u6c60\u4f18\u5316"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 30
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "u"

    const-string v2, "\u83b7\u53d6\u5e94\u7528\u5927\u5c0f"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 31
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "v"

    const-string v2, "\u663e\u793a\u7cfb\u7edf\u7a97\u53e3"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 32
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "w"

    const-string v2, "\u5199\u5165\u8bbe\u7f6e"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 33
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "x"

    const-string v2, "\u84dd\u7259"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 34
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "y"

    const-string v2, "\u6539\u53d8\u65e0\u7ebf\u7ec4\u64ad\u72b6\u6001"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 35
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "z"

    const-string v2, "\u8bbf\u95ee\u5b9a\u4f4d\u989d\u5916\u547d\u4ee4"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 36
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "aa"

    const-string v2, "\u6444\u50cf\u5934"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 37
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "\u83b7\u53d6\u8d26\u6237"

    const-string v2, "ab"

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 38
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "ac"

    const-string v3, "\u8bfb\u53d6\u8054\u7cfb\u4eba"

    invoke-virtual {v0, v2, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 39
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "ad"

    const-string v3, "\u4fee\u6539\u97f3\u9891\u8bbe\u7f6e"

    invoke-virtual {v0, v2, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 40
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "ae"

    const-string v3, "\u5f55\u5236\u97f3\u9891"

    invoke-virtual {v0, v2, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 41
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "af"

    const-string v3, "\u84dd\u7259\u7ba1\u7406"

    invoke-virtual {v0, v2, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 42
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "ag"

    const-string v3, "\u7ed3\u675f\u7cfb\u7edf\u4efb\u52a1"

    invoke-virtual {v0, v2, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 43
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "ah"

    const-string v3, "\u521b\u5efa\u5feb\u6377\u65b9\u5f0f"

    invoke-virtual {v0, v2, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 44
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "ai"

    const-string v3, "\u9a8c\u8bc1\u8d26\u6237"

    invoke-virtual {v0, v2, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 45
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "aj"

    const-string v3, "\u8bbe\u7f6e\u684c\u9762\u58c1\u7eb8"

    invoke-virtual {v0, v2, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 46
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "\u7ba1\u7406\u8d26\u6237"

    const-string v3, "ak"

    invoke-virtual {v0, v3, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 47
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v3, "al"

    const-string v4, "\u7ed3\u675f\u540e\u53f0\u8fdb\u7a0b"

    invoke-virtual {v0, v3, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 48
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v3, "am"

    const-string v4, "\u4f7f\u7528\u8bc1\u4e66"

    invoke-virtual {v0, v3, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 49
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v3, "an"

    const-string v4, "\u5199\u5165\u540c\u6b65\u8bbe\u7f6e"

    invoke-virtual {v0, v3, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 50
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v3, "ao"

    const-string v4, "\u7981\u7528\u952e\u76d8\u9501"

    invoke-virtual {v0, v3, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 51
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v3, "ap"

    const-string v4, "\u4f7f\u7528\u95ea\u5149\u706f"

    invoke-virtual {v0, v3, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 52
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v3, "aq"

    const-string v4, "\u6536\u96c6\u7ec4\u4ef6\u4f7f\u7528\u7edf\u8ba1\u4fe1\u606f"

    invoke-virtual {v0, v3, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 53
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v3, "ar"

    const-string v4, "\u5141\u8bb8 NFC \u901a\u8baf"

    invoke-virtual {v0, v3, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 54
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v3, "as"

    const-string v4, "\u8bbe\u7f6e\u95f9\u94c3\u63d0\u9192"

    invoke-virtual {v0, v3, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 55
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v3, "at"

    const-string v4, "\u8bfb\u53d6\u8bbe\u7f6e"

    invoke-virtual {v0, v3, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 56
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v3, "au"

    const-string v4, "\u79fb\u9664\u5feb\u6377\u65b9\u5f0f"

    invoke-virtual {v0, v3, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 57
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v3, "av"

    const-string v4, "\u5141\u8bb8\u5e94\u7528\u4f7f\u7528\u6307\u7eb9\u786c\u4ef6"

    invoke-virtual {v0, v3, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 58
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v3, "aw"

    const-string v4, "\u8bfb\u53d6\u65e5\u5386"

    invoke-virtual {v0, v3, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 59
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v3, "ax"

    const-string v4, "\u5199\u5165\u65e5\u5386"

    invoke-virtual {v0, v3, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 60
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v3, "ay"

    const-string v4, "\u8bfb\u53d6\u7528\u6237\u7684\u901a\u8bdd\u8bb0\u5f55"

    invoke-virtual {v0, v3, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 61
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v3, "az"

    const-string v4, "\u8bfb\u53d6\u540c\u6b65\u72b6\u6001"

    invoke-virtual {v0, v3, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 62
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v3, "ba"

    const-string v4, "\u7535\u91cf\u7edf\u8ba1"

    invoke-virtual {v0, v3, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 63
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v3, "bb"

    const-string v4, "\u62e8\u6253\u7535\u8bdd"

    invoke-virtual {v0, v3, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 64
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v3, "bc"

    const-string v4, "\u5141\u8bb8\u5e94\u7528\u7a0b\u5e8f\u8bf7\u6c42\u5220\u9664\u5305"

    invoke-virtual {v0, v3, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 65
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v3, "bd"

    const-string v4, "\u8fde\u7eed\u5e7f\u64ad"

    invoke-virtual {v0, v3, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 66
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v3, "be"

    const-string v4, "\u6e05\u9664\u5e94\u7528\u7f13\u5b58"

    invoke-virtual {v0, v3, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 67
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v3, "bf"

    const-string v4, "\u53d8\u66f4\u914d\u7f6e"

    invoke-virtual {v0, v3, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 68
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v3, "bg"

    const-string v4, "\u8bfb\u53d6\u6536\u85cf\u5939\u548c\u5386\u53f2\u8bb0\u5f55"

    invoke-virtual {v0, v3, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 69
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v3, "\u72b6\u6001\u680f\u63a7\u5236"

    const-string v4, "bh"

    invoke-virtual {v0, v4, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 70
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v4, "bi"

    const-string v5, "\u7ba1\u7406\u5bf9\u6587\u6863\u7684\u8bbf\u95ee"

    invoke-virtual {v0, v4, v5}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 71
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v4, "bj"

    const-string v5, "\u4f7f\u7528\u8bbe\u5907\u652f\u6301\u7684\u751f\u7269\u8bc6\u522b\u6a21\u5f0f"

    invoke-virtual {v0, v4, v5}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 72
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v4, "bk"

    const-string v5, "\u5bf9\u5e0c\u671b\u8bbf\u95ee\u901a\u77e5\u653f\u7b56\u7684\u5e94\u7528\u7a0b\u5e8f\u7684\u6807\u8bb0\u6743\u9650"

    invoke-virtual {v0, v4, v5}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 73
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v4, "bl"

    const-string v5, "\u6ce8\u5c04\u4e8b\u4ef6"

    invoke-virtual {v0, v4, v5}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 74
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v4, "bm"

    const-string v5, "\u8bfb\u53d6\u540c\u6b65\u8bbe\u7f6e"

    invoke-virtual {v0, v4, v5}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 75
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v4, "bn"

    const-string v5, "\u8bbe\u7f6e\u8c03\u8bd5\u7a0b\u5e8f"

    invoke-virtual {v0, v4, v5}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 76
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v4, "bo"

    invoke-virtual {v0, v4, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 77
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "bp"

    const-string v4, "\u7ed1\u5b9a\u5c0f\u63d2\u4ef6"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 78
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "bq"

    const-string v4, "\u5141\u8bb8\u5e94\u7528\u7a0b\u5e8f\u8bbf\u95ee\u7528\u6237\u7528\u6765\u6d4b\u91cf\u8eab\u4f53\u5185\u90e8\u60c5\u51b5\u7684\u4f20\u611f\u5668\u6570\u636e\uff0c\u4f8b\u5982\u5fc3\u7387"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 79
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "br"

    const-string v4, "\u6539\u53d8\u7ec4\u4ef6\u72b6\u6001"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 80
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "bs"

    const-string v4, "\u6e05\u9664\u7528\u6237\u6570\u636e"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 81
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "bt"

    const-string v4, "\u5220\u9664\u5e94\u7528"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 82
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "bu"

    const-string v4, "\u7535\u6e90\u7ba1\u7406"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 83
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "bv"

    const-string v4, "\u8bf7\u6c42\u5b89\u88c5\u8f6f\u4ef6\u5305"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 84
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "bw"

    const-string v4, "\u5141\u8bb8\u5e94\u7528\u7a0b\u5e8f\u5728Launcher\u4e2d\u5b89\u88c5\u5feb\u6377\u65b9\u5f0f"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 85
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "bx"

    const-string v4, "\u6c38\u4e45 Activity"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 86
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "by"

    const-string v4, "\u8bbe\u7f6e\u7cfb\u7edf\u65f6\u95f4"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 87
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "bz"

    const-string v4, "\u8bbe\u7f6e\u7cfb\u7edf\u65f6\u533a"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 88
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "ca"

    const-string v4, "\u8bbe\u7f6e\u58c1\u7eb8\u5efa\u8bae"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 89
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "cb"

    const-string v4, "\u8bbf\u95ee\u8ba2\u9605\u5185\u5bb9"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 90
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "cc"

    const-string v4, "\t\u5199\u5165\u8ba2\u9605\u5185\u5bb9"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 91
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "cd"

    const-string v4, "\u5141\u8bb8\u4f7f\u7528\u8bbe\u5907\u7684\u7ea2\u5916\u53d1\u5c04\u5668\uff08\u5982\u679c\u6709\uff09"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 92
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "ce"

    const-string v4, "\u4e0d\u518d\u652f\u6301\u6b64\u6743\u9650"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 93
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "cf"

    const-string v4, "\u5c4f\u5e55\u5b9a\u4f4d"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 94
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "cg"

    const-string v4, "\u4f7f\u7528 SIP \u89c6\u9891"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 95
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "ch"

    const-string v4, "\u5199\u5165 GPRS \u63a5\u5165\u70b9\u8bbe\u7f6e"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 96
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "ci"

    const-string v4, "\u5199\u5165\u6536\u85cf\u5939\u548c\u5386\u53f2\u8bb0\u5f55"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 97
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "cj"

    const-string v4, "\u5141\u8bb8\u547c\u53eb\u5e94\u7528\u7ee7\u7eed\u5728\u53e6\u4e00\u4e2a\u5e94\u7528\u4e2d\u542f\u52a8\u7684\u547c\u53eb"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 98
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "ck"

    const-string v4, "\u8bbf\u95ee\u767b\u8bb0\u5c5e\u6027"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 99
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "cl"

    const-string v4, "\u83b7\u53d6\u6a21\u62df\u5b9a\u4f4d\u4fe1\u606f"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 100
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "cm"

    const-string v4, "\u8bbf\u95ee Surface Flinger"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 101
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "cn"

    const-string v4, "\u5141\u8bb8\u5e94\u7528\u7a0b\u5e8f\u5c06\u8bed\u97f3\u90ae\u4ef6\u6dfb\u52a0\u5230\u7cfb\u7edf\u4e2d"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 102
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "co"

    const-string v4, "\u5141\u8bb8\u8be5\u5e94\u7528\u63a5\u542c\u6765\u7535"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 103
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "cp"

    const-string v4, "Android\u7cfb\u7edf\u7684\u53ef\u8bbf\u95ee\u6027\u670d\u52a1"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 104
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "cq"

    const-string v4, "\u5141\u8bb8\u7a0b\u5e8f\u5185\u5bb9\u88ab\u81ea\u52a8\u586b\u5199"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 105
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "cr"

    const-string v4, "\u5141\u8bb8\u7ed1\u5b9a\u5230\u8fd0\u8425\u5546\u5e94\u7528\u7a0b\u5e8f\u4e2d\u7684\u670d\u52a1\u7684\u7cfb\u7edf\u8fdb\u7a0b\u5c06\u6709\u8fd9\u4e2a\u6743\u9650"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 106
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "cs"

    const-string v4, "\u5141\u8bb8\u7ed1\u5b9a\u5230\u8fd0\u8425\u5546\u5e94\u7528\u7a0b\u5e8f\u4e2d\u7684\u670d\u52a1\u7684\u7cfb\u7edf\u8fdb\u7a0b\u5c06\u5177\u6709\u6b64\u6743\u9650"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 107
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "ct"

    const-string v4, "\u5141\u8bb8\u7528\u6237\u5728\u4e00\u4e2a\u5e94\u7528\u91cc\u9762\u76f4\u63a5\u5206\u4eab\u5185\u5bb9\u5230\u5176\u4ed6\u5730\u65b9"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 108
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "cu"

    const-string v4, "\u5e94\u7528\u4e8eCompanionDeviceService"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 109
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "cv"

    const-string v4, "\u63d0\u4f9b\u6709\u5173\u5e03\u5c14\u72b6\u6001\u7684\u6761\u4ef6\u7684\u670d\u52a1"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 110
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "cw"

    const-string v4, "\u7ed1\u5b9a\u8bbe\u5907\u7ba1\u7406"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 111
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "cx"

    const-string v4, "\u5141\u8bb8\u8bbe\u5907\u95f2\u7f6e\u3001\u5145\u7535\u6216\u9501\u5c4f\u65f6\uff0c\u53ef\u4ee5\u663e\u793a\u7279\u5b9a\u7684\u5185\u5bb9"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 112
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "cy"

    const-string v4, "\u5141\u8bb8\u63d0\u4f9b\u7528\u4e8e\u7ba1\u7406\u7535\u8bdd\u547c\u53eb\u7684\u7528\u6237\u754c\u9762"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 113
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "cz"

    const-string v4, "\u7ed1\u5b9a\u8f93\u5165\u6cd5"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 114
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "da"

    const-string v4, "\u5141\u8bb8\u5b9e\u73b0\u865a\u62dfMIDI\u8bbe\u5907\u7684\u670d\u52a1"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 115
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "db"

    const-string v4, "\u5141\u8bb8\u6a21\u62dfAndroid\u670d\u52a1\u7ec4\u4ef6\u5185\u7684NFC\u5361"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 116
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "dc"

    const-string v4, "\u5141\u8bb8\u63a5\u6536\u5728\u53d1\u5e03\u6216\u5220\u9664\u65b0\u901a\u77e5\u6216\u5176\u6392\u540d\u53d1\u751f\u53d8\u5316\u65f6\u6765\u81ea\u7cfb\u7edf\u7684\u547c\u53eb\u7684\u670d\u52a1"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 117
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "dd"

    const-string v4, "\u5141\u8bb8\u5b9e\u73b0\u6253\u5370\u670d\u52a1"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 118
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "de"

    const-string v4, "\u5141\u8bb8\u5e94\u7528\u7a0b\u5e8f\u7ed1\u5b9a\u5230\u7b2c\u4e09\u65b9\u5feb\u901f\u8bbe\u7f6e\u78c1\u8d34"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 119
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "df"

    const-string v4, "\u7ed1\u5b9a RemoteView"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 120
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "dg"

    const-string v4, "\u5141\u8bb8\u6765\u7535\u8fc7\u6ee4"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 121
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "dh"

    const-string v4, "\u7ba1\u7406Android\u7cfb\u7edf\u5f53\u524d\u7684\u901a\u8bdd\uff0c\u5982\u6765\u7535\u663e\u793a\uff0c\u63a5\u542c\u7535\u8bdd\uff0c\u6302\u65ad\u7535\u8bdd"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 122
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "di"

    const-string v4, "\u5141\u8bb8\u521b\u5efa\u62fc\u5199\u68c0\u67e5\u5668\u7c7b"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 123
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "dj"

    const-string v4, "\u5141\u8bb8\u5b9e\u73b0\u7535\u89c6\u8f93\u5165\u670d\u52a1"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 124
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "dk"

    const-string v4, "\u5b9e\u73b0\u5904\u7406OMTP\u6216\u7c7b\u4f3c\u53ef\u89c6\u8bed\u97f3\u90ae\u4ef6\u7684\u62e8\u53f7\u7a0b\u5e8f\u670d\u52a1"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 125
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "dl"

    const-string v4, "\u5168\u5c40\u8bed\u97f3\u4ea4\u4e92\u670d\u52a1"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 126
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "dm"

    const-string v4, "\u865a\u62df\u73b0\u5b9e\uff08VR\uff09\u670d\u52a1"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 127
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "dn"

    const-string v4, "\u7ed1\u5b9a\u58c1\u7eb8"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 128
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "do"

    const-string v4, "\u5141\u8bb8\u8fd0\u884cv*n\u89e3\u51b3\u65b9\u6848"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 129
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "dp"

    const-string v4, "\u5141\u8bb8\u5e94\u7528\u7a0b\u5e8f\u5728\u6ca1\u6709\u7528\u6237\u4ea4\u4e92\u7684\u60c5\u51b5\u4e0b\u914d\u5bf9\u84dd\u7259\u8bbe\u5907"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 130
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "dq"

    const-string v4, "\u5fc5\u987b\u80fd\u591f\u53d1\u73b0\u9644\u8fd1\u7684\u84dd\u7259\u8bbe\u5907\u5e76\u4e0e\u4e4b\u914d\u5bf9"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 131
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "dr"

    const-string v4, "\u53d8\u6210\u7816\u5934"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 132
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "ds"

    const-string v4, "\u5e94\u7528\u5220\u9664\u65f6\u5e7f\u64ad"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 133
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "dt"

    const-string v4, "\u6536\u5230\u77ed\u4fe1\u65f6\u5e7f\u64ad"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 134
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "du"

    const-string v4, "WAP PUSH \u5e7f\u64ad"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 135
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "dv"

    const-string v4, "\u5141\u8bb8\u5b9e\u73b0InCallServiceAPI\u7684\u5e94\u7528\u7a0b\u5e8f"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 136
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "dw"

    const-string v4, "\u901a\u8bdd\u6743\u9650"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 137
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "dx"

    const-string v4, "\u5141\u8bb8\u5e94\u7528\u7a0b\u5e8f\u6355\u83b7\u97f3\u9891\u8f93\u51fa"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 138
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "dy"

    const-string v4, "\u624b\u673a\u4f18\u5316\u5927\u5e08\u6269\u5c55\u6743\u9650"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 139
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "dz"

    const-string v4, "\u63a7\u5236\u5b9a\u4f4d\u66f4\u65b0"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 140
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "ea"

    const-string v4, "\u5e95\u5c42\u8bbf\u95ee\u6743\u9650"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 141
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "eb"

    const-string v4, "\u5220\u9664\u7f13\u5b58\u6587\u4ef6"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 142
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "ec"

    const-string v4, "\u5e94\u7528\u8bca\u65ad"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 143
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "ed"

    const-string v4, "\u8f6c\u5b58\u7cfb\u7edf\u4fe1\u606f"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 144
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "ee"

    const-string v4, "\u5de5\u5382\u6d4b\u8bd5\u6a21\u5f0f"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 145
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "ef"

    const-string v4, "\u5f3a\u5236\u540e\u9000"

    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 146
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v2, "eg"

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 147
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "eh"

    const-string v2, "\u5141\u8bb8\u5e94\u7528\u7a0b\u5e8f\u83b7\u5f97\u5c4f\u5e55\u9501\u5b9a\u590d\u6742\u6027\u5e76\u63d0\u793a\u7528\u6237\u5c06\u5c4f\u5e55\u9501\u5b9a\u66f4\u65b0\u5230\u67d0\u4e2a\u590d\u6742\u7a0b\u5ea6"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 148
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "ei"

    const-string v2, "\u5141\u8bb8\u5168\u5c40\u641c\u7d22"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 149
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "ej"

    const-string v2, "\u786c\u4ef6\u6d4b\u8bd5"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 150
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "ek"

    const-string v2, "\u5141\u8bb8\u5e94\u7528\u963b\u6b62\u5728\u5176\u9876\u90e8\u7ed8\u5236\u975e\u7cfb\u7edf\u8986\u76d6\u7684\u7a97\u53e3"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 151
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "el"

    const-string v2, "\u5141\u8bb8\u5e94\u7528\u8bbf\u95ee\u91c7\u6837\u7387\u5927\u4e8e200Hz\u7684\u4f20\u611f\u5668\u6570\u636e"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 152
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "em"

    const-string v2, "\u5b89\u88c5\u5b9a\u4f4d\u63d0\u4f9b"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 153
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "en"

    const-string v2, "\u524d\u53f0\u670d\u52a1"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 154
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "eo"

    const-string v2, "\u5185\u90e8\u7cfb\u7edf\u7a97\u53e3"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 155
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "ep"

    const-string v2, "\u5141\u8bb8\u5e94\u7528\u7a0b\u5e8f\u5728\u786c\u4ef6\u4e2d\u4f7f\u7528\u4f4d\u7f6e\u529f\u80fd"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 156
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "eq"

    const-string v2, "\u7ba1\u7406\u7a0b\u5e8f\u5f15\u7528"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 157
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "er"

    const-string v2, "\u5141\u8bb8\u5e94\u7528\u7a0b\u5e8f\u4fee\u6539\u548c\u5220\u9664\u6b64\u8bbe\u5907\u6216\u4efb\u4f55\u8fde\u63a5\u7684\u5b58\u50a8\u8bbe\u5907\u4e0a\u7684\u5a92\u4f53\u6587\u4ef6\uff0c\u800c\u65e0\u9700\u7528\u6237\u786e\u8ba4"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 158
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "es"

    const-string v2, "\u5141\u8bb8\u67e5\u8be2\u6b63\u5728\u8fdb\u884c\u7684\u901a\u8bdd\u8be6\u7ec6\u4fe1\u606f\u5e76\u7ba1\u7406\u6b63\u5728\u8fdb\u884c\u7684\u901a\u8bdd"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 159
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "et"

    const-string v2, "\u5141\u8bb8\u901a\u8fc7\u81ea\u6211\u7ba1\u7406\u7684ConnectionServiceAPI\u7ba1\u7406\u81ea\u5df1\u7684\u8c03\u7528\u7684\u8c03\u7528\u5e94\u7528\u7a0b\u5e8f"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 160
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "eu"

    const-string v2, "\u8f6f\u683c\u5f0f\u5316"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 161
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "ev"

    const-string v2, "\u5141\u8bb8\u5e94\u7528\u7a0b\u5e8f\u77e5\u9053\u6b63\u5728\u64ad\u653e\u7684\u5185\u5bb9\u5e76\u63a7\u5236\u5176\u64ad\u653e"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 162
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "ew"

    const-string v2, "\u4fee\u6539\u7535\u8bdd\u72b6\u6001"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 163
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "ex"

    const-string v2, "\u683c\u5f0f\u5316\u6587\u4ef6\u7cfb\u7edf"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 164
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "ey"

    const-string v2, "\u793e\u533a\u6743\u9650"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 165
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "ez"

    const-string v2, "\u9ad8\u7ea7\u6743\u9650"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 166
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "fa"

    const-string v2, "\u5141\u8bb8\u5e94\u7528\u7a0b\u5e8f\u63a5\u6536NFC\u4ea4\u6613\u4e8b\u4ef6"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 167
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "fb"

    const-string v2, "\u5904\u7406\u62e8\u51fa\u7535\u8bdd"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 168
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "fc"

    const-string v2, "\u5c4f\u5e55\u622a\u56fe"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 169
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "fd"

    const-string v2, "\u8bfb\u53d6\u8f93\u5165\u72b6\u6001"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 170
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "fe"

    const-string v2, "\u5141\u8bb8\u5e94\u7528\u7a0b\u5e8f\u8bfb\u53d6\u7528\u6237\u7684\u5171\u4eab\u97f3\u9891\u96c6\u5408"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 171
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "ff"

    const-string v2, "\u5141\u8bb8\u5e94\u7528\u7a0b\u5e8f\u8bfb\u53d6\u7528\u6237\u7684\u5171\u4eab\u56fe\u50cf\u96c6\u5408"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 172
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "fg"

    const-string v2, "\u5141\u8bb8\u5e94\u7528\u7a0b\u5e8f\u8bfb\u53d6\u7528\u6237\u7684\u5171\u4eab\u89c6\u9891\u96c6"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 173
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "fh"

    const-string v2, "\u5141\u8bb8\u8bfb\u53d6\u8bbe\u5907\u7684\u7535\u8bdd\u53f7\u7801"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 174
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "fi"

    const-string v2, "\u8bfb\u53d6\u77ed\u4fe1\u5185\u5bb9"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 175
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "fj"

    const-string v2, "\u5141\u8bb8\u5e94\u7528\u7a0b\u5e8f\u8bfb\u53d6\u7cfb\u7edf\u4e2d\u7684\u8bed\u97f3\u90ae\u4ef6"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 176
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "fk"

    const-string v2, "\u91cd\u542f\u8bbe\u5907"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 177
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "fl"

    const-string v2, "\u63a5\u6536\u5f69\u4fe1"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 178
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "fm"

    const-string v2, "\u63a5\u6536\u77ed\u4fe1"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 179
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "fn"

    const-string v2, "\u63a5\u6536 Wap Push"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 180
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "fo"

    const-string v2, "\u5141\u8bb8\u5e94\u7528\u901a\u8fc7CompanionDeviceManager\u8bf7\u6c42\u5c06\u8bbe\u5907\u4e0e\u201c\u624b\u8868\u201d\u5173\u8054"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 181
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "fp"

    const-string v2, "\u5141\u8bb8\u968f\u64ad\u5e94\u7528\u5728\u540e\u53f0\u8fd0\u884c"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 182
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "fq"

    const-string v2, "\u5141\u8bb8\u914d\u5957\u5e94\u7528\u5728\u540e\u53f0\u4f7f\u7528\u6570\u636e"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 183
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "fr"

    const-string v2, "\u5141\u8bb8\u5e94\u7528\u7a0b\u5e8f\uff08\u7535\u8bdd\uff09\u5411\u5176\u4ed6\u5e94\u7528\u7a0b\u5e8f\u53d1\u9001\u8bf7\u6c42\uff0c\u4ee5\u5904\u7406\u6765\u7535\u671f\u95f4\u7684\u54cd\u5e94\u6d88\u606f\u64cd\u4f5c"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 184
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "fs"

    const-string v2, "\u53d1\u9001\u77ed\u4fe1"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 185
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "ft"

    const-string v2, "\u8bbe\u7f6e Activity \u89c2\u5bdf\u5668"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 186
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "fu"

    const-string v2, "\u5141\u8bb8\u5e94\u7528\u7a0b\u5e8f\u5e7f\u64adIntent\u4ee5\u4e3a\u7528\u6237\u8bbe\u7f6e\u8b66\u62a5"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 187
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "fv"

    const-string v2, "\u8bbe\u7f6e\u603b\u662f\u9000\u51fa"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 188
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "fw"

    const-string v2, "\u8bbe\u7f6e\u52a8\u753b\u7f29\u653e"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 189
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "fx"

    const-string v2, "\u8bbe\u7f6e\u5c4f\u5e55\u65b9\u5411"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 190
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "fy"

    const-string v2, "\u8bbe\u7f6e\u5e94\u7528\u53c2\u6570"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 191
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "fz"

    const-string v2, "\u8bbe\u7f6e\u8fdb\u7a0b\u9650\u5236"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 192
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "ga"

    const-string v2, "\u53d1\u9001\u6c38\u4e45\u8fdb\u7a0b\u4fe1\u53f7"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 193
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "gb"

    const-string v2, "\u5141\u8bb8\u8d22\u52a1\u5e94\u7528\u8bfb\u53d6\u8fc7\u6ee4\u7684\u77ed\u4fe1\u606f"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 194
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "gc"

    const-string v2, "\u5141\u8bb8\u5e94\u7528\u7a0b\u5e8f\u4ece\u540e\u53f0\u542f\u52a8\u524d\u53f0\u670d\u52a1\uff0c\u53ea\u80fd\u6388\u4e88\u7279\u6743\u5e94\u7528\u7a0b\u5e8f\u6216\u5177\u6709SMS/EMERGENCY/SYSTEMGALLERY\u89d2\u8272\u7684\u5e94\u7528\u7a0b\u5e8f"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 195
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "gd"

    invoke-virtual {v0, v1, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 196
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "ge"

    const-string v2, "\u66f4\u65b0\u8bbe\u5907\u72b6\u6001"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 197
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "gf"

    const-string v2, "\u5141\u8bb8\u8bfb\u53d6\u8bbe\u5907\u6807\u8bc6\u7b26\u5e76\u4f7f\u200b\u200b\u7528\u57fa\u4e8eICC\u7684\u8eab\u4efd\u9a8c\u8bc1\uff0c\u4f8b\u5982EAP-AKA"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 198
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "gg"

    const-string v2, "\u5141\u8bb8\u5e94\u7528\u7a0b\u5e8f\u5199\u5165\uff08\u4f46\u4e0d\u8bfb\u53d6\uff09\u7528\u6237\u7684\u547c\u53eb\u65e5\u5fd7\u6570\u636e"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 199
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "gh"

    const-string v2, "\u5199\u5165\u8054\u7cfb\u4eba"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 200
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "gi"

    const-string v2, "\u5199\u5165 Google \u5730\u56fe\u6570\u636e"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 201
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "gj"

    const-string v2, "\u8bfb\u5199\u7cfb\u7edf\u654f\u611f\u8bbe\u7f6e"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 202
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "gk"

    const-string v2, "\u7f16\u5199\u77ed\u4fe1"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 203
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    const-string v1, "gl"

    const-string v2, "\u5141\u8bb8\u5e94\u7528\u7a0b\u5e8f\u4fee\u6539\u548c\u5220\u9664\u7cfb\u7edf\u4e2d\u7684\u73b0\u6709\u8bed\u97f3\u90ae\u4ef6"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public static a(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 208
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    if-eqz v0, :cond_0

    invoke-virtual {v0, p0}, Ljava/util/HashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 209
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/p;->a:Ljava/util/HashMap;

    invoke-virtual {v0, p0}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/String;

    goto :goto_0

    :cond_0
    const-string p0, ""

    :goto_0
    return-object p0
.end method
