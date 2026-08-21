.class Lcom/bykv/vk/openvk/downloadnew/pt$df;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/download/api/config/ux;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bykv/vk/openvk/downloadnew/pt;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "df"
.end annotation


# direct methods
.method private constructor <init>()V
    .locals 0

    .line 444
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/bykv/vk/openvk/downloadnew/pt$1;)V
    .locals 0

    .line 444
    invoke-direct {p0}, Lcom/bykv/vk/openvk/downloadnew/pt$df;-><init>()V

    return-void
.end method


# virtual methods
.method public rg(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Lcom/ss/android/download/api/config/r;)V
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;",
            "Lcom/ss/android/download/api/config/r;",
            ")V"
        }
    .end annotation

    .line 451
    invoke-virtual {p1}, Ljava/lang/String;->hashCode()I

    move-result v0

    const v1, 0x11336

    const/4 v2, 0x1

    const/4 v3, 0x0

    if-eq v0, v1, :cond_1

    const v1, 0x2590a0

    if-eq v0, v1, :cond_0

    goto :goto_0

    :cond_0
    const-string v0, "POST"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    move p1, v2

    goto :goto_1

    :cond_1
    const-string v0, "GET"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    move p1, v3

    goto :goto_1

    :cond_2
    :goto_0
    const/4 p1, -0x1

    :goto_1
    if-eqz p1, :cond_3

    if-eq p1, v2, :cond_4

    :cond_3
    move v2, v3

    .line 459
    :cond_4
    invoke-static {}, Lcom/bykv/vk/openvk/downloadnew/pt;->pt()Lcom/bykv/vk/openvk/downloadnew/core/ITTDownloadVisitor;

    move-result-object p1

    if-eqz p1, :cond_5

    .line 460
    invoke-static {}, Lcom/bykv/vk/openvk/downloadnew/pt;->pt()Lcom/bykv/vk/openvk/downloadnew/core/ITTDownloadVisitor;

    move-result-object p1

    new-instance v0, Lcom/bykv/vk/openvk/downloadnew/pt$df$1;

    invoke-direct {v0, p0, p4}, Lcom/bykv/vk/openvk/downloadnew/pt$df$1;-><init>(Lcom/bykv/vk/openvk/downloadnew/pt$df;Lcom/ss/android/download/api/config/r;)V

    invoke-interface {p1, v2, p2, p3, v0}, Lcom/bykv/vk/openvk/downloadnew/core/ITTDownloadVisitor;->execute(ILjava/lang/String;Ljava/util/Map;Lcom/bykv/vk/openvk/downloadnew/core/ITTHttpCallback;)V

    :cond_5
    return-void
.end method

.method public rg(Ljava/lang/String;[BLjava/lang/String;ILcom/ss/android/download/api/config/r;)V
    .locals 1

    .line 480
    invoke-static {}, Lcom/bykv/vk/openvk/downloadnew/pt;->pt()Lcom/bykv/vk/openvk/downloadnew/core/ITTDownloadVisitor;

    move-result-object p4

    if-eqz p4, :cond_0

    .line 481
    invoke-static {}, Lcom/bykv/vk/openvk/downloadnew/pt;->pt()Lcom/bykv/vk/openvk/downloadnew/core/ITTDownloadVisitor;

    move-result-object p4

    new-instance v0, Lcom/bykv/vk/openvk/downloadnew/pt$df$2;

    invoke-direct {v0, p0, p5}, Lcom/bykv/vk/openvk/downloadnew/pt$df$2;-><init>(Lcom/bykv/vk/openvk/downloadnew/pt$df;Lcom/ss/android/download/api/config/r;)V

    invoke-interface {p4, p1, p2, p3, v0}, Lcom/bykv/vk/openvk/downloadnew/core/ITTDownloadVisitor;->postBody(Ljava/lang/String;[BLjava/lang/String;Lcom/bykv/vk/openvk/downloadnew/core/ITTHttpCallback;)V

    :cond_0
    return-void
.end method
