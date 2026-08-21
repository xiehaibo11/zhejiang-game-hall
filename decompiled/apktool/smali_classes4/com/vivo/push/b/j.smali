.class public final Lcom/vivo/push/b/j;
.super Lcom/vivo/push/b/s;


# instance fields
.field private a:I

.field private b:I


# direct methods
.method public constructor <init>()V
    .locals 1

    const/16 v0, 0xc

    invoke-direct {p0, v0}, Lcom/vivo/push/b/s;-><init>(I)V

    const/4 v0, -0x1

    iput v0, p0, Lcom/vivo/push/b/j;->a:I

    iput v0, p0, Lcom/vivo/push/b/j;->b:I

    return-void
.end method


# virtual methods
.method protected final c(Lcom/vivo/push/a;)V
    .locals 2

    invoke-super {p0, p1}, Lcom/vivo/push/b/s;->c(Lcom/vivo/push/a;)V

    iget v0, p0, Lcom/vivo/push/b/j;->a:I

    const-string v1, "OnChangePushStatus.EXTRA_REQ_SERVICE_STATUS"

    invoke-virtual {p1, v1, v0}, Lcom/vivo/push/a;->a(Ljava/lang/String;I)V

    iget v0, p0, Lcom/vivo/push/b/j;->b:I

    const-string v1, "OnChangePushStatus.EXTRA_REQ_RECEIVER_STATUS"

    invoke-virtual {p1, v1, v0}, Lcom/vivo/push/a;->a(Ljava/lang/String;I)V

    return-void
.end method

.method public final d()I
    .locals 1

    iget v0, p0, Lcom/vivo/push/b/j;->a:I

    return v0
.end method

.method protected final d(Lcom/vivo/push/a;)V
    .locals 2

    invoke-super {p0, p1}, Lcom/vivo/push/b/s;->d(Lcom/vivo/push/a;)V

    iget v0, p0, Lcom/vivo/push/b/j;->a:I

    const-string v1, "OnChangePushStatus.EXTRA_REQ_SERVICE_STATUS"

    invoke-virtual {p1, v1, v0}, Lcom/vivo/push/a;->b(Ljava/lang/String;I)I

    move-result v0

    iput v0, p0, Lcom/vivo/push/b/j;->a:I

    iget v0, p0, Lcom/vivo/push/b/j;->b:I

    const-string v1, "OnChangePushStatus.EXTRA_REQ_RECEIVER_STATUS"

    invoke-virtual {p1, v1, v0}, Lcom/vivo/push/a;->b(Ljava/lang/String;I)I

    move-result p1

    iput p1, p0, Lcom/vivo/push/b/j;->b:I

    return-void
.end method

.method public final e()I
    .locals 1

    iget v0, p0, Lcom/vivo/push/b/j;->b:I

    return v0
.end method

.method public final toString()Ljava/lang/String;
    .locals 1

    const-string v0, "OnChangePushStatusCommand"

    return-object v0
.end method
