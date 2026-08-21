.class Lcom/reyun/tracking/utils/r;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field final synthetic a:Lcom/reyun/tracking/utils/p;


# direct methods
.method constructor <init>(Lcom/reyun/tracking/utils/p;)V
    .locals 0

    iput-object p1, p0, Lcom/reyun/tracking/utils/r;->a:Lcom/reyun/tracking/utils/p;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 1

    iget-object v0, p0, Lcom/reyun/tracking/utils/r;->a:Lcom/reyun/tracking/utils/p;

    invoke-static {v0}, Lcom/reyun/tracking/utils/p;->e(Lcom/reyun/tracking/utils/p;)V

    return-void
.end method
