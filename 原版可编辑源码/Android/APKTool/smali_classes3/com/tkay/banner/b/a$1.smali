.class final Lcom/tkay/banner/b/a$1;
.super Ljava/util/TimerTask;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/banner/b/a;->e()Ljava/util/TimerTask;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/banner/b/a;


# direct methods
.method constructor <init>(Lcom/tkay/banner/b/a;)V
    .locals 0

    .line 63
    iput-object p1, p0, Lcom/tkay/banner/b/a$1;->a:Lcom/tkay/banner/b/a;

    invoke-direct {p0}, Ljava/util/TimerTask;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 1

    .line 66
    iget-object v0, p0, Lcom/tkay/banner/b/a$1;->a:Lcom/tkay/banner/b/a;

    invoke-static {v0}, Lcom/tkay/banner/b/a;->a(Lcom/tkay/banner/b/a;)V

    return-void
.end method
