.class final Lcom/vivo/push/d/x;
.super Lcom/vivo/push/d/z;


# direct methods
.method constructor <init>(Lcom/vivo/push/o;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/vivo/push/d/z;-><init>(Lcom/vivo/push/o;)V

    return-void
.end method

.method static synthetic a(Lcom/vivo/push/d/x;)Landroid/content/Context;
    .locals 0

    iget-object p0, p0, Lcom/vivo/push/d/x;->a:Landroid/content/Context;

    return-object p0
.end method


# virtual methods
.method protected final a(Lcom/vivo/push/o;)V
    .locals 1

    check-cast p1, Lcom/vivo/push/b/r;

    new-instance v0, Lcom/vivo/push/d/y;

    invoke-direct {v0, p0, p1}, Lcom/vivo/push/d/y;-><init>(Lcom/vivo/push/d/x;Lcom/vivo/push/b/r;)V

    invoke-static {v0}, Lcom/vivo/push/m;->b(Ljava/lang/Runnable;)V

    return-void
.end method
