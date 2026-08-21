.class final Lcom/tkay/china/a/a/g$1;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/content/ServiceConnection;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/china/a/a/g;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/china/a/a/g;


# direct methods
.method constructor <init>(Lcom/tkay/china/a/a/g;)V
    .locals 0

    .line 29
    iput-object p1, p0, Lcom/tkay/china/a/a/g$1;->a:Lcom/tkay/china/a/a/g;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onServiceConnected(Landroid/content/ComponentName;Landroid/os/IBinder;)V
    .locals 0

    .line 31
    iget-object p1, p0, Lcom/tkay/china/a/a/g$1;->a:Lcom/tkay/china/a/a/g;

    invoke-static {p2}, Lcom/tkay/china/a/a/h$a;->a(Landroid/os/IBinder;)Lcom/tkay/china/a/a/h;

    move-result-object p2

    iput-object p2, p1, Lcom/tkay/china/a/a/g;->a:Lcom/tkay/china/a/a/h;

    return-void
.end method

.method public final onServiceDisconnected(Landroid/content/ComponentName;)V
    .locals 1

    .line 35
    iget-object p1, p0, Lcom/tkay/china/a/a/g$1;->a:Lcom/tkay/china/a/a/g;

    const/4 v0, 0x0

    iput-object v0, p1, Lcom/tkay/china/a/a/g;->a:Lcom/tkay/china/a/a/h;

    return-void
.end method
