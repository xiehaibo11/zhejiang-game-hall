.class final Lcom/tkay/china/a/a/m$1;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/content/ServiceConnection;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/china/a/a/m;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/china/a/a/m;


# direct methods
.method constructor <init>(Lcom/tkay/china/a/a/m;)V
    .locals 0

    .line 21
    iput-object p1, p0, Lcom/tkay/china/a/a/m$1;->a:Lcom/tkay/china/a/a/m;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onServiceConnected(Landroid/content/ComponentName;Landroid/os/IBinder;)V
    .locals 1

    .line 23
    iget-object p1, p0, Lcom/tkay/china/a/a/m$1;->a:Lcom/tkay/china/a/a/m;

    new-instance v0, Lcom/tkay/china/a/a/l$a;

    invoke-direct {v0, p2}, Lcom/tkay/china/a/a/l$a;-><init>(Landroid/os/IBinder;)V

    iput-object v0, p1, Lcom/tkay/china/a/a/m;->a:Lcom/tkay/china/a/a/l;

    return-void
.end method

.method public final onServiceDisconnected(Landroid/content/ComponentName;)V
    .locals 0

    return-void
.end method
