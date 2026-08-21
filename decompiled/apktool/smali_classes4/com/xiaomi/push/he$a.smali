.class Lcom/xiaomi/push/he$a;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field private a:Landroid/content/Context;

.field private a:Lcom/xiaomi/push/hh;


# direct methods
.method public constructor <init>(Landroid/content/Context;Lcom/xiaomi/push/hh;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p2, p0, Lcom/xiaomi/push/he$a;->a:Lcom/xiaomi/push/hh;

    iput-object p1, p0, Lcom/xiaomi/push/he$a;->a:Landroid/content/Context;

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    iget-object v0, p0, Lcom/xiaomi/push/he$a;->a:Landroid/content/Context;

    iget-object v1, p0, Lcom/xiaomi/push/he$a;->a:Lcom/xiaomi/push/hh;

    invoke-static {v0, v1}, Lcom/xiaomi/push/he;->b(Landroid/content/Context;Lcom/xiaomi/push/hh;)V

    return-void
.end method
