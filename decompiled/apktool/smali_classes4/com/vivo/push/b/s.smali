.class public Lcom/vivo/push/b/s;
.super Lcom/vivo/push/o;


# instance fields
.field private a:Ljava/lang/String;

.field private b:I


# direct methods
.method public constructor <init>(I)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/vivo/push/o;-><init>(I)V

    const/4 p1, 0x0

    iput-object p1, p0, Lcom/vivo/push/b/s;->a:Ljava/lang/String;

    const/4 p1, 0x0

    iput p1, p0, Lcom/vivo/push/b/s;->b:I

    return-void
.end method


# virtual methods
.method protected c(Lcom/vivo/push/a;)V
    .locals 2

    iget-object v0, p0, Lcom/vivo/push/b/s;->a:Ljava/lang/String;

    const-string v1, "req_id"

    invoke-virtual {p1, v1, v0}, Lcom/vivo/push/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    iget v0, p0, Lcom/vivo/push/b/s;->b:I

    const-string v1, "status_msg_code"

    invoke-virtual {p1, v1, v0}, Lcom/vivo/push/a;->a(Ljava/lang/String;I)V

    return-void
.end method

.method protected d(Lcom/vivo/push/a;)V
    .locals 2

    const-string v0, "req_id"

    invoke-virtual {p1, v0}, Lcom/vivo/push/a;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/vivo/push/b/s;->a:Ljava/lang/String;

    iget v0, p0, Lcom/vivo/push/b/s;->b:I

    const-string v1, "status_msg_code"

    invoke-virtual {p1, v1, v0}, Lcom/vivo/push/a;->b(Ljava/lang/String;I)I

    move-result p1

    iput p1, p0, Lcom/vivo/push/b/s;->b:I

    return-void
.end method

.method public final g()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/vivo/push/b/s;->a:Ljava/lang/String;

    return-object v0
.end method

.method public final h()I
    .locals 1

    iget v0, p0, Lcom/vivo/push/b/s;->b:I

    return v0
.end method

.method public toString()Ljava/lang/String;
    .locals 1

    const-string v0, "OnReceiveCommand"

    return-object v0
.end method
