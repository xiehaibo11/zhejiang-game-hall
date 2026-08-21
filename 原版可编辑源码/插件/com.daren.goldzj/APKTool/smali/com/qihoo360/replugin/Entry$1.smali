.class final Lcom/qihoo360/replugin/Entry$1;
.super Llibrary/a$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/qihoo360/replugin/Entry;->create(Landroid/content/Context;Ljava/lang/ClassLoader;Landroid/os/IBinder;)Landroid/os/IBinder;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# direct methods
.method constructor <init>()V
    .locals 0

    invoke-direct {p0}, Llibrary/a$a;-><init>()V

    return-void
.end method


# virtual methods
.method public a(Ljava/lang/String;)Landroid/os/IBinder;
    .locals 1

    invoke-static {}, Lcom/qihoo360/replugin/g;->a()Lcom/qihoo360/replugin/g;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/qihoo360/replugin/g;->a(Ljava/lang/String;)Landroid/os/IBinder;

    move-result-object p1

    return-object p1
.end method
