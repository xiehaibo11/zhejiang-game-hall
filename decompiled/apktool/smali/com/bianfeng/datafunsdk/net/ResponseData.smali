.class public Lcom/bianfeng/datafunsdk/net/ResponseData;
.super Ljava/lang/Object;
.source "ResponseData.java"


# instance fields
.field public codeKey:Ljava/lang/String;

.field public messagekey:Ljava/lang/String;

.field public successCode:I


# direct methods
.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;I)V
    .locals 0

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 2
    iput-object p1, p0, Lcom/bianfeng/datafunsdk/net/ResponseData;->codeKey:Ljava/lang/String;

    .line 3
    iput-object p2, p0, Lcom/bianfeng/datafunsdk/net/ResponseData;->messagekey:Ljava/lang/String;

    .line 4
    iput p3, p0, Lcom/bianfeng/datafunsdk/net/ResponseData;->successCode:I

    return-void
.end method


# virtual methods
.method public getCodeKey()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/net/ResponseData;->codeKey:Ljava/lang/String;

    return-object v0
.end method

.method public getMessagekey()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/net/ResponseData;->messagekey:Ljava/lang/String;

    return-object v0
.end method

.method public getSuccessCode()I
    .locals 1

    .line 1
    iget v0, p0, Lcom/bianfeng/datafunsdk/net/ResponseData;->successCode:I

    return v0
.end method

.method public toString()Ljava/lang/String;
    .locals 1

    .line 1
    invoke-static {p0}, Lcom/bianfeng/datafunsdk/w;->a(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
