.class final Lcom/vivo/push/d/l;
.super Lcom/vivo/push/d/z;


# direct methods
.method constructor <init>(Lcom/vivo/push/o;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/vivo/push/d/z;-><init>(Lcom/vivo/push/o;)V

    return-void
.end method

.method static synthetic a(Lcom/vivo/push/d/l;)Landroid/content/Context;
    .locals 0

    iget-object p0, p0, Lcom/vivo/push/d/l;->a:Landroid/content/Context;

    return-object p0
.end method


# virtual methods
.method protected final a(Lcom/vivo/push/o;)V
    .locals 1

    check-cast p1, Lcom/vivo/push/b/m;

    new-instance v0, Lcom/vivo/push/d/m;

    invoke-direct {v0, p0, p1}, Lcom/vivo/push/d/m;-><init>(Lcom/vivo/push/d/l;Lcom/vivo/push/b/m;)V

    invoke-static {v0}, Lcom/vivo/push/m;->b(Ljava/lang/Runnable;)V

    return-void
.end method
