.class public Lcom/ss/android/downloadlib/rg/df/rg;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ss/android/downloadlib/rg/df/rg$rg;
    }
.end annotation


# static fields
.field private static c:Ljava/lang/String; = ""

.field private static volatile fw:Lcom/ss/android/downloadlib/rg/df/rg; = null

.field private static pp:Ljava/lang/String; = ""

.field private static pt:Ljava/lang/String; = ""


# instance fields
.field private b:Landroid/content/Context;

.field private volatile bm:Z

.field public final df:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/ss/android/downloadlib/rg/df/rg$rg;",
            ">;"
        }
    .end annotation
.end field

.field private f:Ljava/lang/String;

.field private final hq:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Landroid/util/Pair<",
            "Lcom/ss/android/downloadlib/rg/df/df;",
            "Lcom/ss/android/downloadlib/rg/df/pt;",
            ">;>;"
        }
    .end annotation
.end field

.field private final oh:Landroid/content/ServiceConnection;

.field public final q:Ljava/lang/Object;

.field public rg:Lcom/ss/android/downloadlib/rg/df/q;

.field private rz:Z

.field private ux:Z


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method private constructor <init>()V
    .locals 1

    .line 76
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x1

    .line 33
    iput-boolean v0, p0, Lcom/ss/android/downloadlib/rg/df/rg;->ux:Z

    const/4 v0, 0x0

    .line 34
    iput-boolean v0, p0, Lcom/ss/android/downloadlib/rg/df/rg;->rz:Z

    .line 35
    iput-boolean v0, p0, Lcom/ss/android/downloadlib/rg/df/rg;->bm:Z

    .line 37
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/ss/android/downloadlib/rg/df/rg;->hq:Ljava/util/List;

    .line 41
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/ss/android/downloadlib/rg/df/rg;->df:Ljava/util/List;

    .line 42
    new-instance v0, Lcom/ss/android/downloadlib/rg/df/rg$1;

    invoke-direct {v0, p0}, Lcom/ss/android/downloadlib/rg/df/rg$1;-><init>(Lcom/ss/android/downloadlib/rg/df/rg;)V

    iput-object v0, p0, Lcom/ss/android/downloadlib/rg/df/rg;->oh:Landroid/content/ServiceConnection;

    const-string v0, ""

    .line 66
    iput-object v0, p0, Lcom/ss/android/downloadlib/rg/df/rg;->f:Ljava/lang/String;

    .line 68
    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    iput-object v0, p0, Lcom/ss/android/downloadlib/rg/df/rg;->q:Ljava/lang/Object;

    return-void
.end method

.method public static rg()Lcom/ss/android/downloadlib/rg/df/rg;
    .locals 2

    .line 80
    sget-object v0, Lcom/ss/android/downloadlib/rg/df/rg;->fw:Lcom/ss/android/downloadlib/rg/df/rg;

    if-nez v0, :cond_1

    .line 81
    const-class v0, Lcom/ss/android/downloadlib/rg/df/rg;

    monitor-enter v0

    .line 82
    :try_start_0
    sget-object v1, Lcom/ss/android/downloadlib/rg/df/rg;->fw:Lcom/ss/android/downloadlib/rg/df/rg;

    if-nez v1, :cond_0

    .line 83
    new-instance v1, Lcom/ss/android/downloadlib/rg/df/rg;

    invoke-direct {v1}, Lcom/ss/android/downloadlib/rg/df/rg;-><init>()V

    sput-object v1, Lcom/ss/android/downloadlib/rg/df/rg;->fw:Lcom/ss/android/downloadlib/rg/df/rg;

    .line 85
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 87
    :cond_1
    :goto_0
    sget-object v0, Lcom/ss/android/downloadlib/rg/df/rg;->fw:Lcom/ss/android/downloadlib/rg/df/rg;

    return-object v0
.end method


# virtual methods
.method public df()V
    .locals 2

    .line 118
    iget-object v0, p0, Lcom/ss/android/downloadlib/rg/df/rg;->rg:Lcom/ss/android/downloadlib/rg/df/q;

    if-eqz v0, :cond_0

    .line 119
    iget-object v0, p0, Lcom/ss/android/downloadlib/rg/df/rg;->b:Landroid/content/Context;

    iget-object v1, p0, Lcom/ss/android/downloadlib/rg/df/rg;->oh:Landroid/content/ServiceConnection;

    invoke-virtual {v0, v1}, Landroid/content/Context;->unbindService(Landroid/content/ServiceConnection;)V

    const/4 v0, 0x0

    .line 120
    iput-object v0, p0, Lcom/ss/android/downloadlib/rg/df/rg;->rg:Lcom/ss/android/downloadlib/rg/df/q;

    .line 122
    :cond_0
    iget-object v0, p0, Lcom/ss/android/downloadlib/rg/df/rg;->df:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->clear()V

    .line 123
    iget-object v0, p0, Lcom/ss/android/downloadlib/rg/df/rg;->hq:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->clear()V

    return-void
.end method

.method public pt()Z
    .locals 1

    .line 185
    iget-boolean v0, p0, Lcom/ss/android/downloadlib/rg/df/rg;->bm:Z

    return v0
.end method

.method public q()V
    .locals 4

    .line 174
    iget-object v0, p0, Lcom/ss/android/downloadlib/rg/df/rg;->hq:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/util/Pair;

    .line 176
    :try_start_0
    iget-object v2, p0, Lcom/ss/android/downloadlib/rg/df/rg;->rg:Lcom/ss/android/downloadlib/rg/df/q;

    iget-object v3, v1, Landroid/util/Pair;->first:Ljava/lang/Object;

    check-cast v3, Lcom/ss/android/downloadlib/rg/df/df;

    iget-object v1, v1, Landroid/util/Pair;->second:Ljava/lang/Object;

    check-cast v1, Lcom/ss/android/downloadlib/rg/df/pt;

    invoke-interface {v2, v3, v1}, Lcom/ss/android/downloadlib/rg/df/q;->rg(Lcom/ss/android/downloadlib/rg/df/df;Lcom/ss/android/downloadlib/rg/df/pt;)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 178
    invoke-virtual {v1}, Landroid/os/RemoteException;->printStackTrace()V

    goto :goto_0

    .line 181
    :cond_0
    iget-object v0, p0, Lcom/ss/android/downloadlib/rg/df/rg;->hq:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->clear()V

    return-void
.end method

.method public rg(Landroid/content/Context;)Landroid/content/Intent;
    .locals 5

    .line 127
    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0}, Landroid/content/Intent;-><init>()V

    .line 128
    sget-object v1, Lcom/ss/android/downloadlib/rg/df/rg;->pt:Ljava/lang/String;

    invoke-virtual {v0, v1}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;

    .line 129
    invoke-virtual {p1}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object p1

    const/4 v1, 0x0

    invoke-virtual {p1, v0, v1}, Landroid/content/pm/PackageManager;->queryIntentServices(Landroid/content/Intent;I)Ljava/util/List;

    move-result-object p1

    const/4 v1, 0x0

    if-eqz p1, :cond_2

    .line 130
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v2

    const/4 v3, 0x1

    if-eq v2, v3, :cond_0

    goto :goto_0

    .line 133
    :cond_0
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_1
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_2

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Landroid/content/pm/ResolveInfo;

    .line 134
    iget-object v3, v2, Landroid/content/pm/ResolveInfo;->serviceInfo:Landroid/content/pm/ServiceInfo;

    iget-object v3, v3, Landroid/content/pm/ServiceInfo;->packageName:Ljava/lang/String;

    .line 135
    iget-object v2, v2, Landroid/content/pm/ResolveInfo;->serviceInfo:Landroid/content/pm/ServiceInfo;

    iget-object v2, v2, Landroid/content/pm/ServiceInfo;->name:Ljava/lang/String;

    .line 136
    sget-object v4, Lcom/ss/android/downloadlib/rg/df/rg;->pp:Ljava/lang/String;

    invoke-virtual {v4, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_1

    .line 137
    new-instance p1, Landroid/content/ComponentName;

    invoke-direct {p1, v3, v2}, Landroid/content/ComponentName;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    .line 138
    new-instance v1, Landroid/content/Intent;

    invoke-direct {v1, v0}, Landroid/content/Intent;-><init>(Landroid/content/Intent;)V

    .line 139
    invoke-virtual {v1, p1}, Landroid/content/Intent;->setComponent(Landroid/content/ComponentName;)Landroid/content/Intent;

    :cond_2
    :goto_0
    return-object v1
.end method

.method public rg(Lcom/ss/android/downloadlib/rg/df/df;Lcom/ss/android/downloadlib/rg/df/pt;)V
    .locals 3

    .line 147
    iget-object v0, p0, Lcom/ss/android/downloadlib/rg/df/rg;->q:Ljava/lang/Object;

    monitor-enter v0

    .line 148
    :try_start_0
    sget-object v1, Lcom/ss/android/downloadlib/rg/df/rg;->c:Ljava/lang/String;

    iput-object v1, p1, Lcom/ss/android/downloadlib/rg/df/df;->pp:Ljava/lang/String;

    .line 149
    iget-object v1, p1, Lcom/ss/android/downloadlib/rg/df/df;->c:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 150
    iget-object v1, p0, Lcom/ss/android/downloadlib/rg/df/rg;->f:Ljava/lang/String;

    iput-object v1, p1, Lcom/ss/android/downloadlib/rg/df/df;->c:Ljava/lang/String;

    .line 152
    :cond_0
    iget-object v1, p0, Lcom/ss/android/downloadlib/rg/df/rg;->rg:Lcom/ss/android/downloadlib/rg/df/q;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v1, :cond_1

    .line 154
    :try_start_1
    iget-object v1, p0, Lcom/ss/android/downloadlib/rg/df/rg;->rg:Lcom/ss/android/downloadlib/rg/df/q;

    invoke-interface {v1, p1, p2}, Lcom/ss/android/downloadlib/rg/df/q;->rg(Lcom/ss/android/downloadlib/rg/df/df;Lcom/ss/android/downloadlib/rg/df/pt;)V
    :try_end_1
    .catch Landroid/os/RemoteException; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 156
    :try_start_2
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    goto :goto_0

    .line 160
    :cond_1
    invoke-virtual {p0}, Lcom/ss/android/downloadlib/rg/df/rg;->pt()Z

    move-result v1

    if-nez v1, :cond_2

    iget-object v1, p0, Lcom/ss/android/downloadlib/rg/df/rg;->b:Landroid/content/Context;

    iget-boolean v2, p0, Lcom/ss/android/downloadlib/rg/df/rg;->rz:Z

    invoke-virtual {p0, v1, v2}, Lcom/ss/android/downloadlib/rg/df/rg;->rg(Landroid/content/Context;Z)Z

    move-result v1

    if-eqz v1, :cond_3

    .line 162
    :cond_2
    iget-object v1, p0, Lcom/ss/android/downloadlib/rg/df/rg;->hq:Ljava/util/List;

    invoke-static {p1, p2}, Landroid/util/Pair;->create(Ljava/lang/Object;Ljava/lang/Object;)Landroid/util/Pair;

    move-result-object p1

    invoke-interface {v1, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 167
    :cond_3
    :goto_0
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit v0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    throw p1
.end method

.method public rg(Z)V
    .locals 0

    .line 189
    iput-boolean p1, p0, Lcom/ss/android/downloadlib/rg/df/rg;->bm:Z

    return-void
.end method

.method public rg(Landroid/content/Context;Z)Z
    .locals 3

    .line 91
    sget-object v0, Lcom/ss/android/downloadlib/rg/df/rg;->pt:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 92
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->rz()Lorg/json/JSONObject;

    move-result-object v0

    const-string v1, "s"

    .line 93
    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "q"

    .line 94
    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v2, v1}, Lcom/ss/android/socialbase/appdownloader/c/q;->rg(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    sput-object v2, Lcom/ss/android/downloadlib/rg/df/rg;->pt:Ljava/lang/String;

    const-string v2, "u"

    .line 95
    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v2, v1}, Lcom/ss/android/socialbase/appdownloader/c/q;->rg(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    sput-object v2, Lcom/ss/android/downloadlib/rg/df/rg;->pp:Ljava/lang/String;

    const-string v2, "w"

    .line 96
    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0, v1}, Lcom/ss/android/socialbase/appdownloader/c/q;->rg(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/ss/android/downloadlib/rg/df/rg;->c:Ljava/lang/String;

    .line 98
    :cond_0
    iput-boolean p2, p0, Lcom/ss/android/downloadlib/rg/df/rg;->rz:Z

    if-eqz p1, :cond_3

    .line 100
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p2

    iput-object p2, p0, Lcom/ss/android/downloadlib/rg/df/rg;->b:Landroid/content/Context;

    .line 101
    sget-object p2, Lcom/ss/android/downloadlib/rg/df/rg;->c:Ljava/lang/String;

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-eqz p2, :cond_1

    .line 102
    iget-object p2, p0, Lcom/ss/android/downloadlib/rg/df/rg;->b:Landroid/content/Context;

    invoke-virtual {p2}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p2

    sput-object p2, Lcom/ss/android/downloadlib/rg/df/rg;->c:Ljava/lang/String;

    .line 104
    :cond_1
    iget-object p2, p0, Lcom/ss/android/downloadlib/rg/df/rg;->rg:Lcom/ss/android/downloadlib/rg/df/q;

    if-nez p2, :cond_3

    .line 105
    invoke-virtual {p0}, Lcom/ss/android/downloadlib/rg/df/rg;->pt()Z

    move-result p2

    if-eqz p2, :cond_2

    goto :goto_0

    .line 108
    :cond_2
    invoke-virtual {p0, p1}, Lcom/ss/android/downloadlib/rg/df/rg;->rg(Landroid/content/Context;)Landroid/content/Intent;

    move-result-object p1

    .line 109
    iget-object p2, p0, Lcom/ss/android/downloadlib/rg/df/rg;->b:Landroid/content/Context;

    iget-object v0, p0, Lcom/ss/android/downloadlib/rg/df/rg;->oh:Landroid/content/ServiceConnection;

    const/16 v1, 0x21

    invoke-virtual {p2, p1, v0, v1}, Landroid/content/Context;->bindService(Landroid/content/Intent;Landroid/content/ServiceConnection;I)Z

    move-result p1

    return p1

    :cond_3
    :goto_0
    const/4 p1, 0x1

    return p1
.end method
