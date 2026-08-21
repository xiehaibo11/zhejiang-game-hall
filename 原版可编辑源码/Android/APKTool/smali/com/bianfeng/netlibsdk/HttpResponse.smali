.class public Lcom/bianfeng/netlibsdk/HttpResponse;
.super Ljava/lang/Object;
.source "HttpResponse.java"


# instance fields
.field private final mContent:Ljava/io/InputStream;

.field private final mContentLength:I

.field private final mHeaders:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/bianfeng/netlibsdk/Header;",
            ">;"
        }
    .end annotation
.end field

.field private final mStatusCode:I


# direct methods
.method public constructor <init>(ILjava/util/List;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I",
            "Ljava/util/List<",
            "Lcom/bianfeng/netlibsdk/Header;",
            ">;)V"
        }
    .end annotation

    const/4 v0, -0x1

    const/4 v1, 0x0

    .line 14
    invoke-direct {p0, p1, p2, v0, v1}, Lcom/bianfeng/netlibsdk/HttpResponse;-><init>(ILjava/util/List;ILjava/io/InputStream;)V

    return-void
.end method

.method public constructor <init>(ILjava/util/List;ILjava/io/InputStream;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I",
            "Ljava/util/List<",
            "Lcom/bianfeng/netlibsdk/Header;",
            ">;I",
            "Ljava/io/InputStream;",
            ")V"
        }
    .end annotation

    .line 17
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 18
    iput p1, p0, Lcom/bianfeng/netlibsdk/HttpResponse;->mStatusCode:I

    .line 19
    iput-object p2, p0, Lcom/bianfeng/netlibsdk/HttpResponse;->mHeaders:Ljava/util/List;

    .line 20
    iput p3, p0, Lcom/bianfeng/netlibsdk/HttpResponse;->mContentLength:I

    .line 21
    iput-object p4, p0, Lcom/bianfeng/netlibsdk/HttpResponse;->mContent:Ljava/io/InputStream;

    return-void
.end method


# virtual methods
.method public final getContent()Ljava/io/InputStream;
    .locals 1

    .line 37
    iget-object v0, p0, Lcom/bianfeng/netlibsdk/HttpResponse;->mContent:Ljava/io/InputStream;

    return-object v0
.end method

.method public final getContentLength()I
    .locals 1

    .line 33
    iget v0, p0, Lcom/bianfeng/netlibsdk/HttpResponse;->mContentLength:I

    return v0
.end method

.method public final getHeaders()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/bianfeng/netlibsdk/Header;",
            ">;"
        }
    .end annotation

    .line 29
    iget-object v0, p0, Lcom/bianfeng/netlibsdk/HttpResponse;->mHeaders:Ljava/util/List;

    invoke-static {v0}, Ljava/util/Collections;->unmodifiableList(Ljava/util/List;)Ljava/util/List;

    move-result-object v0

    return-object v0
.end method

.method public final getStatusCode()I
    .locals 1

    .line 25
    iget v0, p0, Lcom/bianfeng/netlibsdk/HttpResponse;->mStatusCode:I

    return v0
.end method
