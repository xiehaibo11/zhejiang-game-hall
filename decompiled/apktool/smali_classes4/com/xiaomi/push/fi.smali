.class Lcom/xiaomi/push/fi;
.super Lcom/xiaomi/push/service/bv$a;


# instance fields
.field final synthetic a:Lcom/xiaomi/push/fh;


# direct methods
.method constructor <init>(Lcom/xiaomi/push/fh;)V
    .locals 0

    iput-object p1, p0, Lcom/xiaomi/push/fi;->a:Lcom/xiaomi/push/fh;

    invoke-direct {p0}, Lcom/xiaomi/push/service/bv$a;-><init>()V

    return-void
.end method


# virtual methods
.method public a(Lcom/xiaomi/push/dx$b;)V
    .locals 1

    invoke-virtual {p1}, Lcom/xiaomi/push/dx$b;->e()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/xiaomi/push/fh;->a()Lcom/xiaomi/push/fh;

    move-result-object v0

    invoke-virtual {p1}, Lcom/xiaomi/push/dx$b;->e()I

    move-result p1

    invoke-virtual {v0, p1}, Lcom/xiaomi/push/fh;->a(I)V

    :cond_0
    return-void
.end method
