.class public Lcom/huawei/updatesdk/a/b/c/c/d;
.super Lcom/huawei/updatesdk/a/b/c/c/b;
.source ""


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/huawei/updatesdk/a/b/c/c/d$a;
    }
.end annotation


# static fields
.field public static final ERROR:I = 0x1

.field public static final NETWORK_ERROR:I = 0x3

.field public static final OK:I = 0x0

.field public static final PROGUARD_ERROR:I = 0x6

.field public static final REQ_PARAM_ERROR:I = 0x5

.field public static final RTN_CODE_OK:I = 0x0

.field public static final TIMEOUT:I = 0x2


# instance fields
.field private errCause:Lcom/huawei/updatesdk/a/b/c/c/d$a;

.field private httpRespondeCode:I

.field private reason:Ljava/lang/String;

.field private responseCode:I

.field private rtnCode_:I


# direct methods
.method public constructor <init>()V
    .locals 2

    invoke-direct {p0}, Lcom/huawei/updatesdk/a/b/c/c/b;-><init>()V

    const/4 v0, 0x1

    iput v0, p0, Lcom/huawei/updatesdk/a/b/c/c/d;->responseCode:I

    const/4 v0, 0x0

    iput v0, p0, Lcom/huawei/updatesdk/a/b/c/c/d;->rtnCode_:I

    sget-object v1, Lcom/huawei/updatesdk/a/b/c/c/d$a;->a:Lcom/huawei/updatesdk/a/b/c/c/d$a;

    iput-object v1, p0, Lcom/huawei/updatesdk/a/b/c/c/d;->errCause:Lcom/huawei/updatesdk/a/b/c/c/d$a;

    iput v0, p0, Lcom/huawei/updatesdk/a/b/c/c/d;->httpRespondeCode:I

    return-void
.end method


# virtual methods
.method public a()Lcom/huawei/updatesdk/a/b/c/c/d$a;
    .locals 1

    iget-object v0, p0, Lcom/huawei/updatesdk/a/b/c/c/d;->errCause:Lcom/huawei/updatesdk/a/b/c/c/d$a;

    return-object v0
.end method

.method public a(I)V
    .locals 0

    iput p1, p0, Lcom/huawei/updatesdk/a/b/c/c/d;->httpRespondeCode:I

    return-void
.end method

.method public a(Lcom/huawei/updatesdk/a/b/c/c/d$a;)V
    .locals 0

    iput-object p1, p0, Lcom/huawei/updatesdk/a/b/c/c/d;->errCause:Lcom/huawei/updatesdk/a/b/c/c/d$a;

    return-void
.end method

.method public a(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/huawei/updatesdk/a/b/c/c/d;->reason:Ljava/lang/String;

    return-void
.end method

.method public b()I
    .locals 1

    iget v0, p0, Lcom/huawei/updatesdk/a/b/c/c/d;->httpRespondeCode:I

    return v0
.end method

.method public b(I)V
    .locals 0

    iput p1, p0, Lcom/huawei/updatesdk/a/b/c/c/d;->responseCode:I

    return-void
.end method

.method public c()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/huawei/updatesdk/a/b/c/c/d;->reason:Ljava/lang/String;

    return-object v0
.end method

.method public d()I
    .locals 1

    iget v0, p0, Lcom/huawei/updatesdk/a/b/c/c/d;->responseCode:I

    return v0
.end method

.method public e()I
    .locals 1

    iget v0, p0, Lcom/huawei/updatesdk/a/b/c/c/d;->rtnCode_:I

    return v0
.end method

.method public f()Z
    .locals 1

    invoke-virtual {p0}, Lcom/huawei/updatesdk/a/b/c/c/d;->d()I

    move-result v0

    if-nez v0, :cond_0

    invoke-virtual {p0}, Lcom/huawei/updatesdk/a/b/c/c/d;->e()I

    move-result v0

    if-nez v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public toString()Ljava/lang/String;
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, " { \n\tresponseCode: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/huawei/updatesdk/a/b/c/c/d;->d()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "\n\trtnCode_: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/huawei/updatesdk/a/b/c/c/d;->e()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "\n\terrCause: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/huawei/updatesdk/a/b/c/c/d;->a()Lcom/huawei/updatesdk/a/b/c/c/d$a;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v1, "\n}"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
