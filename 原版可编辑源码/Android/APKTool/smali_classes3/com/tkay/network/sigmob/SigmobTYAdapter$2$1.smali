.class final Lcom/tkay/network/sigmob/SigmobTYAdapter$2$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/api/MediationInitCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/sigmob/SigmobTYAdapter$2;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/sigmob/SigmobTYAdapter$2;


# direct methods
.method constructor <init>(Lcom/tkay/network/sigmob/SigmobTYAdapter$2;)V
    .locals 0

    .line 125
    iput-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter$2$1;->a:Lcom/tkay/network/sigmob/SigmobTYAdapter$2;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onFail(Ljava/lang/String;)V
    .locals 2

    .line 136
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter$2$1;->a:Lcom/tkay/network/sigmob/SigmobTYAdapter$2;

    iget-object v0, v0, Lcom/tkay/network/sigmob/SigmobTYAdapter$2;->d:Lcom/tkay/network/sigmob/SigmobTYAdapter;

    const-string v1, ""

    invoke-static {v0, v1, p1}, Lcom/tkay/network/sigmob/SigmobTYAdapter;->a(Lcom/tkay/network/sigmob/SigmobTYAdapter;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final onSuccess()V
    .locals 3

    .line 128
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter$2$1;->a:Lcom/tkay/network/sigmob/SigmobTYAdapter$2;

    iget-object v0, v0, Lcom/tkay/network/sigmob/SigmobTYAdapter$2;->d:Lcom/tkay/network/sigmob/SigmobTYAdapter;

    iget-object v1, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter$2$1;->a:Lcom/tkay/network/sigmob/SigmobTYAdapter$2;

    iget-object v1, v1, Lcom/tkay/network/sigmob/SigmobTYAdapter$2;->a:Landroid/content/Context;

    iget-object v2, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter$2$1;->a:Lcom/tkay/network/sigmob/SigmobTYAdapter$2;

    iget v2, v2, Lcom/tkay/network/sigmob/SigmobTYAdapter$2;->c:I

    invoke-static {v0, v1, v2}, Lcom/tkay/network/sigmob/SigmobTYAdapter;->a(Lcom/tkay/network/sigmob/SigmobTYAdapter;Landroid/content/Context;I)V

    return-void
.end method
