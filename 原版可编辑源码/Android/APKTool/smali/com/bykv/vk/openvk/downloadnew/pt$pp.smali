.class public Lcom/bykv/vk/openvk/downloadnew/pt$pp;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/socialbase/downloader/network/IDownloadHttpService;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bykv/vk/openvk/downloadnew/pt;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "pp"
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 504
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public downloadWithConnection(ILjava/lang/String;Ljava/util/List;)Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/HttpHeader;",
            ">;)",
            "Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 507
    invoke-static {p2, p3}, Lcom/bykv/vk/openvk/downloadnew/q;->rg(Ljava/lang/String;Ljava/util/List;)Lcom/bykv/vk/openvk/downloadnew/q$rg;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 509
    new-instance p2, Lcom/bykv/vk/openvk/downloadnew/pt$pp$1;

    invoke-direct {p2, p0, p1}, Lcom/bykv/vk/openvk/downloadnew/pt$pp$1;-><init>(Lcom/bykv/vk/openvk/downloadnew/pt$pp;Lcom/bykv/vk/openvk/downloadnew/q$rg;)V

    return-object p2

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method
