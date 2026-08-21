.class public Lcom/bianfeng/datafunsdk/net/RequestHeaders;
.super Ljava/lang/Object;
.source "RequestHeaders.java"


# instance fields
.field public headers:Ljava/lang/String;


# direct methods
.method public constructor <init>(Ljava/lang/String;)V
    .locals 0

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 2
    iput-object p1, p0, Lcom/bianfeng/datafunsdk/net/RequestHeaders;->headers:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public getHeaderMap()Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 1
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/net/RequestHeaders;->headers:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 2
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    return-object v0

    .line 4
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/net/RequestHeaders;->headers:Ljava/lang/String;

    invoke-static {v0}, Lcom/bianfeng/datafunsdk/w;->a(Ljava/lang/String;)Ljava/util/Map;

    move-result-object v0

    return-object v0
.end method
