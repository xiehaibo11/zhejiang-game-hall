.class public Lcom/bykv/vk/openvk/CSJAdError;
.super Ljava/lang/Object;


# instance fields
.field private df:Ljava/lang/String;

.field private rg:I


# direct methods
.method public constructor <init>(ILjava/lang/String;)V
    .locals 0

    .line 8
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 9
    iput p1, p0, Lcom/bykv/vk/openvk/CSJAdError;->rg:I

    .line 10
    iput-object p2, p0, Lcom/bykv/vk/openvk/CSJAdError;->df:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public getCode()I
    .locals 1

    .line 14
    iget v0, p0, Lcom/bykv/vk/openvk/CSJAdError;->rg:I

    return v0
.end method

.method public getMsg()Ljava/lang/String;
    .locals 1

    .line 18
    iget-object v0, p0, Lcom/bykv/vk/openvk/CSJAdError;->df:Ljava/lang/String;

    return-object v0
.end method
