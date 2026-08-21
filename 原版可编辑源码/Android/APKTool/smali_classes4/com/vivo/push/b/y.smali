.class public final Lcom/vivo/push/b/y;
.super Lcom/vivo/push/o;


# instance fields
.field private a:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 1

    const/16 v0, 0x7d8

    invoke-direct {p0, v0}, Lcom/vivo/push/o;-><init>(I)V

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;)V
    .locals 1

    const/16 v0, 0x7d8

    invoke-direct {p0, v0}, Lcom/vivo/push/o;-><init>(I)V

    iput-object p1, p0, Lcom/vivo/push/b/y;->a:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method protected final c(Lcom/vivo/push/a;)V
    .locals 2

    iget-object v0, p0, Lcom/vivo/push/b/y;->a:Ljava/lang/String;

    const-string v1, "package_name"

    invoke-virtual {p1, v1, v0}, Lcom/vivo/push/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method protected final d(Lcom/vivo/push/a;)V
    .locals 1

    const-string v0, "package_name"

    invoke-virtual {p1, v0}, Lcom/vivo/push/a;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/vivo/push/b/y;->a:Ljava/lang/String;

    return-void
.end method

.method public final toString()Ljava/lang/String;
    .locals 1

    const-string v0, "StopServiceCommand"

    return-object v0
.end method
