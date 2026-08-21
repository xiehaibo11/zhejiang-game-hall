.class Lcom/xiaomi/push/gg;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field final synthetic a:Lcom/xiaomi/push/gd;

.field final synthetic a:Ljava/lang/String;


# direct methods
.method constructor <init>(Lcom/xiaomi/push/gd;Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/xiaomi/push/gg;->a:Lcom/xiaomi/push/gd;

    iput-object p2, p0, Lcom/xiaomi/push/gg;->a:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 3

    invoke-static {}, Lcom/xiaomi/push/cv;->a()Lcom/xiaomi/push/cv;

    move-result-object v0

    iget-object v1, p0, Lcom/xiaomi/push/gg;->a:Ljava/lang/String;

    const/4 v2, 0x1

    invoke-virtual {v0, v1, v2}, Lcom/xiaomi/push/cv;->a(Ljava/lang/String;Z)Lcom/xiaomi/push/cr;

    return-void
.end method
