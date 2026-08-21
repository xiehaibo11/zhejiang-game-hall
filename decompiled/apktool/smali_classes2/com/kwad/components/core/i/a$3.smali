.class final Lcom/kwad/components/core/i/a$3;
.super Lcom/kwad/sdk/core/network/p;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/i/a;->a(Lcom/kwad/components/core/p/a/b;Ljava/util/List;ZZLcom/kwad/components/core/p/h;Z)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/kwad/sdk/core/network/p<",
        "Lcom/kwad/components/core/p/a;",
        "Lcom/kwad/components/core/response/model/AdResultData;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic KQ:Z

.field final synthetic ig:Lcom/kwad/components/core/p/h;


# direct methods
.method constructor <init>(ZLcom/kwad/components/core/p/h;)V
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/core/i/a$3;->KQ:Z

    iput-object p2, p0, Lcom/kwad/components/core/i/a$3;->ig:Lcom/kwad/components/core/p/h;

    invoke-direct {p0}, Lcom/kwad/sdk/core/network/p;-><init>()V

    return-void
.end method

.method private b(Lcom/kwad/components/core/response/model/AdResultData;)V
    .locals 3

    invoke-virtual {p1}, Lcom/kwad/components/core/response/model/AdResultData;->isAdResultDataEmpty()Z

    move-result v0

    if-eqz v0, :cond_1

    iget-boolean v0, p0, Lcom/kwad/components/core/i/a$3;->KQ:Z

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/core/i/a$3;->ig:Lcom/kwad/components/core/p/h;

    sget-object v1, Lcom/kwad/sdk/core/network/f;->aoU:Lcom/kwad/sdk/core/network/f;

    iget v1, v1, Lcom/kwad/sdk/core/network/f;->errorCode:I

    iget-object v2, p1, Lcom/kwad/components/core/response/model/AdResultData;->testErrorMsg:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_0

    sget-object p1, Lcom/kwad/sdk/core/network/f;->aoU:Lcom/kwad/sdk/core/network/f;

    iget-object p1, p1, Lcom/kwad/sdk/core/network/f;->msg:Ljava/lang/String;

    goto :goto_0

    :cond_0
    iget-object p1, p1, Lcom/kwad/components/core/response/model/AdResultData;->testErrorMsg:Ljava/lang/String;

    :goto_0
    invoke-virtual {v0, v1, p1}, Lcom/kwad/components/core/p/h;->onError(ILjava/lang/String;)V

    return-void

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/core/i/a$3;->ig:Lcom/kwad/components/core/p/h;

    invoke-virtual {v0, p1}, Lcom/kwad/components/core/p/h;->a(Lcom/kwad/components/core/response/model/AdResultData;)V

    return-void
.end method

.method private f(ILjava/lang/String;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/i/a$3;->ig:Lcom/kwad/components/core/p/h;

    invoke-virtual {v0, p1, p2}, Lcom/kwad/components/core/p/h;->onError(ILjava/lang/String;)V

    return-void
.end method


# virtual methods
.method public final synthetic onError(Lcom/kwad/sdk/core/network/g;ILjava/lang/String;)V
    .locals 0

    invoke-direct {p0, p2, p3}, Lcom/kwad/components/core/i/a$3;->f(ILjava/lang/String;)V

    return-void
.end method

.method public final synthetic onSuccess(Lcom/kwad/sdk/core/network/g;Lcom/kwad/sdk/core/network/BaseResultData;)V
    .locals 0

    check-cast p2, Lcom/kwad/components/core/response/model/AdResultData;

    invoke-direct {p0, p2}, Lcom/kwad/components/core/i/a$3;->b(Lcom/kwad/components/core/response/model/AdResultData;)V

    return-void
.end method
