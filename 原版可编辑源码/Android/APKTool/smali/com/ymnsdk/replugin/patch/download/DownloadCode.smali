.class public Lcom/ymnsdk/replugin/patch/download/DownloadCode;
.super Ljava/lang/Object;
.source "DownloadCode.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;
    }
.end annotation


# static fields
.field private static final mCodeMsg:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 3

    .line 29
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/ymnsdk/replugin/patch/download/DownloadCode;->mCodeMsg:Ljava/util/Map;

    .line 31
    sget-object v1, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;->ManualStop:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    const-string v2, "5|\u4ee3\u7801\u63a7\u5236\u6682\u505c\u5f53\u524d\u4e0b\u8f7d"

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 32
    sget-object v0, Lcom/ymnsdk/replugin/patch/download/DownloadCode;->mCodeMsg:Ljava/util/Map;

    sget-object v1, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;->Success:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    const-string v2, "-1|\u4e0b\u8f7d\u6210\u529f"

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 33
    sget-object v0, Lcom/ymnsdk/replugin/patch/download/DownloadCode;->mCodeMsg:Ljava/util/Map;

    sget-object v1, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;->TaskIsDownloading:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    const-string v2, "2|\u5f53\u524d\u4efb\u52a1\u6b63\u5728\u4e0b\u8f7d"

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 34
    sget-object v0, Lcom/ymnsdk/replugin/patch/download/DownloadCode;->mCodeMsg:Ljava/util/Map;

    sget-object v1, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;->RequestFail:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    const-string v2, "4|\u65ad\u70b9\u7eed\u4f20\uff1a\u4e0b\u8f7d\u8bf7\u6c42\u5931\u8d25"

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 35
    sget-object v0, Lcom/ymnsdk/replugin/patch/download/DownloadCode;->mCodeMsg:Ljava/util/Map;

    sget-object v1, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;->FileStatusSyncError:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    const-string v2, "5|\u65ad\u70b9\u7eed\u4f20\uff1a\u6587\u4ef6\u72b6\u6001\u540c\u6b65\u5931\u8d25"

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 36
    sget-object v0, Lcom/ymnsdk/replugin/patch/download/DownloadCode;->mCodeMsg:Ljava/util/Map;

    sget-object v1, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;->FileSyncReadStatusException:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    const-string v2, "5|\u65ad\u70b9\u7eed\u4f20\uff1a\u540c\u6b65\u5199\u6587\u4ef6\u72b6\u6001\u51fa\u9519"

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 37
    sget-object v0, Lcom/ymnsdk/replugin/patch/download/DownloadCode;->mCodeMsg:Ljava/util/Map;

    sget-object v1, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;->FileReadStreamException:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    const-string v2, "4|\u65ad\u70b9\u7eed\u4f20\uff1a\u8bfb\u5199\u8d85\u65f6\uff0csocket\u8d85\u65f6"

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 38
    sget-object v0, Lcom/ymnsdk/replugin/patch/download/DownloadCode;->mCodeMsg:Ljava/util/Map;

    sget-object v1, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;->FileIsBroken:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    const-string v2, "\u91cd\u65b0\u4e0b\u8f7d\uff1a\u6587\u4ef6\u635f\u6bc1, \u65e0\u6cd5\u65ad\u70b9\u7eed\u4f20"

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 39
    sget-object v0, Lcom/ymnsdk/replugin/patch/download/DownloadCode;->mCodeMsg:Ljava/util/Map;

    sget-object v1, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;->FileVerifyHashFailed:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    const-string v2, "3|\u91cd\u65b0\u4e0b\u8f7d\uff1apatch\u4e0b\u8f7d\u6821\u9a8c\u5931\u8d25"

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 40
    sget-object v0, Lcom/ymnsdk/replugin/patch/download/DownloadCode;->mCodeMsg:Ljava/util/Map;

    sget-object v1, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;->FileVerifySizeFailed:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    const-string v2, "1|\u91cd\u65b0\u4e0b\u8f7d\uff1a\u6587\u4ef6\u957f\u5ea6\u4e0e\u670d\u52a1\u5668\u957f\u5ea6\u4e0d\u4e00\u81f4"

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 41
    sget-object v0, Lcom/ymnsdk/replugin/patch/download/DownloadCode;->mCodeMsg:Ljava/util/Map;

    sget-object v1, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;->FileRenameFailed:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    const-string v2, "5|\u6587\u4ef6\u91cd\u547d\u540d\u5931\u8d25"

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 42
    sget-object v0, Lcom/ymnsdk/replugin/patch/download/DownloadCode;->mCodeMsg:Ljava/util/Map;

    sget-object v1, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;->NetworkTimeout:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    const-string v2, "4|\u4e0a\u5c42\u8c03\u7528\uff1a\u7f51\u7edc\u8fde\u63a5\u8d85\u65f6"

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 43
    sget-object v0, Lcom/ymnsdk/replugin/patch/download/DownloadCode;->mCodeMsg:Ljava/util/Map;

    sget-object v1, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;->NetworkUnreachable:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    const-string v2, "0|\u4e0a\u5c42\u8c03\u7528\uff1a\u65e0\u7f51\u7edc"

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 6
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static translate(Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;)Ljava/lang/String;
    .locals 1

    .line 47
    sget-object v0, Lcom/ymnsdk/replugin/patch/download/DownloadCode;->mCodeMsg:Ljava/util/Map;

    invoke-interface {v0, p0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 48
    sget-object v0, Lcom/ymnsdk/replugin/patch/download/DownloadCode;->mCodeMsg:Ljava/util/Map;

    invoke-interface {v0, p0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/String;

    return-object p0

    :cond_0
    const-string p0, "Invalid Code!"

    return-object p0
.end method
