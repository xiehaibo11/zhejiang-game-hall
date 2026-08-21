.class Lcom/qihoo360/loader2/Loader$ProxyPlugin;
.super Ljava/lang/Object;
.source "Loader.java"

# interfaces
.implements Lcom/qihoo360/i/IPlugin;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/qihoo360/loader2/Loader;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = "ProxyPlugin"
.end annotation


# instance fields
.field mPlugin:Lcom/qihoo360/loader2/IPlugin;


# direct methods
.method constructor <init>(Landroid/os/IBinder;)V
    .locals 0

    .line 118
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 119
    invoke-static {p1}, Lcom/qihoo360/loader2/IPlugin$Stub;->asInterface(Landroid/os/IBinder;)Lcom/qihoo360/loader2/IPlugin;

    move-result-object p1

    iput-object p1, p0, Lcom/qihoo360/loader2/Loader$ProxyPlugin;->mPlugin:Lcom/qihoo360/loader2/IPlugin;

    return-void
.end method


# virtual methods
.method public query(Ljava/lang/Class;)Lcom/qihoo360/i/IModule;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/Class<",
            "+",
            "Lcom/qihoo360/i/IModule;",
            ">;)",
            "Lcom/qihoo360/i/IModule;"
        }
    .end annotation

    .line 126
    :try_start_0
    iget-object v0, p0, Lcom/qihoo360/loader2/Loader$ProxyPlugin;->mPlugin:Lcom/qihoo360/loader2/IPlugin;

    invoke-virtual {p1}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1}, Lcom/qihoo360/loader2/IPlugin;->query(Ljava/lang/String;)Landroid/os/IBinder;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 129
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "query("

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string p1, ") exception: "

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v1, "ws001"

    invoke-static {v1, p1, v0}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    :goto_0
    const/4 p1, 0x0

    return-object p1
.end method
