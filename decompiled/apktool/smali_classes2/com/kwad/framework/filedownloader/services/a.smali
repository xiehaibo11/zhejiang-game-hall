.class public abstract Lcom/kwad/framework/filedownloader/services/a;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/content/ServiceConnection;
.implements Lcom/kwad/framework/filedownloader/u;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "<CA",
        "LLBACK:Landroid/os/Binder;",
        "INTERFACE::",
        "Landroid/os/IInterface;",
        ">",
        "Ljava/lang/Object;",
        "Landroid/content/ServiceConnection;",
        "Lcom/kwad/framework/filedownloader/u;"
    }
.end annotation


# instance fields
.field private final abq:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Ljava/lang/Runnable;",
            ">;"
        }
    .end annotation
.end field

.field private final adC:Ljava/lang/Class;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/Class<",
            "*>;"
        }
    .end annotation
.end field

.field private final aeh:Landroid/os/Binder;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "TCA",
            "LLBACK;"
        }
    .end annotation
.end field

.field private volatile aei:Landroid/os/IInterface;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "TINTERFACE;"
        }
    .end annotation
.end field

.field private final aej:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation
.end field

.field private final aek:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Landroid/content/Context;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method protected constructor <init>(Ljava/lang/Class;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/Class<",
            "*>;)V"
        }
    .end annotation

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/kwad/framework/filedownloader/services/a;->aej:Ljava/util/HashMap;

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/framework/filedownloader/services/a;->aek:Ljava/util/List;

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/framework/filedownloader/services/a;->abq:Ljava/util/ArrayList;

    iput-object p1, p0, Lcom/kwad/framework/filedownloader/services/a;->adC:Ljava/lang/Class;

    invoke-virtual {p0}, Lcom/kwad/framework/filedownloader/services/a;->tT()Landroid/os/Binder;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/framework/filedownloader/services/a;->aeh:Landroid/os/Binder;

    return-void
.end method

.method private a(Landroid/content/Context;Ljava/lang/Runnable;)V
    .locals 3

    invoke-static {p1}, Lcom/kwad/framework/filedownloader/f/f;->aq(Landroid/content/Context;)Z

    move-result p2

    if-nez p2, :cond_2

    sget-boolean p2, Lcom/kwad/framework/filedownloader/f/d;->aeI:Z

    const/4 v0, 0x1

    if-eqz p2, :cond_0

    new-array p2, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v2

    aput-object v2, p2, v1

    const-string v1, "bindStartByContext %s"

    invoke-static {p0, v1, p2}, Lcom/kwad/framework/filedownloader/f/d;->c(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_0
    new-instance p2, Landroid/content/Intent;

    iget-object v1, p0, Lcom/kwad/framework/filedownloader/services/a;->adC:Ljava/lang/Class;

    invoke-direct {p2, p1, v1}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    iget-object v1, p0, Lcom/kwad/framework/filedownloader/services/a;->aek:Ljava/util/List;

    invoke-interface {v1, p1}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_1

    iget-object v1, p0, Lcom/kwad/framework/filedownloader/services/a;->aek:Ljava/util/List;

    invoke-interface {v1, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_1
    invoke-virtual {p1, p2, p0, v0}, Landroid/content/Context;->bindService(Landroid/content/Intent;Landroid/content/ServiceConnection;I)Z

    invoke-virtual {p1, p2}, Landroid/content/Context;->startService(Landroid/content/Intent;)Landroid/content/ComponentName;

    return-void

    :cond_2
    new-instance p1, Ljava/lang/IllegalStateException;

    const-string p2, "Fatal-Exception: You can\'t bind the FileDownloadService in :filedownloader process.\n It\'s the invalid operation and is likely to cause unexpected problems.\n Maybe you want to use non-separate process mode for FileDownloader, More detail about non-separate mode, please move to wiki manually: https://github.com/lingochamp/FileDownloader/wiki/filedownloader.properties"

    invoke-direct {p1, p2}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method private aZ(Z)V
    .locals 3

    sget-boolean p1, Lcom/kwad/framework/filedownloader/f/d;->aeI:Z

    if-eqz p1, :cond_0

    const/4 p1, 0x1

    new-array p1, p1, [Ljava/lang/Object;

    const/4 v0, 0x0

    iget-object v1, p0, Lcom/kwad/framework/filedownloader/services/a;->aei:Landroid/os/IInterface;

    aput-object v1, p1, v0

    const-string v0, "release connect resources %s"

    invoke-static {p0, v0, p1}, Lcom/kwad/framework/filedownloader/f/d;->c(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_0
    const/4 p1, 0x0

    iput-object p1, p0, Lcom/kwad/framework/filedownloader/services/a;->aei:Landroid/os/IInterface;

    invoke-static {}, Lcom/kwad/framework/filedownloader/f;->tB()Lcom/kwad/framework/filedownloader/f;

    move-result-object p1

    new-instance v0, Lcom/kwad/framework/filedownloader/event/DownloadServiceConnectChangedEvent;

    sget-object v1, Lcom/kwad/framework/filedownloader/event/DownloadServiceConnectChangedEvent$ConnectStatus;->lost:Lcom/kwad/framework/filedownloader/event/DownloadServiceConnectChangedEvent$ConnectStatus;

    iget-object v2, p0, Lcom/kwad/framework/filedownloader/services/a;->adC:Ljava/lang/Class;

    invoke-direct {v0, v1, v2}, Lcom/kwad/framework/filedownloader/event/DownloadServiceConnectChangedEvent;-><init>(Lcom/kwad/framework/filedownloader/event/DownloadServiceConnectChangedEvent$ConnectStatus;Ljava/lang/Class;)V

    invoke-virtual {p1, v0}, Lcom/kwad/framework/filedownloader/f;->c(Lcom/kwad/framework/filedownloader/event/b;)V

    return-void
.end method


# virtual methods
.method protected abstract a(Landroid/os/IInterface;Landroid/os/Binder;)V
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(TINTERFACE;TCA",
            "LLBACK;",
            ")V"
        }
    .end annotation
.end method

.method public final an(Landroid/content/Context;)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, v0}, Lcom/kwad/framework/filedownloader/services/a;->a(Landroid/content/Context;Ljava/lang/Runnable;)V

    return-void
.end method

.method protected abstract b(Landroid/os/IBinder;)Landroid/os/IInterface;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/os/IBinder;",
            ")TINTERFACE;"
        }
    .end annotation
.end method

.method public final isConnected()Z
    .locals 1

    invoke-virtual {p0}, Lcom/kwad/framework/filedownloader/services/a;->vr()Landroid/os/IInterface;

    move-result-object v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public onServiceConnected(Landroid/content/ComponentName;Landroid/os/IBinder;)V
    .locals 2

    invoke-virtual {p0, p2}, Lcom/kwad/framework/filedownloader/services/a;->b(Landroid/os/IBinder;)Landroid/os/IInterface;

    move-result-object p2

    iput-object p2, p0, Lcom/kwad/framework/filedownloader/services/a;->aei:Landroid/os/IInterface;

    sget-boolean p2, Lcom/kwad/framework/filedownloader/f/d;->aeI:Z

    if-eqz p2, :cond_0

    const/4 p2, 0x2

    new-array p2, p2, [Ljava/lang/Object;

    const/4 v0, 0x0

    aput-object p1, p2, v0

    const/4 p1, 0x1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/services/a;->aei:Landroid/os/IInterface;

    aput-object v0, p2, p1

    const-string p1, "onServiceConnected %s %s"

    invoke-static {p0, p1, p2}, Lcom/kwad/framework/filedownloader/f/d;->c(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_0
    :try_start_0
    iget-object p1, p0, Lcom/kwad/framework/filedownloader/services/a;->aei:Landroid/os/IInterface;

    iget-object p2, p0, Lcom/kwad/framework/filedownloader/services/a;->aeh:Landroid/os/Binder;

    invoke-virtual {p0, p1, p2}, Lcom/kwad/framework/filedownloader/services/a;->a(Landroid/os/IInterface;Landroid/os/Binder;)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :goto_0
    iget-object p1, p0, Lcom/kwad/framework/filedownloader/services/a;->abq:Ljava/util/ArrayList;

    invoke-virtual {p1}, Ljava/util/ArrayList;->clone()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/util/List;

    iget-object p2, p0, Lcom/kwad/framework/filedownloader/services/a;->abq:Ljava/util/ArrayList;

    invoke-virtual {p2}, Ljava/util/ArrayList;->clear()V

    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_1
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result p2

    if-eqz p2, :cond_1

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Ljava/lang/Runnable;

    invoke-interface {p2}, Ljava/lang/Runnable;->run()V

    goto :goto_1

    :cond_1
    invoke-static {}, Lcom/kwad/framework/filedownloader/f;->tB()Lcom/kwad/framework/filedownloader/f;

    move-result-object p1

    new-instance p2, Lcom/kwad/framework/filedownloader/event/DownloadServiceConnectChangedEvent;

    sget-object v0, Lcom/kwad/framework/filedownloader/event/DownloadServiceConnectChangedEvent$ConnectStatus;->connected:Lcom/kwad/framework/filedownloader/event/DownloadServiceConnectChangedEvent$ConnectStatus;

    iget-object v1, p0, Lcom/kwad/framework/filedownloader/services/a;->adC:Ljava/lang/Class;

    invoke-direct {p2, v0, v1}, Lcom/kwad/framework/filedownloader/event/DownloadServiceConnectChangedEvent;-><init>(Lcom/kwad/framework/filedownloader/event/DownloadServiceConnectChangedEvent$ConnectStatus;Ljava/lang/Class;)V

    invoke-virtual {p1, p2}, Lcom/kwad/framework/filedownloader/f;->c(Lcom/kwad/framework/filedownloader/event/b;)V

    return-void
.end method

.method public onServiceDisconnected(Landroid/content/ComponentName;)V
    .locals 3

    sget-boolean v0, Lcom/kwad/framework/filedownloader/f/d;->aeI:Z

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    const/4 v0, 0x2

    new-array v0, v0, [Ljava/lang/Object;

    const/4 v2, 0x0

    aput-object p1, v0, v2

    iget-object p1, p0, Lcom/kwad/framework/filedownloader/services/a;->aei:Landroid/os/IInterface;

    aput-object p1, v0, v1

    const-string p1, "onServiceDisconnected %s %s"

    invoke-static {p0, p1, v0}, Lcom/kwad/framework/filedownloader/f/d;->c(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_0
    invoke-direct {p0, v1}, Lcom/kwad/framework/filedownloader/services/a;->aZ(Z)V

    return-void
.end method

.method protected abstract tT()Landroid/os/Binder;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()TCA",
            "LLBACK;"
        }
    .end annotation
.end method

.method protected final vr()Landroid/os/IInterface;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()TINTERFACE;"
        }
    .end annotation

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/services/a;->aei:Landroid/os/IInterface;

    return-object v0
.end method
