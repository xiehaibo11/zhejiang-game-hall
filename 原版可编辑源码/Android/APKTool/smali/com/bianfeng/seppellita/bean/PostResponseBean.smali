.class public Lcom/bianfeng/seppellita/bean/PostResponseBean;
.super Ljava/lang/Object;
.source "PostResponseBean.java"


# instance fields
.field private code:I

.field private msg:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 3
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public getCode()I
    .locals 1

    .line 21
    iget v0, p0, Lcom/bianfeng/seppellita/bean/PostResponseBean;->code:I

    return v0
.end method

.method public getMsg()Ljava/lang/String;
    .locals 1

    .line 13
    iget-object v0, p0, Lcom/bianfeng/seppellita/bean/PostResponseBean;->msg:Ljava/lang/String;

    return-object v0
.end method

.method public setCode(I)V
    .locals 0

    .line 25
    iput p1, p0, Lcom/bianfeng/seppellita/bean/PostResponseBean;->code:I

    return-void
.end method

.method public setMsg(Ljava/lang/String;)V
    .locals 0

    .line 17
    iput-object p1, p0, Lcom/bianfeng/seppellita/bean/PostResponseBean;->msg:Ljava/lang/String;

    return-void
.end method
