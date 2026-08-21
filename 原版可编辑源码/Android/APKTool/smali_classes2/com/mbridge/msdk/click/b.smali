.class public final Lcom/mbridge/msdk/click/b;
.super Ljava/lang/Object;
.source "CommonClickControl.java"


# static fields
.field public static a:Z

.field public static b:Ljava/util/Set;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Set<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field public static c:Ljava/util/Set;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Set<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field public static d:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Long;",
            ">;"
        }
    .end annotation
.end field

.field public static e:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Long;",
            ">;"
        }
    .end annotation
.end field

.field static f:Landroid/os/Handler;


# instance fields
.field private g:Ljava/lang/String;

.field private h:J

.field private i:J

.field private j:Z

.field private k:Z

.field private l:Z

.field private m:Z

.field private n:Z

.field private o:Lcom/mbridge/msdk/c/a;

.field private p:Lcom/mbridge/msdk/foundation/db/i;

.field private q:Landroid/content/Context;

.field private r:Lcom/mbridge/msdk/click/CommonJumpLoader;

.field private s:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Lcom/mbridge/msdk/click/CommonJumpLoader;",
            ">;"
        }
    .end annotation
.end field

.field private t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

.field private u:Lcom/mbridge/msdk/foundation/same/report/d;

.field private v:Lcom/mbridge/msdk/click/h;

.field private w:Landroid/os/Handler;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 83
    new-instance v0, Ljava/util/HashSet;

    invoke-direct {v0}, Ljava/util/HashSet;-><init>()V

    sput-object v0, Lcom/mbridge/msdk/click/b;->b:Ljava/util/Set;

    .line 84
    new-instance v0, Ljava/util/HashSet;

    invoke-direct {v0}, Ljava/util/HashSet;-><init>()V

    sput-object v0, Lcom/mbridge/msdk/click/b;->c:Ljava/util/Set;

    .line 85
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/mbridge/msdk/click/b;->d:Ljava/util/Map;

    .line 86
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/mbridge/msdk/click/b;->e:Ljava/util/Map;

    .line 1761
    new-instance v0, Lcom/mbridge/msdk/click/b$9;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/mbridge/msdk/click/b$9;-><init>(Landroid/os/Looper;)V

    sput-object v0, Lcom/mbridge/msdk/click/b;->f:Landroid/os/Handler;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Ljava/lang/String;)V
    .locals 1

    .line 135
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 94
    iput-boolean v0, p0, Lcom/mbridge/msdk/click/b;->m:Z

    const/4 v0, 0x1

    .line 95
    iput-boolean v0, p0, Lcom/mbridge/msdk/click/b;->n:Z

    const/4 v0, 0x0

    .line 98
    iput-object v0, p0, Lcom/mbridge/msdk/click/b;->p:Lcom/mbridge/msdk/foundation/db/i;

    .line 99
    iput-object v0, p0, Lcom/mbridge/msdk/click/b;->q:Landroid/content/Context;

    .line 103
    iput-object v0, p0, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    .line 107
    new-instance v0, Lcom/mbridge/msdk/click/b$1;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/click/b$1;-><init>(Lcom/mbridge/msdk/click/b;)V

    iput-object v0, p0, Lcom/mbridge/msdk/click/b;->w:Landroid/os/Handler;

    .line 136
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v0

    invoke-virtual {v0, p2}, Lcom/mbridge/msdk/c/b;->b(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/click/b;->o:Lcom/mbridge/msdk/c/a;

    if-nez v0, :cond_0

    .line 138
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/c/b;->b()Lcom/mbridge/msdk/c/a;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/click/b;->o:Lcom/mbridge/msdk/c/a;

    .line 141
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/click/b;->o:Lcom/mbridge/msdk/c/a;

    invoke-virtual {v0}, Lcom/mbridge/msdk/c/a;->ad()Z

    move-result v0

    iput-boolean v0, p0, Lcom/mbridge/msdk/click/b;->k:Z

    .line 142
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    iput-object p1, p0, Lcom/mbridge/msdk/click/b;->q:Landroid/content/Context;

    .line 143
    iput-object p2, p0, Lcom/mbridge/msdk/click/b;->g:Ljava/lang/String;

    .line 144
    iget-object p2, p0, Lcom/mbridge/msdk/click/b;->p:Lcom/mbridge/msdk/foundation/db/i;

    if-nez p2, :cond_1

    .line 145
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object p1

    iput-object p1, p0, Lcom/mbridge/msdk/click/b;->p:Lcom/mbridge/msdk/foundation/db/i;

    .line 147
    :cond_1
    new-instance p1, Lcom/mbridge/msdk/foundation/same/report/d;

    iget-object p2, p0, Lcom/mbridge/msdk/click/b;->q:Landroid/content/Context;

    invoke-direct {p1, p2}, Lcom/mbridge/msdk/foundation/same/report/d;-><init>(Landroid/content/Context;)V

    iput-object p1, p0, Lcom/mbridge/msdk/click/b;->u:Lcom/mbridge/msdk/foundation/same/report/d;

    .line 149
    new-instance p1, Ljava/util/HashMap;

    invoke-direct {p1}, Ljava/util/HashMap;-><init>()V

    iput-object p1, p0, Lcom/mbridge/msdk/click/b;->s:Ljava/util/HashMap;

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/click/b;)Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;
    .locals 0

    .line 70
    iget-object p0, p0, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    return-object p0
.end method

.method private a(Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/scheme/applet/AppletsModel;Lcom/mbridge/msdk/click/b;)Lcom/mbridge/msdk/scheme/applet/AppletSchemeCallBack;
    .locals 1

    .line 881
    new-instance v0, Lcom/mbridge/msdk/click/f;

    invoke-direct {v0, p1, p2, p3, p4}, Lcom/mbridge/msdk/click/f;-><init>(Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/scheme/applet/AppletsModel;Lcom/mbridge/msdk/click/b;)V

    return-object v0
.end method

.method private a(ILjava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;)V
    .locals 1

    .line 1381
    :try_start_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    const/4 v0, 0x2

    if-ne p1, v0, :cond_0

    .line 1383
    iget-object p1, p0, Lcom/mbridge/msdk/click/b;->q:Landroid/content/Context;

    invoke-static {p1, p2, p3, p4}, Lcom/mbridge/msdk/foundation/tools/ad;->a(Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;)V

    goto :goto_0

    .line 1386
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/click/b;->q:Landroid/content/Context;

    invoke-static {p1, p2, p4}, Lcom/mbridge/msdk/foundation/tools/ad;->a(Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/out/BaseTrackingListener;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 1390
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    const-string p3, "MBridge SDK M"

    invoke-static {p3, p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public static a(Landroid/content/Context;)V
    .locals 3

    .line 1849
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v0

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/c/b;->b(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object v0

    if-nez v0, :cond_0

    .line 1851
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/c/b;->b()Lcom/mbridge/msdk/c/a;

    move-result-object v0

    :cond_0
    if-eqz v0, :cond_2

    .line 1854
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    const/4 v2, 0x0

    if-nez v1, :cond_1

    if-eqz p0, :cond_1

    .line 1855
    invoke-virtual {v0}, Lcom/mbridge/msdk/c/a;->Q()Ljava/lang/String;

    move-result-object v0

    invoke-static {p0, v0, v2}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object p0

    invoke-virtual {p0}, Landroid/widget/Toast;->show()V

    goto :goto_0

    .line 1857
    :cond_1
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p0

    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object p0

    invoke-virtual {v0}, Lcom/mbridge/msdk/c/a;->Q()Ljava/lang/String;

    move-result-object v0

    invoke-static {p0, v0, v2}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object p0

    invoke-virtual {p0}, Landroid/widget/Toast;->show()V

    :cond_2
    :goto_0
    return-void
.end method

.method private a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    .locals 9

    const/4 v0, 0x2

    if-nez p1, :cond_0

    .line 887
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object p1

    iget-object v1, p0, Lcom/mbridge/msdk/click/b;->g:Ljava/lang/String;

    const-string v2, "context is null"

    invoke-static {p1, p2, v0, v2, v1}, Lcom/mbridge/msdk/foundation/same/report/e;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;ILjava/lang/String;Ljava/lang/String;)V

    return-void

    .line 890
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->v()I

    move-result v1

    const/4 v2, 0x0

    const/4 v3, 0x1

    if-ne v1, v3, :cond_1

    move v1, v3

    goto :goto_0

    :cond_1
    move v1, v2

    .line 891
    :goto_0
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/v;->r(Landroid/content/Context;)I

    move-result v4

    if-ne v4, v3, :cond_2

    move v4, v3

    goto :goto_1

    :cond_2
    move v4, v2

    :goto_1
    if-eqz v1, :cond_6

    if-nez v4, :cond_3

    goto/16 :goto_4

    .line 897
    :cond_3
    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getGhId()Ljava/lang/String;

    move-result-object v1

    .line 898
    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getGhPath()Ljava/lang/String;

    move-result-object v4

    .line 899
    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getBindId()Ljava/lang/String;

    move-result-object v5

    .line 900
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v6

    invoke-virtual {v6}, Lcom/mbridge/msdk/foundation/controller/a;->m()Ljava/lang/String;

    move-result-object v6

    .line 901
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v7

    if-nez v7, :cond_5

    .line 903
    :try_start_0
    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v7

    if-eqz v7, :cond_4

    goto :goto_2

    :cond_4
    move-object v5, v6

    :goto_2
    invoke-static {v5}, Lcom/mbridge/msdk/foundation/tools/v;->f(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v5

    const-string v6, "com.tencent.mm.opensdk.modelbiz.WXLaunchMiniProgram$Req"

    .line 904
    invoke-static {v6}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v6

    .line 905
    invoke-virtual {v6}, Ljava/lang/Class;->newInstance()Ljava/lang/Object;

    move-result-object v7

    const-string v8, "userName"

    .line 906
    invoke-virtual {v6, v8}, Ljava/lang/Class;->getField(Ljava/lang/String;)Ljava/lang/reflect/Field;

    move-result-object v8

    .line 907
    invoke-virtual {v8, v7, v1}, Ljava/lang/reflect/Field;->set(Ljava/lang/Object;Ljava/lang/Object;)V

    const-string v1, "path"

    .line 908
    invoke-virtual {v6, v1}, Ljava/lang/Class;->getField(Ljava/lang/String;)Ljava/lang/reflect/Field;

    move-result-object v1

    .line 909
    invoke-virtual {v1, v7, v4}, Ljava/lang/reflect/Field;->set(Ljava/lang/Object;Ljava/lang/Object;)V

    const-string v1, "miniprogramType"

    .line 910
    invoke-virtual {v6, v1}, Ljava/lang/Class;->getField(Ljava/lang/String;)Ljava/lang/reflect/Field;

    move-result-object v1

    const-string v4, "MINIPTOGRAM_TYPE_RELEASE"

    .line 911
    invoke-virtual {v6, v4}, Ljava/lang/Class;->getField(Ljava/lang/String;)Ljava/lang/reflect/Field;

    move-result-object v4

    const/4 v6, 0x0

    .line 912
    invoke-virtual {v4, v6}, Ljava/lang/reflect/Field;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    invoke-virtual {v1, v7, v4}, Ljava/lang/reflect/Field;->set(Ljava/lang/Object;Ljava/lang/Object;)V

    const-string v1, "com.tencent.mm.opensdk.openapi.IWXAPI"

    .line 913
    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    const-string v4, "sendReq"

    new-array v6, v3, [Ljava/lang/Class;

    const-string v8, "com.tencent.mm.opensdk.modelbase.BaseReq"

    .line 914
    invoke-static {v8}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v8

    aput-object v8, v6, v2

    invoke-virtual {v1, v4, v6}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1

    new-array v4, v3, [Ljava/lang/Object;

    aput-object v7, v4, v2

    .line 915
    invoke-virtual {v1, v5, v4}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 921
    iget-object v0, p0, Lcom/mbridge/msdk/click/b;->g:Ljava/lang/String;

    const-string v1, ""

    invoke-static {p1, p2, v3, v1, v0}, Lcom/mbridge/msdk/foundation/same/report/e;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;ILjava/lang/String;Ljava/lang/String;)V

    goto :goto_3

    :catchall_0
    move-exception v1

    .line 917
    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/click/b;->g:Ljava/lang/String;

    invoke-static {p1, p2, v0, v1, v2}, Lcom/mbridge/msdk/foundation/same/report/e;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;ILjava/lang/String;Ljava/lang/String;)V

    .line 918
    invoke-direct {p0, p2}, Lcom/mbridge/msdk/click/b;->f(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    return-void

    .line 923
    :cond_5
    invoke-direct {p0, p2}, Lcom/mbridge/msdk/click/b;->f(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 924
    iget-object v1, p0, Lcom/mbridge/msdk/click/b;->g:Ljava/lang/String;

    const-string v2, "ghid is empty"

    invoke-static {p1, p2, v0, v2, v1}, Lcom/mbridge/msdk/foundation/same/report/e;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;ILjava/lang/String;Ljava/lang/String;)V

    :goto_3
    return-void

    .line 893
    :cond_6
    :goto_4
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "integrated:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, "-hasWx:"

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/click/b;->g:Ljava/lang/String;

    invoke-static {p1, p2, v0, v1, v2}, Lcom/mbridge/msdk/foundation/same/report/e;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;ILjava/lang/String;Ljava/lang/String;)V

    .line 894
    invoke-direct {p0, p2}, Lcom/mbridge/msdk/click/b;->f(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    return-void
.end method

.method public static a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;ZZ)V
    .locals 9

    if-nez p0, :cond_0

    return-void

    .line 941
    :cond_0
    new-instance v0, Lcom/mbridge/msdk/click/CommonJumpLoader;

    invoke-virtual {p0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    const/4 v1, 0x1

    invoke-direct {v0, p0, v1}, Lcom/mbridge/msdk/click/CommonJumpLoader;-><init>(Landroid/content/Context;Z)V

    const/4 v4, 0x0

    .line 942
    sget v8, Lcom/mbridge/msdk/click/a/a;->f:I

    const-string v1, "2"

    move-object v2, p2

    move-object v3, p1

    move-object v5, p3

    move v6, p4

    move v7, p5

    invoke-virtual/range {v0 .. v8}, Lcom/mbridge/msdk/click/CommonJumpLoader;->a(Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/click/e;Ljava/lang/String;ZZI)V

    return-void
.end method

.method public static a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;ZZI)V
    .locals 9

    if-nez p0, :cond_0

    return-void

    .line 949
    :cond_0
    new-instance v0, Lcom/mbridge/msdk/click/CommonJumpLoader;

    invoke-virtual {p0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    const/4 v1, 0x1

    invoke-direct {v0, p0, v1}, Lcom/mbridge/msdk/click/CommonJumpLoader;-><init>(Landroid/content/Context;Z)V

    const/4 v4, 0x0

    const-string v1, "2"

    move-object v2, p2

    move-object v3, p1

    move-object v5, p3

    move v6, p4

    move v7, p5

    move v8, p6

    .line 950
    invoke-virtual/range {v0 .. v8}, Lcom/mbridge/msdk/click/CommonJumpLoader;->a(Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/click/e;Ljava/lang/String;ZZI)V

    return-void
.end method

.method public static a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;[Ljava/lang/String;ZZ)V
    .locals 10

    if-eqz p0, :cond_1

    if-eqz p1, :cond_1

    .line 954
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    if-nez p3, :cond_0

    goto :goto_1

    .line 957
    :cond_0
    new-instance v0, Lcom/mbridge/msdk/click/CommonJumpLoader;

    invoke-virtual {p0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    const/4 v1, 0x1

    invoke-direct {v0, p0, v1}, Lcom/mbridge/msdk/click/CommonJumpLoader;-><init>(Landroid/content/Context;Z)V

    const/4 p0, 0x0

    .line 959
    :goto_0
    array-length v1, p3

    if-ge p0, v1, :cond_1

    const/4 v5, 0x0

    .line 960
    aget-object v6, p3, p0

    sget v9, Lcom/mbridge/msdk/click/a/a;->f:I

    const-string v2, "2"

    move-object v1, v0

    move-object v3, p2

    move-object v4, p1

    move v7, p4

    move v8, p5

    invoke-virtual/range {v1 .. v9}, Lcom/mbridge/msdk/click/CommonJumpLoader;->a(Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/click/e;Ljava/lang/String;ZZI)V

    add-int/lit8 p0, p0, 0x1

    goto :goto_0

    :cond_1
    :goto_1
    return-void
.end method

.method private a(Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZZ)V
    .locals 1

    .line 1370
    iget-boolean v0, p0, Lcom/mbridge/msdk/click/b;->j:Z

    if-eqz v0, :cond_0

    const/4 p4, 0x1

    .line 1371
    invoke-virtual {p0, p1, p2, p4, p3}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;Lcom/mbridge/msdk/foundation/entity/CampaignEx;IZ)V

    goto :goto_0

    :cond_0
    if-eqz p4, :cond_1

    const/4 p4, 0x2

    .line 1373
    invoke-virtual {p0, p1, p2, p4, p3}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;Lcom/mbridge/msdk/foundation/entity/CampaignEx;IZ)V

    :cond_1
    :goto_0
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/click/b;Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZZ)V
    .locals 0

    .line 70
    invoke-direct {p0, p1, p2, p3, p4}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZZ)V

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/click/b;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    .locals 3

    .line 4069
    :try_start_0
    new-instance v0, Landroid/content/Intent;

    iget-object v1, p0, Lcom/mbridge/msdk/click/b;->q:Landroid/content/Context;

    const-class v2, Lcom/mbridge/msdk/out/LoadingActivity;

    invoke-direct {v0, v1, v2}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    const/high16 v1, 0x10000000

    .line 4070
    invoke-virtual {v0, v1}, Landroid/content/Intent;->setFlags(I)Landroid/content/Intent;

    const-string v1, "icon_url"

    .line 4071
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getIconUrl()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, v1, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 4072
    iget-object p0, p0, Lcom/mbridge/msdk/click/b;->q:Landroid/content/Context;

    invoke-virtual {p0, v0}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    const-string p1, "MBridge SDK M"

    const-string v0, "Exception"

    .line 4074
    invoke-static {p1, v0, p0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_0
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/click/b;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;ZZZLjava/lang/Boolean;)V
    .locals 0

    .line 70
    invoke-direct/range {p0 .. p6}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;ZZZLjava/lang/Boolean;)V

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/click/b;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;I)V
    .locals 0

    .line 70
    invoke-direct {p0, p1, p2, p3}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;I)V

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/click/b;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Z)V
    .locals 10

    if-eqz p1, :cond_0

    .line 6010
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAkdlui()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 6011
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAkdlui()Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    .line 6013
    :cond_0
    invoke-static {p2}, Lcom/mbridge/msdk/foundation/tools/SameMD5;->getMD5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    :goto_0
    const/4 v1, 0x1

    :try_start_0
    new-array v1, v1, [Z

    const-string v2, "/apk"

    .line 6019
    iget-object v3, p0, Lcom/mbridge/msdk/click/b;->q:Landroid/content/Context;

    invoke-static {v2, v3, v1}, Lcom/mbridge/msdk/foundation/tools/x;->a(Ljava/lang/String;Landroid/content/Context;[Z)Ljava/io/File;

    move-result-object v7

    .line 6022
    invoke-static {p2}, Lcom/mbridge/msdk/click/c;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    .line 6023
    new-instance v9, Lcom/mbridge/msdk/click/b$3;

    move-object v1, v9

    move-object v2, p0

    move-object v3, p1

    move v4, p3

    move-object v5, v0

    move-object v6, p2

    invoke-direct/range {v1 .. v6}, Lcom/mbridge/msdk/click/b$3;-><init>(Lcom/mbridge/msdk/click/b;Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZLjava/lang/String;Ljava/lang/String;)V

    invoke-static {v7, v8, p2, v9}, Lcom/mbridge/msdk/optimize/a;->a(Ljava/io/File;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/optimize/b;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    .line 6063
    :catchall_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p0

    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object p0

    invoke-static {p0, p2, v0}, Lcom/mbridge/msdk/click/c;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    :goto_1
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/click/b;Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZLcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;IZ)V
    .locals 8

    if-nez p1, :cond_0

    goto :goto_0

    :cond_0
    :try_start_0
    const-string v0, ""

    if-eqz p3, :cond_1

    .line 3103
    invoke-virtual {p3}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->getUrl()Ljava/lang/String;

    move-result-object v0

    .line 3106
    :cond_1
    iget-object v1, p0, Lcom/mbridge/msdk/click/b;->p:Lcom/mbridge/msdk/foundation/db/i;

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/db/c;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/c;

    move-result-object v2

    .line 3107
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getLinkType()I

    move-result v1

    invoke-direct {p0, v1, v0}, Lcom/mbridge/msdk/click/b;->a(ILjava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_3

    const/4 v0, 0x0

    .line 3109
    invoke-direct {p0, p3, p1, v0, p5}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZZ)V

    .line 3110
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getJumpResult()Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    move-result-object p3

    if-eqz p3, :cond_2

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNoticeUrl()Ljava/lang/String;

    move-result-object p3

    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p3

    if-nez p3, :cond_2

    .line 3111
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getJumpResult()Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    move-result-object p3

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNoticeUrl()Ljava/lang/String;

    move-result-object p5

    invoke-virtual {p3, p5}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->setNoticeurl(Ljava/lang/String;)V

    .line 3113
    :cond_2
    iget-object v4, p0, Lcom/mbridge/msdk/click/b;->g:Ljava/lang/String;

    const/4 v6, 0x1

    move-object v3, p1

    move v5, p2

    move v7, p4

    invoke-virtual/range {v2 .. v7}, Lcom/mbridge/msdk/foundation/db/c;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;ZII)J

    goto :goto_0

    :cond_3
    const/4 v0, 0x1

    .line 3116
    invoke-direct {p0, p3, p1, v0, p5}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZZ)V

    .line 3117
    iget-object v4, p0, Lcom/mbridge/msdk/click/b;->g:Ljava/lang/String;

    const/4 v6, 0x0

    move-object v3, p1

    move v5, p2

    move v7, p4

    invoke-virtual/range {v2 .. v7}, Lcom/mbridge/msdk/foundation/db/c;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;ZII)J
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 3120
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/click/b;ZLcom/mbridge/msdk/out/Campaign;)V
    .locals 2

    .line 4229
    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    new-instance v1, Lcom/mbridge/msdk/click/b$7;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/click/b$7;-><init>(Lcom/mbridge/msdk/click/b;ZLcom/mbridge/msdk/out/Campaign;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public static a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;)V
    .locals 2

    :try_start_0
    const-string v0, "start"

    .line 1783
    invoke-virtual {p2, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, "downloading"

    invoke-virtual {p2, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 1784
    :cond_0
    invoke-static {}, Landroid/os/Looper;->myLooper()Landroid/os/Looper;

    move-result-object v0

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    if-ne v0, v1, :cond_1

    .line 1785
    invoke-static {}, Lcom/mbridge/msdk/click/b;->d()V

    goto :goto_0

    .line 1787
    :cond_1
    sget-object v0, Lcom/mbridge/msdk/click/b;->f:Landroid/os/Handler;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v0

    .line 1788
    iput-object p1, v0, Landroid/os/Message;->obj:Ljava/lang/Object;

    .line 1789
    sget-object v1, Lcom/mbridge/msdk/click/b;->f:Landroid/os/Handler;

    invoke-virtual {v1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .line 1792
    :cond_2
    :goto_0
    invoke-static {p0, p1, p2}, Lcom/mbridge/msdk/click/b;->c(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p0

    .line 1794
    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    const-string p2, "MBridge SDK M"

    invoke-static {p2, p1, p0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_1
    return-void
.end method

.method private a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;ZZZLjava/lang/Boolean;)V
    .locals 11

    move-object v7, p0

    move-object v0, p1

    move-object v3, p2

    move v4, p3

    move/from16 v5, p5

    .line 1497
    :try_start_0
    iget-boolean v1, v7, Lcom/mbridge/msdk/click/b;->n:Z

    if-nez v1, :cond_0

    return-void

    .line 1501
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/c/a;->aq()Z

    move-result v1

    sput-boolean v1, Lcom/mbridge/msdk/MBridgeConstans;->ALLOW_APK_DOWNLOAD:Z

    const/4 v1, 0x1

    if-eqz v0, :cond_14

    if-nez v3, :cond_1

    goto/16 :goto_4

    .line 1514
    :cond_1
    invoke-direct {p0}, Lcom/mbridge/msdk/click/b;->c()I

    move-result v2

    .line 1515
    invoke-virtual {p2}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->getCode()I

    move-result v6

    .line 1517
    invoke-virtual/range {p6 .. p6}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v8

    if-nez v8, :cond_3

    .line 1518
    invoke-virtual {p2}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->getUrl()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    .line 1519
    invoke-virtual {p2}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->getUrl()Ljava/lang/String;

    move-result-object v1

    invoke-virtual/range {p6 .. p6}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v2

    invoke-direct {p0, p1, v1, v2}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Z)V

    :cond_2
    return-void

    .line 1523
    :cond_3
    invoke-virtual {p2}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->getUrl()Ljava/lang/String;

    move-result-object v8

    invoke-static {v8}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v8

    const/4 v9, 0x2

    const/4 v10, 0x3

    if-eqz v8, :cond_7

    if-eqz v4, :cond_7

    .line 1529
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getLinkType()I

    move-result v2

    if-ne v2, v9, :cond_4

    .line 1531
    invoke-direct {p0}, Lcom/mbridge/msdk/click/b;->c()I

    move-result v6

    move-object v1, p0

    move-object v2, p1

    move-object v3, p2

    move v4, p3

    move/from16 v5, p5

    invoke-direct/range {v1 .. v6}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;ZZI)Z

    return-void

    :cond_4
    if-ne v2, v10, :cond_5

    .line 1534
    invoke-direct {p0, p1, p2, p3, v5}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;ZZ)Z

    return-void

    .line 1538
    :cond_5
    iget-object v2, v7, Lcom/mbridge/msdk/click/b;->q:Landroid/content/Context;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClickURL()Ljava/lang/String;

    move-result-object v6

    iget-object v8, v7, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-static {v2, v6, v8}, Lcom/mbridge/msdk/foundation/tools/ad;->a(Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/out/BaseTrackingListener;)V

    .line 1540
    invoke-direct {p0, p2, p1, v1, v5}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZZ)V

    .line 1541
    iget-object v1, v7, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    if-eqz v1, :cond_6

    if-eqz v4, :cond_6

    .line 1542
    iget-object v1, v7, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-virtual {p2}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->getUrl()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v1, p1, v2}, Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;->onFinishRedirection(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_6
    return-void

    :cond_7
    const-string v8, "MBridge SDK M"

    if-ne v6, v1, :cond_c

    .line 1551
    :try_start_1
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "Jump to Google Play: "

    invoke-virtual {v6, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->getUrl()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v6, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v8, v6}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1552
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPackageName()Ljava/lang/String;

    move-result-object v6

    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_8

    invoke-virtual {p2}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->getUrl()Ljava/lang/String;

    move-result-object v6

    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_8

    invoke-virtual {p2}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->getUrl()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPackageName()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v6, v9}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v6

    if-eqz v6, :cond_8

    if-eqz v4, :cond_8

    .line 1554
    iget-object v6, v7, Lcom/mbridge/msdk/click/b;->q:Landroid/content/Context;

    invoke-virtual {p2}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->getUrl()Ljava/lang/String;

    move-result-object v8

    iget-object v9, v7, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-static {v6, v8, v9}, Lcom/mbridge/msdk/foundation/tools/ad$a;->a(Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;)Z

    move-result v6

    if-nez v6, :cond_b

    .line 1556
    invoke-virtual {p2}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->getUrl()Ljava/lang/String;

    move-result-object v6

    iget-object v8, v7, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-direct {p0, v2, v6, p1, v8}, Lcom/mbridge/msdk/click/b;->a(ILjava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;)V

    goto :goto_0

    :cond_8
    if-eqz v4, :cond_b

    .line 1561
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPackageName()Ljava/lang/String;

    move-result-object v6

    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_9

    iget-object v6, v7, Lcom/mbridge/msdk/click/b;->q:Landroid/content/Context;

    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    const-string v10, "market://details?id="

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPackageName()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    iget-object v10, v7, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-static {v6, v9, v10}, Lcom/mbridge/msdk/foundation/tools/ad$a;->a(Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;)Z

    move-result v6

    if-nez v6, :cond_a

    .line 1562
    :cond_9
    invoke-virtual {p2}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->getUrl()Ljava/lang/String;

    move-result-object v6

    iget-object v9, v7, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-direct {p0, v2, v6, p1, v9}, Lcom/mbridge/msdk/click/b;->a(ILjava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;)V

    .line 1564
    :cond_a
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "code market This pkg is "

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPackageName()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v8, v2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1567
    :cond_b
    :goto_0
    iget-object v2, v7, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    if-eqz v2, :cond_12

    if-eqz v4, :cond_12

    .line 1568
    iget-object v2, v7, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-virtual {p2}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->getUrl()Ljava/lang/String;

    move-result-object v6

    invoke-interface {v2, p1, v6}, Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;->onFinishRedirection(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V

    goto/16 :goto_2

    :cond_c
    if-ne v6, v10, :cond_f

    if-eqz v4, :cond_e

    .line 1574
    sget-boolean v2, Lcom/mbridge/msdk/MBridgeConstans;->ALLOW_APK_DOWNLOAD:Z

    if-eqz v2, :cond_d

    .line 1575
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "Jump to download: "

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->getUrl()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v8, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1576
    invoke-virtual {p2}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->getUrl()Ljava/lang/String;

    move-result-object v2

    invoke-virtual/range {p6 .. p6}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v6

    invoke-direct {p0, p1, v2, v6}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Z)V

    goto :goto_1

    .line 1578
    :cond_d
    iget-object v2, v7, Lcom/mbridge/msdk/click/b;->q:Landroid/content/Context;

    invoke-virtual {p2}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->getUrl()Ljava/lang/String;

    move-result-object v6

    iget-object v8, v7, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-static {v2, v6, v8}, Lcom/mbridge/msdk/foundation/tools/ad;->a(Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/out/BaseTrackingListener;)V

    .line 1581
    :cond_e
    :goto_1
    iget-object v2, v7, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    if-eqz v2, :cond_12

    if-eqz v4, :cond_12

    .line 1582
    iget-object v2, v7, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-virtual {p2}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->getUrl()Ljava/lang/String;

    move-result-object v6

    invoke-interface {v2, p1, v6}, Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;->onFinishRedirection(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V

    goto :goto_2

    :cond_f
    if-eqz v4, :cond_12

    .line 1589
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "Jump to Web: "

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->getUrl()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v8, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1591
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getLinkType()I

    move-result v2

    if-ne v10, v2, :cond_10

    .line 1592
    invoke-direct {p0, p1, p2, p3, v5}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;ZZ)Z

    return-void

    .line 1594
    :cond_10
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getLinkType()I

    move-result v2

    if-ne v9, v2, :cond_11

    .line 1595
    invoke-direct {p0}, Lcom/mbridge/msdk/click/b;->c()I

    move-result v6

    move-object v1, p0

    move-object v2, p1

    move-object v3, p2

    move v4, p3

    move/from16 v5, p5

    invoke-direct/range {v1 .. v6}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;ZZI)Z

    return-void

    .line 1598
    :cond_11
    iget-object v2, v7, Lcom/mbridge/msdk/click/b;->q:Landroid/content/Context;

    invoke-virtual {p2}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->getUrl()Ljava/lang/String;

    move-result-object v6

    iget-object v8, v7, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-static {v2, v6, v8}, Lcom/mbridge/msdk/foundation/tools/ad;->a(Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/out/BaseTrackingListener;)V

    .line 1601
    iget-object v2, v7, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    if-eqz v2, :cond_12

    if-eqz v4, :cond_12

    .line 1602
    iget-object v2, v7, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-virtual {p2}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->getUrl()Ljava/lang/String;

    move-result-object v6

    invoke-interface {v2, p1, v6}, Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;->onFinishRedirection(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V

    .line 1607
    :cond_12
    :goto_2
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getLinkType()I

    move-result v2

    invoke-virtual {p2}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->getUrl()Ljava/lang/String;

    move-result-object v6

    invoke-direct {p0, v2, v6}, Lcom/mbridge/msdk/click/b;->a(ILjava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_13

    const/4 v1, 0x0

    .line 1610
    invoke-direct {p0, p2, p1, v1, v5}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZZ)V

    goto :goto_3

    .line 1614
    :cond_13
    invoke-direct {p0, p2, p1, v1, v5}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZZ)V

    .line 1617
    :goto_3
    iget-object v1, v7, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    if-eqz v1, :cond_16

    if-nez v4, :cond_16

    if-eqz p4, :cond_16

    .line 1618
    iget-object v1, v7, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-virtual {p2}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->getUrl()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v1, p1, v2}, Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;->onFinishRedirection(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V

    goto :goto_5

    :cond_14
    :goto_4
    if-eqz v4, :cond_15

    .line 1506
    invoke-direct {p0, p2, p1, v1, v5}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZZ)V

    .line 1507
    iget-object v0, v7, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    if-eqz v0, :cond_15

    if-eqz v4, :cond_15

    .line 1508
    iget-object v0, v7, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    const/4 v1, 0x0

    invoke-interface {v0, v1, v1}, Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;->onRedirectionFailed(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    :cond_15
    return-void

    :catch_0
    move-exception v0

    .line 1622
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_16
    :goto_5
    return-void
.end method

.method private a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;I)V
    .locals 8

    .line 554
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    const/4 v5, 0x1

    const/4 v6, 0x0

    const/4 v0, -0x1

    if-eq p3, v0, :cond_0

    .line 559
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, "&apk_ptype="

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    :cond_0
    const-string p3, "opdptype"

    .line 562
    invoke-virtual {p2, p3}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p3

    if-nez p3, :cond_1

    .line 563
    new-instance p3, Ljava/lang/StringBuilder;

    invoke-direct {p3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p3, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, "&opdptype=0"

    invoke-virtual {p3, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    :cond_1
    move-object v4, p2

    .line 566
    iget-object v1, p0, Lcom/mbridge/msdk/click/b;->q:Landroid/content/Context;

    iget-object v3, p0, Lcom/mbridge/msdk/click/b;->g:Ljava/lang/String;

    sget v7, Lcom/mbridge/msdk/click/a/a;->i:I

    move-object v2, p1

    invoke-static/range {v1 .. v7}, Lcom/mbridge/msdk/click/b;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;ZZI)V

    :cond_2
    return-void
.end method

.method private a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Z)V
    .locals 10

    .line 1695
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAkdlui()Ljava/lang/String;

    move-result-object v0

    .line 1696
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 1697
    invoke-static {p2}, Lcom/mbridge/msdk/foundation/tools/SameMD5;->getMD5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    :cond_0
    const/4 v1, -0x1

    .line 1700
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    const-string v3, ""

    invoke-static {v2, v0, v3}, Lcom/mbridge/msdk/foundation/tools/ag;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v2

    .line 1701
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    const/4 v4, 0x0

    const/4 v5, 0x1

    if-nez v3, :cond_2

    .line 1702
    new-instance v3, Ljava/io/File;

    invoke-direct {v3, v2}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 1703
    invoke-virtual {v3}, Ljava/io/File;->exists()Z

    move-result v2

    if-eqz v2, :cond_6

    if-eqz p3, :cond_1

    .line 1705
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNoticeUrl()Ljava/lang/String;

    move-result-object v2

    sget v4, Lcom/mbridge/msdk/foundation/same/a;->J:I

    invoke-direct {p0, p1, v2, v4}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;I)V

    .line 1706
    iget-object v2, p0, Lcom/mbridge/msdk/click/b;->q:Landroid/content/Context;

    invoke-static {v3}, Landroid/net/Uri;->fromFile(Ljava/io/File;)Landroid/net/Uri;

    move-result-object v3

    invoke-static {v2, v3, p2, v0}, Lcom/mbridge/msdk/click/c;->a(Landroid/content/Context;Landroid/net/Uri;Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    return-void

    .line 1711
    :cond_2
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, "process"

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    invoke-static {v2, v3, v6}, Lcom/mbridge/msdk/foundation/tools/ag;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/Integer;

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    .line 1712
    invoke-static {}, Landroid/os/Process;->myPid()I

    move-result v3

    if-eqz v2, :cond_6

    if-ne v2, v3, :cond_6

    .line 1714
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, "isDowning"

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const-wide/16 v6, 0x0

    invoke-static {v6, v7}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v8

    invoke-static {v2, v3, v8}, Lcom/mbridge/msdk/foundation/tools/ag;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/Long;

    invoke-virtual {v2}, Ljava/lang/Long;->longValue()J

    move-result-wide v2

    .line 1715
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v8

    sub-long/2addr v8, v2

    cmp-long v2, v2, v6

    if-eqz v2, :cond_6

    const-wide/32 v2, 0x927c0

    cmp-long v2, v8, v2

    if-gez v2, :cond_6

    if-eqz p3, :cond_5

    .line 1720
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "downloadType"

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-static {v2, v0, v3}, Lcom/mbridge/msdk/foundation/tools/ag;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string v2, "downloading"

    if-ne v0, v5, :cond_3

    .line 1722
    :try_start_1
    iget-object v0, p0, Lcom/mbridge/msdk/click/b;->q:Landroid/content/Context;

    invoke-static {p1, v0, v2}, Lcom/mbridge/msdk/click/b;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;)V

    .line 1723
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNoticeUrl()Ljava/lang/String;

    move-result-object v0

    sget v2, Lcom/mbridge/msdk/foundation/same/a;->F:I

    invoke-direct {p0, p1, v0, v2}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;I)V

    goto :goto_0

    :cond_3
    const/4 v3, 0x2

    if-ne v0, v3, :cond_4

    .line 1725
    iget-object v0, p0, Lcom/mbridge/msdk/click/b;->q:Landroid/content/Context;

    invoke-static {p1, v0, v2}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;)V

    .line 1726
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNoticeUrl()Ljava/lang/String;

    move-result-object v0

    sget v2, Lcom/mbridge/msdk/foundation/same/a;->F:I

    invoke-direct {p0, p1, v0, v2}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;I)V

    goto :goto_0

    .line 1728
    :cond_4
    iget-object v0, p0, Lcom/mbridge/msdk/click/b;->q:Landroid/content/Context;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClickURL()Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-static {v0, v2, v3}, Lcom/mbridge/msdk/foundation/tools/ad;->a(Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/out/BaseTrackingListener;)V

    .line 1729
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNoticeUrl()Ljava/lang/String;

    move-result-object v0

    sget v2, Lcom/mbridge/msdk/foundation/same/a;->I:I

    invoke-direct {p0, p1, v0, v2}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;I)V

    :cond_5
    :goto_0
    return-void

    .line 1736
    :cond_6
    sget v0, Lcom/mbridge/msdk/foundation/tools/aj;->a:I
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-ne v0, v1, :cond_7

    :try_start_2
    const-string v0, "com.mbridge.msdk.mbdownload.b"

    .line 1738
    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    const-string v0, "com.mbridge.msdk.mbdownload.f"

    .line 1739
    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    .line 1740
    sput v5, Lcom/mbridge/msdk/foundation/tools/aj;->a:I

    const-string v0, "ok"

    .line 1741
    sput-object v0, Lcom/mbridge/msdk/foundation/tools/aj;->b:Ljava/lang/String;
    :try_end_2
    .catch Ljava/lang/ClassNotFoundException; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_1

    :catch_0
    move-exception v0

    .line 1743
    :try_start_3
    sput v4, Lcom/mbridge/msdk/foundation/tools/aj;->a:I

    .line 1744
    invoke-virtual {v0}, Ljava/lang/ClassNotFoundException;->getMessage()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mbridge/msdk/foundation/tools/aj;->b:Ljava/lang/String;

    .line 1747
    :cond_7
    :goto_1
    sget v0, Lcom/mbridge/msdk/foundation/tools/aj;->a:I

    if-ne v0, v5, :cond_8

    if-eqz p3, :cond_8

    .line 1748
    invoke-direct {p0, p1, p2, p3}, Lcom/mbridge/msdk/click/b;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Z)V

    goto :goto_2

    .line 1750
    :cond_8
    invoke-direct {p0, p1, p2, p3}, Lcom/mbridge/msdk/click/b;->c(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Z)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    goto :goto_2

    :catchall_0
    move-exception v0

    .line 1753
    sput v1, Lcom/mbridge/msdk/foundation/tools/aj;->a:I

    .line 1754
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mbridge/msdk/foundation/tools/aj;->b:Ljava/lang/String;

    const-string v0, "downloadapk"

    const-string v1, "can\'t find download jar, use simple method"

    .line 1755
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1756
    invoke-direct {p0, p1, p2, p3}, Lcom/mbridge/msdk/click/b;->c(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Z)V

    :goto_2
    return-void
.end method

.method private a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZZZIZLjava/lang/Boolean;)V
    .locals 16

    move-object/from16 v8, p0

    move-object/from16 v0, p1

    move/from16 v1, p2

    move/from16 v9, p6

    .line 972
    :try_start_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    iput-wide v2, v8, Lcom/mbridge/msdk/click/b;->h:J
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string v10, "Start 302 Redirection... "

    const-string v11, "MBridge SDK M"

    const/4 v12, 0x1

    const/4 v13, 0x0

    if-eqz v1, :cond_2

    .line 975
    :try_start_1
    invoke-static {v11, v10}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    if-nez p4, :cond_0

    .line 977
    iget-object v2, v8, Lcom/mbridge/msdk/click/b;->s:Ljava/util/HashMap;

    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClickURL()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/util/HashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_0

    if-nez p3, :cond_0

    return-void

    .line 982
    :cond_0
    new-instance v2, Lcom/mbridge/msdk/click/CommonJumpLoader;

    iget-object v3, v8, Lcom/mbridge/msdk/click/b;->q:Landroid/content/Context;

    if-eqz p3, :cond_1

    move v12, v13

    :cond_1
    invoke-direct {v2, v3, v12}, Lcom/mbridge/msdk/click/CommonJumpLoader;-><init>(Landroid/content/Context;Z)V

    .line 983
    iget-object v3, v8, Lcom/mbridge/msdk/click/b;->s:Ljava/util/HashMap;

    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClickURL()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v3, "2"

    .line 984
    iget-object v4, v8, Lcom/mbridge/msdk/click/b;->g:Ljava/lang/String;

    new-instance v5, Lcom/mbridge/msdk/click/b$4;

    move/from16 v14, p5

    invoke-direct {v5, v8, v0, v1, v14}, Lcom/mbridge/msdk/click/b$4;-><init>(Lcom/mbridge/msdk/click/b;Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZI)V

    invoke-virtual {v2, v3, v4, v0, v5}, Lcom/mbridge/msdk/click/CommonJumpLoader;->a(Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/click/e;)V

    goto/16 :goto_2

    :cond_2
    move/from16 v14, p5

    .line 1066
    iget-object v1, v8, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    if-eqz v1, :cond_3

    if-nez v9, :cond_3

    .line 1067
    iget-object v1, v8, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClickURL()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v1, v0, v2}, Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;->onStartRedirection(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V

    .line 1068
    iget-object v1, v8, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-interface {v1}, Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;->onInterceptDefaultLoadingDialog()Z

    move-result v1

    xor-int/2addr v1, v12

    move v15, v1

    goto :goto_0

    :cond_3
    move v15, v12

    .line 1073
    :goto_0
    iget-object v1, v8, Lcom/mbridge/msdk/click/b;->s:Ljava/util/HashMap;

    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClickURL()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/HashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_4

    .line 1074
    iget-object v1, v8, Lcom/mbridge/msdk/click/b;->s:Ljava/util/HashMap;

    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClickURL()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mbridge/msdk/click/CommonJumpLoader;

    invoke-virtual {v1}, Lcom/mbridge/msdk/click/CommonJumpLoader;->a()V

    .line 1075
    iget-object v1, v8, Lcom/mbridge/msdk/click/b;->s:Ljava/util/HashMap;

    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClickURL()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/HashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    :cond_4
    const/4 v4, 0x1

    .line 1080
    iput-boolean v13, v8, Lcom/mbridge/msdk/click/b;->l:Z

    .line 1082
    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getJumpResult()Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    move-result-object v1

    if-eqz v1, :cond_6

    if-nez v9, :cond_5

    .line 1084
    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getJumpResult()Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    move-result-object v3

    iget-boolean v5, v8, Lcom/mbridge/msdk/click/b;->m:Z

    const/4 v6, 0x0

    move-object/from16 v1, p0

    move-object/from16 v2, p1

    move-object/from16 v7, p7

    invoke-direct/range {v1 .. v7}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;ZZZLjava/lang/Boolean;)V

    .line 1086
    :cond_5
    iput-boolean v12, v8, Lcom/mbridge/msdk/click/b;->l:Z

    .line 1088
    iput-boolean v13, v8, Lcom/mbridge/msdk/click/b;->m:Z

    move v4, v13

    .line 1090
    :cond_6
    iget-object v1, v8, Lcom/mbridge/msdk/click/b;->p:Lcom/mbridge/msdk/foundation/db/i;

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/db/c;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/c;

    move-result-object v1

    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v2

    iget-object v3, v8, Lcom/mbridge/msdk/click/b;->g:Ljava/lang/String;

    invoke-virtual {v1, v2, v3}, Lcom/mbridge/msdk/foundation/db/c;->a(Ljava/lang/String;Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_7

    .line 1091
    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getJumpResult()Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    move-result-object v1

    if-nez v1, :cond_10

    .line 1092
    :cond_7
    iget-object v1, v8, Lcom/mbridge/msdk/click/b;->p:Lcom/mbridge/msdk/foundation/db/i;

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/db/c;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/c;

    move-result-object v1

    .line 1094
    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/db/c;->a()V

    .line 1095
    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v2

    iget-object v3, v8, Lcom/mbridge/msdk/click/b;->g:Ljava/lang/String;

    invoke-virtual {v1, v2, v3}, Lcom/mbridge/msdk/foundation/db/c;->b(Ljava/lang/String;Ljava/lang/String;)Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    move-result-object v3

    if-eqz v3, :cond_9

    if-nez v9, :cond_9

    .line 1097
    invoke-virtual {v0, v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setJumpResult(Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;)V

    if-eqz v4, :cond_c

    if-nez v9, :cond_8

    .line 1100
    iget-boolean v5, v8, Lcom/mbridge/msdk/click/b;->m:Z

    const/4 v6, 0x0

    move-object/from16 v1, p0

    move-object/from16 v2, p1

    move-object/from16 v7, p7

    invoke-direct/range {v1 .. v7}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;ZZZLjava/lang/Boolean;)V

    .line 1102
    :cond_8
    iput-boolean v12, v8, Lcom/mbridge/msdk/click/b;->l:Z

    .line 1104
    iput-boolean v13, v8, Lcom/mbridge/msdk/click/b;->m:Z

    goto :goto_1

    .line 1108
    :cond_9
    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClick_mode()Ljava/lang/String;

    move-result-object v1

    const-string v2, "6"

    invoke-virtual {v1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_b

    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPackageName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/String;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_b

    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getLinkType()I

    move-result v1

    const/4 v2, 0x2

    if-ne v1, v2, :cond_b

    if-nez v9, :cond_b

    .line 1110
    iget-object v1, v8, Lcom/mbridge/msdk/click/b;->q:Landroid/content/Context;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "market://details?id="

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPackageName()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    iget-object v3, v8, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-static {v1, v2, v3}, Lcom/mbridge/msdk/foundation/tools/ad$a;->a(Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;)Z

    .line 1113
    iget-object v1, v8, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    if-eqz v1, :cond_a

    if-eqz v4, :cond_a

    .line 1114
    iget-object v1, v8, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-interface {v1, v0}, Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;->onDismissLoading(Lcom/mbridge/msdk/out/Campaign;)V

    .line 1115
    iget-object v1, v8, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    const/4 v2, 0x0

    invoke-interface {v1, v0, v2}, Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;->onFinishRedirection(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V

    .line 1118
    :cond_a
    iput-boolean v12, v8, Lcom/mbridge/msdk/click/b;->l:Z

    move v4, v13

    :cond_b
    if-eqz v9, :cond_c

    .line 1121
    iput-boolean v12, v8, Lcom/mbridge/msdk/click/b;->l:Z

    .line 1123
    iput-boolean v13, v8, Lcom/mbridge/msdk/click/b;->m:Z

    :goto_1
    move v4, v13

    .line 1128
    :cond_c
    invoke-static {v11, v10}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1130
    new-instance v1, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v2

    invoke-direct {v1, v2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    new-instance v2, Lcom/mbridge/msdk/click/b$5;

    invoke-direct {v2, v8, v15, v9, v0}, Lcom/mbridge/msdk/click/b$5;-><init>(Lcom/mbridge/msdk/click/b;ZZLcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    invoke-virtual {v1, v2}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    .line 1142
    iget-object v1, v8, Lcom/mbridge/msdk/click/b;->r:Lcom/mbridge/msdk/click/CommonJumpLoader;

    if-eqz v1, :cond_d

    .line 1143
    iget-object v1, v8, Lcom/mbridge/msdk/click/b;->r:Lcom/mbridge/msdk/click/CommonJumpLoader;

    invoke-virtual {v1}, Lcom/mbridge/msdk/click/CommonJumpLoader;->a()V

    .line 1145
    :cond_d
    sget-object v1, Lcom/mbridge/msdk/click/b;->b:Ljava/util/Set;

    if-eqz v1, :cond_f

    sget-object v1, Lcom/mbridge/msdk/click/b;->b:Ljava/util/Set;

    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v1, v2}, Ljava/util/Set;->contains(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_f

    .line 1146
    iget-object v1, v8, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    if-eqz v1, :cond_e

    .line 1147
    iget-object v1, v8, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-interface {v1, v0}, Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;->onDismissLoading(Lcom/mbridge/msdk/out/Campaign;)V

    .line 1148
    iget-object v1, v8, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClickURL()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v1, v0, v2}, Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;->onFinishRedirection(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V

    :cond_e
    const-string v0, "\u70b9\u51fb\u6b63\u5728tracking"

    .line 1150
    invoke-static {v11, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 1153
    :cond_f
    sget-object v1, Lcom/mbridge/msdk/click/b;->b:Ljava/util/Set;

    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v1, v2}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    .line 1154
    new-instance v9, Lcom/mbridge/msdk/click/CommonJumpLoader;

    iget-object v1, v8, Lcom/mbridge/msdk/click/b;->q:Landroid/content/Context;

    invoke-direct {v9, v1, v13}, Lcom/mbridge/msdk/click/CommonJumpLoader;-><init>(Landroid/content/Context;Z)V

    iput-object v9, v8, Lcom/mbridge/msdk/click/b;->r:Lcom/mbridge/msdk/click/CommonJumpLoader;

    const-string v10, "1"

    .line 1156
    iget-object v11, v8, Lcom/mbridge/msdk/click/b;->g:Ljava/lang/String;

    new-instance v12, Lcom/mbridge/msdk/click/b$6;

    move-object v1, v12

    move-object/from16 v2, p0

    move-object/from16 v3, p1

    move-object/from16 v5, p7

    move/from16 v6, p5

    move v7, v15

    invoke-direct/range {v1 .. v7}, Lcom/mbridge/msdk/click/b$6;-><init>(Lcom/mbridge/msdk/click/b;Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZLjava/lang/Boolean;IZ)V

    invoke-virtual {v9, v10, v11, v0, v12}, Lcom/mbridge/msdk/click/CommonJumpLoader;->a(Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/click/e;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_2

    :catch_0
    move-exception v0

    .line 1224
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_10
    :goto_2
    return-void
.end method

.method private a(ILjava/lang/String;)Z
    .locals 3

    const/4 v0, 0x2

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-ne p1, v0, :cond_0

    .line 1656
    :try_start_0
    invoke-static {p2}, Lcom/mbridge/msdk/foundation/tools/ad$a;->a(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_1

    goto :goto_0

    .line 1660
    :cond_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-nez p1, :cond_1

    goto :goto_0

    :cond_1
    move v1, v2

    :goto_0
    move v2, v1

    goto :goto_1

    :catch_0
    move-exception p1

    .line 1665
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_1
    return v2
.end method

.method static synthetic a(Lcom/mbridge/msdk/click/b;Z)Z
    .locals 0

    .line 70
    iput-boolean p1, p0, Lcom/mbridge/msdk/click/b;->j:Z

    return p1
.end method

.method private a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;ZZ)Z
    .locals 5

    const/4 v0, 0x1

    const/4 v1, 0x0

    if-eqz p3, :cond_0

    .line 1465
    :try_start_0
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNoticeUrl()Ljava/lang/String;

    move-result-object v2

    sget v3, Lcom/mbridge/msdk/foundation/same/a;->I:I

    invoke-direct {p0, p1, v2, v3}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;I)V

    .line 1466
    iget-object v2, p0, Lcom/mbridge/msdk/click/b;->q:Landroid/content/Context;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClickURL()Ljava/lang/String;

    move-result-object v3

    iget-object v4, p0, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-static {v2, v3, v4}, Lcom/mbridge/msdk/foundation/tools/ad;->a(Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/out/BaseTrackingListener;)V

    move v1, v0

    goto :goto_0

    :catchall_0
    move-exception p1

    goto :goto_1

    :cond_0
    :goto_0
    if-eqz v1, :cond_1

    .line 1470
    invoke-direct {p0, p2, p1, v0, p4}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZZ)V

    .line 1471
    iget-object p4, p0, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    if-eqz p4, :cond_2

    if-eqz p3, :cond_2

    .line 1472
    iget-object p3, p0, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-virtual {p2}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->getUrl()Ljava/lang/String;

    move-result-object p2

    invoke-interface {p3, p1, p2}, Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;->onFinishRedirection(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V

    goto :goto_2

    .line 1475
    :cond_1
    invoke-direct {p0, p2, p1, v0, p4}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZZ)V

    .line 1476
    iget-object p4, p0, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    if-eqz p4, :cond_2

    if-eqz p3, :cond_2

    .line 1477
    iget-object p3, p0, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-virtual {p2}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->getUrl()Ljava/lang/String;

    move-result-object p2

    invoke-interface {p3, p1, p2}, Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;->onRedirectionFailed(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_2

    .line 1482
    :goto_1
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    const-string p3, "MBridge SDK M"

    invoke-static {p3, p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_2
    :goto_2
    return v1
.end method

.method private a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;ZZI)Z
    .locals 5

    const/4 v0, 0x0

    const/4 v1, 0x1

    if-eqz p3, :cond_4

    .line 1408
    :try_start_0
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getLandingType()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    if-ne v2, v1, :cond_0

    .line 1410
    iget-object p5, p0, Lcom/mbridge/msdk/click/b;->q:Landroid/content/Context;

    invoke-virtual {p2}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->getUrl()Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-static {p5, v2, v3}, Lcom/mbridge/msdk/foundation/tools/ad;->a(Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/out/BaseTrackingListener;)V

    :goto_0
    move v0, v1

    goto :goto_1

    :cond_0
    const/4 v3, 0x2

    if-ne v2, v3, :cond_1

    .line 1413
    iget-object p5, p0, Lcom/mbridge/msdk/click/b;->q:Landroid/content/Context;

    invoke-virtual {p2}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->getUrl()Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-static {p5, v2, p1, v3}, Lcom/mbridge/msdk/foundation/tools/ad;->a(Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;)V

    goto :goto_0

    .line 1417
    :cond_1
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPackageName()Ljava/lang/String;

    move-result-object v2

    if-eqz v2, :cond_3

    .line 1419
    iget-object v2, p0, Lcom/mbridge/msdk/click/b;->q:Landroid/content/Context;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "market://details?id="

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPackageName()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    iget-object v4, p0, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-static {v2, v3, v4}, Lcom/mbridge/msdk/foundation/tools/ad$a;->a(Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;)Z

    move-result v2

    if-eqz v2, :cond_2

    goto :goto_0

    .line 1423
    :cond_2
    invoke-virtual {p2}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->getUrl()Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-direct {p0, p5, v2, p1, v3}, Lcom/mbridge/msdk/click/b;->a(ILjava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;)V

    goto :goto_1

    .line 1427
    :cond_3
    invoke-virtual {p2}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->getUrl()Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-direct {p0, p5, v2, p1, v3}, Lcom/mbridge/msdk/click/b;->a(ILjava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;)V

    goto :goto_1

    :catchall_0
    move-exception p1

    goto :goto_2

    :cond_4
    :goto_1
    if-eqz v0, :cond_5

    .line 1434
    invoke-direct {p0, p2, p1, v1, p4}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZZ)V

    .line 1435
    iget-object p4, p0, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    if-eqz p4, :cond_6

    if-eqz p3, :cond_6

    .line 1436
    iget-object p3, p0, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-virtual {p2}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->getUrl()Ljava/lang/String;

    move-result-object p2

    invoke-interface {p3, p1, p2}, Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;->onFinishRedirection(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V

    goto :goto_3

    .line 1439
    :cond_5
    invoke-direct {p0, p2, p1, v1, p4}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZZ)V

    .line 1440
    iget-object p4, p0, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    if-eqz p4, :cond_6

    if-eqz p3, :cond_6

    .line 1441
    iget-object p3, p0, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-virtual {p2}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->getUrl()Ljava/lang/String;

    move-result-object p2

    invoke-interface {p3, p1, p2}, Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;->onRedirectionFailed(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_3

    .line 1446
    :goto_2
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    const-string p3, "MBridge SDK M"

    invoke-static {p3, p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_6
    :goto_3
    return v0
.end method

.method static synthetic b(Lcom/mbridge/msdk/click/b;)Lcom/mbridge/msdk/foundation/db/i;
    .locals 0

    .line 70
    iget-object p0, p0, Lcom/mbridge/msdk/click/b;->p:Lcom/mbridge/msdk/foundation/db/i;

    return-object p0
.end method

.method static synthetic b()V
    .locals 0

    .line 70
    invoke-static {}, Lcom/mbridge/msdk/click/b;->d()V

    return-void
.end method

.method public static b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;)V
    .locals 2

    :try_start_0
    const-string v0, "start"

    .line 1831
    invoke-virtual {p2, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, "downloading"

    invoke-virtual {p2, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 1832
    :cond_0
    invoke-static {}, Landroid/os/Looper;->myLooper()Landroid/os/Looper;

    move-result-object v0

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    if-ne v0, v1, :cond_1

    .line 1833
    invoke-static {p1}, Lcom/mbridge/msdk/click/b;->a(Landroid/content/Context;)V

    goto :goto_0

    .line 1835
    :cond_1
    sget-object v0, Lcom/mbridge/msdk/click/b;->f:Landroid/os/Handler;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v0

    .line 1836
    iput-object p1, v0, Landroid/os/Message;->obj:Ljava/lang/Object;

    .line 1837
    sget-object v1, Lcom/mbridge/msdk/click/b;->f:Landroid/os/Handler;

    invoke-virtual {v1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .line 1840
    :cond_2
    :goto_0
    invoke-static {p0, p1, p2}, Lcom/mbridge/msdk/click/b;->c(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p0

    .line 1842
    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    const-string p2, "MBridge SDK M"

    invoke-static {p2, p1, p0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_1
    return-void
.end method

.method private b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Z)V
    .locals 17

    move-object/from16 v7, p1

    move-object/from16 v8, p2

    const-string v9, "process"

    const-string v10, "isDowning"

    if-eqz v7, :cond_0

    .line 1884
    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAkdlui()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 1885
    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAkdlui()Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    .line 1887
    :cond_0
    invoke-static/range {p2 .. p2}, Lcom/mbridge/msdk/foundation/tools/SameMD5;->getMD5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    :goto_0
    move-object v11, v0

    const/4 v0, 0x1

    const/4 v12, 0x0

    .line 1890
    :try_start_0
    invoke-static {v8, v0, v7}, Lcom/mbridge/msdk/foundation/tools/ad;->a(Ljava/lang/String;ILcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 1891
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    .line 1892
    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/aj;->a(Landroid/content/Context;)Z

    move-result v2

    .line 1893
    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/aj;->c(Landroid/content/Context;)Z

    move-result v3

    .line 1894
    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/aj;->b(Landroid/content/Context;)Z

    move-result v4

    if-nez v4, :cond_1

    .line 1896
    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNoticeUrl()Ljava/lang/String;

    move-result-object v0

    sget v2, Lcom/mbridge/msdk/foundation/same/a;->I:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    move-object/from16 v13, p0

    :try_start_1
    invoke-direct {v13, v7, v0, v2}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;I)V

    .line 1897
    invoke-static {v1, v8, v11}, Lcom/mbridge/msdk/click/c;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_1
    move-object/from16 v13, p0

    if-nez v3, :cond_2

    .line 1901
    invoke-direct/range {p0 .. p3}, Lcom/mbridge/msdk/click/b;->c(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Z)V

    return-void

    :catchall_0
    move-exception v0

    goto/16 :goto_1

    :cond_2
    if-nez v2, :cond_3

    .line 1905
    invoke-direct/range {p0 .. p3}, Lcom/mbridge/msdk/click/b;->c(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Z)V

    return-void

    .line 1908
    :cond_3
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    invoke-static {v3, v4}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v3

    invoke-static {v1, v2, v3}, Lcom/mbridge/msdk/foundation/tools/ag;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V

    .line 1909
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {}, Landroid/os/Process;->myPid()I

    move-result v3

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-static {v1, v2, v3}, Lcom/mbridge/msdk/foundation/tools/ag;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V

    const-string v1, "com.mbridge.msdk.mbdownload.manager.ADownloadManager"

    .line 1911
    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    const-string v2, "getInstance"

    new-array v3, v12, [Ljava/lang/Class;

    .line 1912
    invoke-virtual {v1, v2, v3}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v2

    const/4 v3, 0x0

    new-array v4, v12, [Ljava/lang/Object;

    .line 1913
    invoke-virtual {v2, v3, v4}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v14

    const-string v2, "initAPKDownloadTask"

    const/4 v3, 0x3

    new-array v4, v3, [Ljava/lang/Class;

    .line 1915
    const-class v5, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    aput-object v5, v4, v12

    const-class v5, Ljava/lang/String;

    aput-object v5, v4, v0

    const-class v5, Lcom/mbridge/msdk/out/IDownloadListener;

    const/4 v15, 0x2

    aput-object v5, v4, v15

    invoke-virtual {v1, v2, v4}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v6

    new-array v5, v3, [Ljava/lang/Object;

    aput-object v7, v5, v12

    aput-object v8, v5, v0

    .line 1916
    new-instance v0, Lcom/mbridge/msdk/click/b$10;

    move-object v1, v0

    move-object/from16 v2, p0

    move-object/from16 v3, p1

    move/from16 v4, p3

    move-object v12, v5

    move-object v5, v11

    move-object/from16 v16, v6

    move-object/from16 v6, p2

    invoke-direct/range {v1 .. v6}, Lcom/mbridge/msdk/click/b$10;-><init>(Lcom/mbridge/msdk/click/b;Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZLjava/lang/String;Ljava/lang/String;)V

    aput-object v0, v12, v15

    move-object/from16 v0, v16

    invoke-virtual {v0, v14, v12}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_2

    :catchall_1
    move-exception v0

    move-object/from16 v13, p0

    .line 1961
    :goto_1
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-wide/16 v3, 0x0

    invoke-static {v3, v4}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v3

    invoke-static {v1, v2, v3}, Lcom/mbridge/msdk/foundation/tools/ag;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V

    .line 1962
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const/4 v3, 0x0

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-static {v1, v2, v3}, Lcom/mbridge/msdk/foundation/tools/ag;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V

    .line 1963
    sget-boolean v1, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v1, :cond_4

    .line 1964
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 1966
    :cond_4
    invoke-direct/range {p0 .. p3}, Lcom/mbridge/msdk/click/b;->c(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Z)V

    :goto_2
    return-void
.end method

.method private c()I
    .locals 2

    const/4 v0, 0x1

    .line 1634
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/click/b;->o:Lcom/mbridge/msdk/c/a;

    if-eqz v1, :cond_0

    .line 1635
    iget-object v1, p0, Lcom/mbridge/msdk/click/b;->o:Lcom/mbridge/msdk/c/a;

    invoke-virtual {v1}, Lcom/mbridge/msdk/c/a;->U()I

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 1638
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    :goto_0
    return v0
.end method

.method static synthetic c(Lcom/mbridge/msdk/click/b;)Ljava/lang/String;
    .locals 0

    .line 70
    iget-object p0, p0, Lcom/mbridge/msdk/click/b;->g:Ljava/lang/String;

    return-object p0
.end method

.method private static c(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;)V
    .locals 8

    if-eqz p0, :cond_5

    .line 1800
    :try_start_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNativeVideoTracking()Lcom/mbridge/msdk/foundation/entity/l;

    move-result-object v0

    if-nez v0, :cond_0

    goto/16 :goto_4

    :cond_0
    const-string v0, "start"

    .line 1803
    invoke-virtual {p2, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    const/4 v1, 0x0

    if-nez v0, :cond_4

    const-string v0, "shortcuts_start"

    invoke-virtual {p2, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    goto/16 :goto_2

    :cond_1
    const-string v0, "end"

    .line 1809
    invoke-virtual {p2, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 1810
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNativeVideoTracking()Lcom/mbridge/msdk/foundation/entity/l;

    move-result-object p2

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/l;->b()[Ljava/lang/String;

    move-result-object p2

    if-eqz p2, :cond_5

    .line 1811
    :goto_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNativeVideoTracking()Lcom/mbridge/msdk/foundation/entity/l;

    move-result-object p2

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/l;->b()[Ljava/lang/String;

    move-result-object p2

    array-length p2, p2

    if-ge v1, p2, :cond_5

    .line 1812
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCampaignUnitId()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNativeVideoTracking()Lcom/mbridge/msdk/foundation/entity/l;

    move-result-object p2

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/l;->b()[Ljava/lang/String;

    move-result-object p2

    aget-object v5, p2, v1

    const/4 v6, 0x0

    const/4 v7, 0x0

    move-object v2, p1

    move-object v3, p0

    invoke-static/range {v2 .. v7}, Lcom/mbridge/msdk/click/b;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;ZZ)V

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_2
    const-string v0, "install"

    .line 1815
    invoke-virtual {p2, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_5

    .line 1816
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNativeVideoTracking()Lcom/mbridge/msdk/foundation/entity/l;

    move-result-object p2

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/l;->c()[Ljava/lang/String;

    move-result-object p2

    if-eqz p2, :cond_3

    .line 1817
    :goto_1
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNativeVideoTracking()Lcom/mbridge/msdk/foundation/entity/l;

    move-result-object p2

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/l;->c()[Ljava/lang/String;

    move-result-object p2

    array-length p2, p2

    if-ge v1, p2, :cond_3

    .line 1818
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCampaignUnitId()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNativeVideoTracking()Lcom/mbridge/msdk/foundation/entity/l;

    move-result-object p2

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/l;->c()[Ljava/lang/String;

    move-result-object p2

    aget-object v5, p2, v1

    const/4 v6, 0x0

    const/4 v7, 0x0

    move-object v2, p1

    move-object v3, p0

    invoke-static/range {v2 .. v7}, Lcom/mbridge/msdk/click/b;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;ZZ)V

    add-int/lit8 v1, v1, 0x1

    goto :goto_1

    .line 1821
    :cond_3
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object p1

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/db/g;->b(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/g;

    move-result-object p1

    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPackageName()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p1, p0}, Lcom/mbridge/msdk/foundation/db/g;->i(Ljava/lang/String;)V

    goto :goto_4

    .line 1804
    :cond_4
    :goto_2
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNativeVideoTracking()Lcom/mbridge/msdk/foundation/entity/l;

    move-result-object p2

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/l;->a()[Ljava/lang/String;

    move-result-object p2

    if-eqz p2, :cond_5

    .line 1805
    :goto_3
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNativeVideoTracking()Lcom/mbridge/msdk/foundation/entity/l;

    move-result-object p2

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/l;->a()[Ljava/lang/String;

    move-result-object p2

    array-length p2, p2

    if-ge v1, p2, :cond_5

    .line 1806
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCampaignUnitId()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNativeVideoTracking()Lcom/mbridge/msdk/foundation/entity/l;

    move-result-object p2

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/l;->a()[Ljava/lang/String;

    move-result-object p2

    aget-object v5, p2, v1

    const/4 v6, 0x0

    const/4 v7, 0x0

    move-object v2, p1

    move-object v3, p0

    invoke-static/range {v2 .. v7}, Lcom/mbridge/msdk/click/b;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;ZZ)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    add-int/lit8 v1, v1, 0x1

    goto :goto_3

    :catchall_0
    move-exception p0

    .line 1824
    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    const-string p2, "MBridge SDK M"

    invoke-static {p2, p1, p0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_5
    :goto_4
    return-void
.end method

.method private c(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Z)V
    .locals 5

    if-eqz p1, :cond_0

    .line 1973
    :try_start_0
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAkdlui()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 1974
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAkdlui()Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    :cond_0
    move-object v0, p2

    .line 1976
    :goto_0
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 1977
    invoke-static {p2}, Lcom/mbridge/msdk/foundation/tools/SameMD5;->getMD5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    :cond_1
    const/4 v1, 0x2

    .line 1979
    invoke-static {p2, v1, p1}, Lcom/mbridge/msdk/foundation/tools/ad;->a(Ljava/lang/String;ILcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 1980
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    .line 1981
    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/aj;->b(Landroid/content/Context;)Z

    move-result v2

    if-nez v2, :cond_2

    .line 1983
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNoticeUrl()Ljava/lang/String;

    move-result-object p3

    sget v2, Lcom/mbridge/msdk/foundation/same/a;->I:I

    invoke-direct {p0, p1, p3, v2}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;I)V

    .line 1984
    invoke-static {v1, p2, v0}, Lcom/mbridge/msdk/click/c;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 1987
    :cond_2
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "isDowning"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    invoke-static {v3, v4}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v3

    invoke-static {v1, v2, v3}, Lcom/mbridge/msdk/foundation/tools/ag;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V

    .line 1988
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "process"

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {}, Landroid/os/Process;->myPid()I

    move-result v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-static {v1, v0, v2}, Lcom/mbridge/msdk/foundation/tools/ag;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V

    .line 1989
    new-instance v0, Ljava/lang/Thread;

    new-instance v1, Lcom/mbridge/msdk/click/b$2;

    invoke-direct {v1, p0, p1, p2, p3}, Lcom/mbridge/msdk/click/b$2;-><init>(Lcom/mbridge/msdk/click/b;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Z)V

    invoke-direct {v0, v1}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    .line 1993
    invoke-virtual {v0}, Ljava/lang/Thread;->start()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p1

    .line 1995
    sget-boolean p2, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz p2, :cond_3

    .line 1996
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_3
    :goto_1
    return-void
.end method

.method static synthetic d(Lcom/mbridge/msdk/click/b;)Ljava/util/HashMap;
    .locals 0

    .line 70
    iget-object p0, p0, Lcom/mbridge/msdk/click/b;->s:Ljava/util/HashMap;

    return-object p0
.end method

.method private static d()V
    .locals 3

    .line 1864
    :try_start_0
    invoke-static {}, Ljava/util/Locale;->getDefault()Ljava/util/Locale;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/Locale;->getLanguage()Ljava/lang/String;

    move-result-object v0

    .line 1865
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    const/4 v2, 0x0

    if-nez v1, :cond_0

    const-string v1, "zh"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1866
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    const-string v1, "\u6b63\u5728\u4e0b\u8f7d\u4e2d,\u8bf7\u7a0d\u5019..."

    invoke-static {v0, v1, v2}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    goto :goto_0

    .line 1868
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    const-string v1, "Downloading...."

    invoke-static {v0, v1, v2}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/Toast;->show()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :goto_0
    return-void
.end method

.method private d(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z
    .locals 7

    if-eqz p1, :cond_0

    const/4 v0, 0x2

    .line 447
    :try_start_0
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getLinkType()I

    move-result v1

    if-eq v0, v1, :cond_1

    :cond_0
    const/4 v0, 0x3

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getLinkType()I

    move-result v1

    if-ne v0, v1, :cond_4

    .line 448
    :cond_1
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v0

    .line 449
    sget-object v1, Lcom/mbridge/msdk/click/b;->d:Ljava/util/Map;

    if-eqz v1, :cond_4

    .line 450
    sget-object v1, Lcom/mbridge/msdk/click/b;->d:Ljava/util/Map;

    invoke-interface {v1, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string v2, "MBridge SDK M"

    if-eqz v1, :cond_3

    .line 451
    :try_start_1
    sget-object v1, Lcom/mbridge/msdk/click/b;->d:Ljava/util/Map;

    invoke-interface {v1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Long;

    if-eqz v0, :cond_3

    .line 453
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    .line 455
    invoke-virtual {v0}, Ljava/lang/Long;->longValue()J

    move-result-wide v5

    cmp-long v1, v5, v3

    if-gtz v1, :cond_2

    sget-object v1, Lcom/mbridge/msdk/click/b;->b:Ljava/util/Set;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v5

    invoke-interface {v1, v5}, Ljava/util/Set;->contains(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_3

    .line 456
    :cond_2
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u70b9\u51fb\u65f6\u95f4\u672a\u8d85\u8fc7coit "

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v3, v4}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v1, "|"

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    const/4 p1, 0x0

    return p1

    .line 461
    :cond_3
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u672a\u53d1\u73b0\u6709\u70b9\u51fb\u6216\u70b9\u51fb\u8d85\u65f6\u4fdd\u5b58\u70b9\u51fb\u65f6\u95f4 interval = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClickTimeOutInterval()I

    move-result p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 465
    sget-boolean v0, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v0, :cond_4

    .line 466
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_4
    :goto_0
    const/4 p1, 0x1

    return p1
.end method

.method static synthetic e(Lcom/mbridge/msdk/click/b;)Z
    .locals 0

    .line 70
    iget-boolean p0, p0, Lcom/mbridge/msdk/click/b;->l:Z

    return p0
.end method

.method private e(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z
    .locals 7

    if-eqz p1, :cond_0

    const/4 v0, 0x2

    .line 497
    :try_start_0
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getLinkType()I

    move-result v1

    if-eq v0, v1, :cond_1

    :cond_0
    const/4 v0, 0x3

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getLinkType()I

    move-result v1

    if-ne v0, v1, :cond_4

    .line 498
    :cond_1
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v0

    .line 499
    sget-object v1, Lcom/mbridge/msdk/click/b;->d:Ljava/util/Map;

    if-eqz v1, :cond_4

    .line 500
    sget-object v1, Lcom/mbridge/msdk/click/b;->d:Ljava/util/Map;

    invoke-interface {v1, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string v2, "MBridge SDK M"

    if-eqz v1, :cond_3

    .line 501
    :try_start_1
    sget-object v1, Lcom/mbridge/msdk/click/b;->d:Ljava/util/Map;

    invoke-interface {v1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Long;

    if-eqz v0, :cond_3

    .line 503
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    .line 505
    invoke-virtual {v0}, Ljava/lang/Long;->longValue()J

    move-result-wide v5

    cmp-long v1, v5, v3

    if-gtz v1, :cond_2

    sget-object v1, Lcom/mbridge/msdk/click/b;->b:Ljava/util/Set;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v5

    invoke-interface {v1, v5}, Ljava/util/Set;->contains(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_3

    .line 506
    :cond_2
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u70b9\u51fb\u65f6\u95f4\u672a\u8d85\u8fc7coit "

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v3, v4}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v1, "|"

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    const/4 p1, 0x0

    return p1

    .line 511
    :cond_3
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u672a\u53d1\u73b0\u6709\u70b9\u51fb\u6216\u70b9\u51fb\u8d85\u65f6\u4fdd\u5b58\u70b9\u51fb\u65f6\u95f4 interval = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClickTimeOutInterval()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 513
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClickTimeOutInterval()I

    move-result v0

    mul-int/lit16 v0, v0, 0x3e8

    .line 514
    sget-object v1, Lcom/mbridge/msdk/click/b;->d:Ljava/util/Map;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object p1

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    int-to-long v4, v0

    add-long/2addr v2, v4

    invoke-static {v2, v3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v0

    invoke-interface {v1, p1, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 518
    sget-boolean v0, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v0, :cond_4

    .line 519
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_4
    :goto_0
    const/4 p1, 0x1

    return p1
.end method

.method private f(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    .locals 3

    .line 929
    invoke-direct {p0}, Lcom/mbridge/msdk/click/b;->c()I

    move-result v0

    const/4 v1, 0x2

    if-ne v0, v1, :cond_0

    .line 931
    iget-object v0, p0, Lcom/mbridge/msdk/click/b;->q:Landroid/content/Context;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClickURL()Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-static {v0, v1, p1, v2}, Lcom/mbridge/msdk/foundation/tools/ad;->a(Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;)V

    goto :goto_0

    .line 933
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/click/b;->q:Landroid/content/Context;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClickURL()Ljava/lang/String;

    move-result-object p1

    iget-object v1, p0, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-static {v0, p1, v1}, Lcom/mbridge/msdk/foundation/tools/ad;->a(Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/out/BaseTrackingListener;)V

    :goto_0
    return-void
.end method

.method static synthetic f(Lcom/mbridge/msdk/click/b;)Z
    .locals 0

    .line 70
    iget-boolean p0, p0, Lcom/mbridge/msdk/click/b;->m:Z

    return p0
.end method

.method static synthetic g(Lcom/mbridge/msdk/click/b;)V
    .locals 2

    .line 5080
    :try_start_0
    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0}, Landroid/content/Intent;-><init>()V

    const-string v1, "ExitApp"

    .line 5081
    invoke-virtual {v0, v1}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;

    .line 5082
    iget-object p0, p0, Lcom/mbridge/msdk/click/b;->q:Landroid/content/Context;

    invoke-virtual {p0, v0}, Landroid/content/Context;->sendBroadcast(Landroid/content/Intent;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    const-string v0, "MBridge SDK M"

    const-string v1, "Exception"

    .line 5084
    invoke-static {v0, v1, p0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_0
    return-void
.end method

.method static synthetic h(Lcom/mbridge/msdk/click/b;)Landroid/content/Context;
    .locals 0

    .line 70
    iget-object p0, p0, Lcom/mbridge/msdk/click/b;->q:Landroid/content/Context;

    return-object p0
.end method

.method static synthetic i(Lcom/mbridge/msdk/click/b;)Landroid/os/Handler;
    .locals 0

    .line 70
    iget-object p0, p0, Lcom/mbridge/msdk/click/b;->w:Landroid/os/Handler;

    return-object p0
.end method


# virtual methods
.method public final a()V
    .locals 2

    .line 190
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/click/b;->s:Ljava/util/HashMap;

    if-eqz v0, :cond_1

    .line 191
    iget-object v0, p0, Lcom/mbridge/msdk/click/b;->s:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->entrySet()Ljava/util/Set;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 192
    invoke-interface {v0}, Ljava/util/Set;->size()I

    move-result v1

    if-lez v1, :cond_1

    .line 193
    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    if-eqz v1, :cond_0

    .line 195
    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mbridge/msdk/click/CommonJumpLoader;

    if-eqz v1, :cond_0

    .line 197
    invoke-virtual {v1}, Lcom/mbridge/msdk/click/CommonJumpLoader;->a()V

    goto :goto_0

    :cond_1
    const/4 v0, 0x0

    .line 204
    iput-object v0, p0, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-void
.end method

.method public final a(Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;Lcom/mbridge/msdk/foundation/entity/CampaignEx;IZ)V
    .locals 7

    const-string v0, ""

    if-eqz p2, :cond_8

    if-nez p1, :cond_0

    goto/16 :goto_0

    .line 1251
    :cond_0
    :try_start_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    iget-wide v3, p0, Lcom/mbridge/msdk/click/b;->h:J

    sub-long/2addr v1, v3

    iput-wide v1, p0, Lcom/mbridge/msdk/click/b;->i:J

    .line 1252
    new-instance v1, Lcom/mbridge/msdk/foundation/entity/e;

    invoke-direct {v1}, Lcom/mbridge/msdk/foundation/entity/e;-><init>()V

    .line 1253
    iget-object v2, p0, Lcom/mbridge/msdk/click/b;->q:Landroid/content/Context;

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/tools/v;->D(Landroid/content/Context;)I

    move-result v2

    .line 1254
    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/foundation/entity/e;->a(I)V

    .line 1255
    iget-object v3, p0, Lcom/mbridge/msdk/click/b;->q:Landroid/content/Context;

    invoke-static {v3, v2}, Lcom/mbridge/msdk/foundation/tools/v;->a(Landroid/content/Context;I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/foundation/entity/e;->a(Ljava/lang/String;)V

    .line 1256
    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/foundation/entity/e;->j(Ljava/lang/String;)V

    .line 1257
    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/foundation/entity/e;->k(Ljava/lang/String;)V

    .line 1258
    invoke-virtual {v1, p3}, Lcom/mbridge/msdk/foundation/entity/e;->d(I)V

    .line 1259
    new-instance p3, Ljava/lang/StringBuilder;

    invoke-direct {p3}, Ljava/lang/StringBuilder;-><init>()V

    iget-wide v2, p0, Lcom/mbridge/msdk/click/b;->i:J

    invoke-virtual {p3, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {p3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p3

    invoke-virtual {v1, p3}, Lcom/mbridge/msdk/foundation/entity/e;->i(Ljava/lang/String;)V

    .line 1260
    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object p3

    invoke-virtual {v1, p3}, Lcom/mbridge/msdk/foundation/entity/e;->h(Ljava/lang/String;)V

    .line 1261
    invoke-virtual {p1}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->getType()I

    move-result p3

    invoke-virtual {v1, p3}, Lcom/mbridge/msdk/foundation/entity/e;->f(I)V

    .line 1262
    invoke-virtual {p1}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->getUrl()Ljava/lang/String;

    move-result-object p3

    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p3
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string v2, "utf-8"

    if-nez p3, :cond_1

    .line 1263
    :try_start_1
    invoke-virtual {p1}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->getUrl()Ljava/lang/String;

    move-result-object p3

    invoke-static {p3, v2}, Ljava/net/URLEncoder;->encode(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p3

    invoke-virtual {v1, p3}, Lcom/mbridge/msdk/foundation/entity/e;->g(Ljava/lang/String;)V

    .line 1266
    :cond_1
    new-instance p3, Ljava/lang/StringBuilder;

    invoke-direct {p3}, Ljava/lang/StringBuilder;-><init>()V

    iget-wide v3, p0, Lcom/mbridge/msdk/click/b;->h:J

    const-wide/16 v5, 0x3e8

    div-long/2addr v3, v5

    invoke-virtual {p3, v3, v4}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {p3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p3

    invoke-virtual {v1, p3}, Lcom/mbridge/msdk/foundation/entity/e;->c(Ljava/lang/String;)V

    .line 1267
    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getLandingType()Ljava/lang/String;

    move-result-object p3

    invoke-static {p3}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p3

    invoke-virtual {v1, p3}, Lcom/mbridge/msdk/foundation/entity/e;->b(I)V

    .line 1268
    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getLinkType()I

    move-result p2

    invoke-virtual {v1, p2}, Lcom/mbridge/msdk/foundation/entity/e;->c(I)V

    .line 1269
    iget-object p2, p0, Lcom/mbridge/msdk/click/b;->g:Ljava/lang/String;

    invoke-virtual {v1, p2}, Lcom/mbridge/msdk/foundation/entity/e;->b(Ljava/lang/String;)V

    if-eqz p1, :cond_8

    .line 1271
    invoke-virtual {p1}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->getType()I

    move-result p2

    invoke-virtual {v1, p2}, Lcom/mbridge/msdk/foundation/entity/e;->f(I)V

    .line 1272
    invoke-virtual {p1}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->getUrl()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_2

    .line 1273
    invoke-virtual {p1}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->getUrl()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2, v2}, Ljava/net/URLEncoder;->encode(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v1, p2}, Lcom/mbridge/msdk/foundation/entity/e;->g(Ljava/lang/String;)V

    .line 1275
    :cond_2
    iget-boolean p2, p0, Lcom/mbridge/msdk/click/b;->k:Z

    if-eqz p2, :cond_5

    .line 1276
    invoke-virtual {p1}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->getStatusCode()I

    move-result p2

    invoke-virtual {v1, p2}, Lcom/mbridge/msdk/foundation/entity/e;->e(I)V

    .line 1277
    invoke-virtual {p1}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->getHeader()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_3

    .line 1278
    invoke-virtual {p1}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->getHeader()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2, v2}, Ljava/net/URLEncoder;->encode(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v1, p2}, Lcom/mbridge/msdk/foundation/entity/e;->e(Ljava/lang/String;)V

    .line 1280
    :cond_3
    invoke-virtual {p1}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->getContent()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_4

    .line 1281
    invoke-virtual {p1}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->getContent()Ljava/lang/String;

    move-result-object p2

    const-string p3, "UTF-8"

    invoke-static {p2, p3}, Ljava/net/URLEncoder;->encode(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v1, p2}, Lcom/mbridge/msdk/foundation/entity/e;->f(Ljava/lang/String;)V

    .line 1283
    :cond_4
    invoke-virtual {p1}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->getExceptionMsg()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_5

    .line 1284
    invoke-virtual {p1}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->getExceptionMsg()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1, v2}, Ljava/net/URLEncoder;->encode(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Lcom/mbridge/msdk/foundation/entity/e;->d(Ljava/lang/String;)V

    :cond_5
    if-eqz p4, :cond_6

    .line 1289
    iget-object p1, p0, Lcom/mbridge/msdk/click/b;->u:Lcom/mbridge/msdk/foundation/same/report/d;

    const-string p2, "click_jump_error"

    iget-object p3, p0, Lcom/mbridge/msdk/click/b;->g:Ljava/lang/String;

    invoke-virtual {p1, p2, v1, p3}, Lcom/mbridge/msdk/foundation/same/report/d;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/e;Ljava/lang/String;)V

    goto :goto_0

    .line 1293
    :cond_6
    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    .line 1294
    invoke-virtual {p1, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 1295
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/entity/e;->a(Ljava/util/List;)Ljava/lang/String;

    move-result-object p1

    .line 1297
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/ai;->b(Ljava/lang/String;)Z

    move-result p2

    if-eqz p2, :cond_8

    .line 1298
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/b;->a()Lcom/mbridge/msdk/foundation/same/report/b;

    move-result-object p2

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/same/report/b;->c()Z

    move-result p2

    if-eqz p2, :cond_7

    .line 1299
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/b;->a()Lcom/mbridge/msdk/foundation/same/report/b;

    move-result-object p2

    invoke-virtual {p2, p1}, Lcom/mbridge/msdk/foundation/same/report/b;->a(Ljava/lang/String;)V

    goto :goto_0

    .line 1301
    :cond_7
    new-instance p2, Lcom/mbridge/msdk/foundation/same/report/d;

    iget-object p3, p0, Lcom/mbridge/msdk/click/b;->q:Landroid/content/Context;

    const/4 p4, 0x0

    invoke-direct {p2, p3, p4}, Lcom/mbridge/msdk/foundation/same/report/d;-><init>(Landroid/content/Context;I)V

    const-string p3, "click_jump_success"

    const/4 p4, 0x0

    invoke-virtual {p2, p3, p1, p4, p4}, Lcom/mbridge/msdk/foundation/same/report/d;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/out/Frame;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 1307
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_8
    :goto_0
    return-void
.end method

.method public final a(Lcom/mbridge/msdk/click/h;)V
    .locals 0

    .line 165
    iput-object p1, p0, Lcom/mbridge/msdk/click/b;->v:Lcom/mbridge/msdk/click/h;

    return-void
.end method

.method public final a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    .locals 9

    const-string v0, "MBridge SDK M"

    .line 527
    :try_start_0
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/click/b;->e(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z

    move-result v1

    if-nez v1, :cond_0

    return-void

    .line 530
    :cond_0
    iget-object v1, p0, Lcom/mbridge/msdk/click/b;->p:Lcom/mbridge/msdk/foundation/db/i;

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/db/c;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/c;

    move-result-object v2

    .line 531
    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/db/c;->a()V

    .line 532
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v1

    iget-object v3, p0, Lcom/mbridge/msdk/click/b;->g:Ljava/lang/String;

    invoke-virtual {v2, v1, v3}, Lcom/mbridge/msdk/foundation/db/c;->b(Ljava/lang/String;Ljava/lang/String;)Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    move-result-object v1

    if-eqz v1, :cond_2

    .line 534
    invoke-virtual {v1}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->getNoticeurl()Ljava/lang/String;

    move-result-object v3

    if-eqz v3, :cond_1

    const/4 v3, 0x0

    .line 535
    invoke-virtual {v1, v3}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->setNoticeurl(Ljava/lang/String;)V

    .line 537
    :cond_1
    invoke-virtual {p1, v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setJumpResult(Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;)V

    .line 538
    iget-object v4, p0, Lcom/mbridge/msdk/click/b;->g:Ljava/lang/String;

    const/4 v5, 0x0

    const/4 v6, -0x1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getTtc_type()I

    move-result v7

    move-object v3, p1

    invoke-virtual/range {v2 .. v7}, Lcom/mbridge/msdk/foundation/db/c;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;ZII)J

    .line 541
    :cond_2
    iget-object v1, p0, Lcom/mbridge/msdk/click/b;->q:Landroid/content/Context;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPackageName()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mbridge/msdk/click/c;->d(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_3

    .line 543
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPackageName()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, " is intalled."

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_3
    const/4 v3, 0x0

    const/4 v4, 0x0

    const/4 v5, 0x0

    .line 546
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getTtc_type()I

    move-result v6

    const/4 v7, 0x0

    const/4 v1, 0x0

    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v8

    move-object v1, p0

    move-object v2, p1

    invoke-direct/range {v1 .. v8}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZZZIZLjava/lang/Boolean;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 549
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_0
    return-void
.end method

.method public final a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/out/NativeListener$NativeAdListener;)V
    .locals 1

    if-eqz p2, :cond_0

    if-eqz p1, :cond_0

    .line 429
    invoke-interface {p2, p1}, Lcom/mbridge/msdk/out/NativeListener$NativeAdListener;->onAdClick(Lcom/mbridge/msdk/out/Campaign;)V

    :cond_0
    const-string p2, "MBridge SDK M"

    const-string v0, "clickStart"

    .line 432
    invoke-static {p2, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 433
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/click/b;->c(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    return-void
.end method

.method public final a(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V
    .locals 5

    .line 1313
    :try_start_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_a

    if-nez p1, :cond_0

    goto/16 :goto_3

    :cond_0
    const/4 v0, 0x0

    if-eqz p1, :cond_1

    .line 1317
    instance-of v1, p1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v1, :cond_1

    .line 1318
    move-object v0, p1

    check-cast v0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    :cond_1
    const-string p1, "market://"

    .line 1323
    invoke-virtual {p2, p1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    const-string v1, "market://details?id="

    const-string v2, "MBridge SDK M"

    if-nez p1, :cond_6

    :try_start_1
    const-string p1, "https://play.google.com/"

    invoke-virtual {p2, p1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_2

    goto :goto_1

    .line 1344
    :cond_2
    invoke-static {}, Lcom/mbridge/msdk/c/a;->aq()Z

    move-result p1

    sput-boolean p1, Lcom/mbridge/msdk/MBridgeConstans;->ALLOW_APK_DOWNLOAD:Z

    .line 1345
    invoke-virtual {p2}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object p1

    const-string v3, ".apk"

    invoke-virtual {p1, v3}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_b

    sget-boolean p1, Lcom/mbridge/msdk/MBridgeConstans;->ALLOW_APK_DOWNLOAD:Z

    if-nez p1, :cond_b

    const/4 p1, 0x1

    if-eqz v0, :cond_4

    .line 1346
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPackageName()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_4

    .line 1347
    iget-object v3, p0, Lcom/mbridge/msdk/click/b;->q:Landroid/content/Context;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPackageName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    iget-object v4, p0, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-static {v3, v1, v4}, Lcom/mbridge/msdk/foundation/tools/ad$a;->a(Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;)Z

    move-result v1
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    if-nez v1, :cond_3

    .line 2675
    :try_start_2
    iget-object p1, p0, Lcom/mbridge/msdk/click/b;->w:Landroid/os/Handler;

    new-instance p2, Lcom/mbridge/msdk/click/b$8;

    invoke-direct {p2, p0}, Lcom/mbridge/msdk/click/b$8;-><init>(Lcom/mbridge/msdk/click/b;)V

    invoke-virtual {p1, p2}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    goto :goto_0

    :catch_0
    :try_start_3
    const-string p1, "Opps!Access Unavailable."

    .line 2683
    invoke-static {v2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 1350
    :cond_3
    sget-boolean v1, Lcom/mbridge/msdk/MBridgeConstans;->ALLOW_APK_DOWNLOAD:Z

    if-eqz v1, :cond_5

    .line 1352
    invoke-direct {p0, v0, p2, p1}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Z)V

    goto :goto_0

    .line 1356
    :cond_4
    sget-boolean v1, Lcom/mbridge/msdk/MBridgeConstans;->ALLOW_APK_DOWNLOAD:Z

    if-eqz v1, :cond_5

    .line 1358
    invoke-direct {p0, v0, p2, p1}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Z)V

    :cond_5
    :goto_0
    return-void

    .line 1325
    :cond_6
    :goto_1
    iget-object p1, p0, Lcom/mbridge/msdk/click/b;->q:Landroid/content/Context;

    iget-object v3, p0, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-static {p1, p2, v3}, Lcom/mbridge/msdk/foundation/tools/ad$a;->a(Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;)Z

    move-result p1

    if-nez p1, :cond_9

    if-eqz v0, :cond_9

    .line 1328
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPackageName()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_7

    .line 1329
    iget-object p1, p0, Lcom/mbridge/msdk/click/b;->q:Landroid/content/Context;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPackageName()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-static {p1, v0, v1}, Lcom/mbridge/msdk/foundation/tools/ad$a;->a(Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;)Z

    goto :goto_2

    .line 1331
    :cond_7
    invoke-direct {p0}, Lcom/mbridge/msdk/click/b;->c()I

    move-result p1

    const/4 v1, 0x2

    if-ne p1, v1, :cond_8

    .line 1333
    iget-object p1, p0, Lcom/mbridge/msdk/click/b;->q:Landroid/content/Context;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClickURL()Ljava/lang/String;

    move-result-object v1

    iget-object v3, p0, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-static {p1, v1, v0, v3}, Lcom/mbridge/msdk/foundation/tools/ad;->a(Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;)V

    goto :goto_2

    .line 1335
    :cond_8
    iget-object p1, p0, Lcom/mbridge/msdk/click/b;->q:Landroid/content/Context;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClickURL()Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-static {p1, v0, v1}, Lcom/mbridge/msdk/foundation/tools/ad;->a(Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/out/BaseTrackingListener;)V

    .line 1341
    :cond_9
    :goto_2
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "Jump to Google Play: "

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_1

    :cond_a
    :goto_3
    return-void

    :catch_1
    move-exception p1

    .line 1364
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_b
    return-void
.end method

.method public final a(Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;)V
    .locals 0

    .line 157
    iput-object p1, p0, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 0

    .line 153
    iput-object p1, p0, Lcom/mbridge/msdk/click/b;->g:Ljava/lang/String;

    return-void
.end method

.method public final a(Z)V
    .locals 0

    .line 173
    iput-boolean p1, p0, Lcom/mbridge/msdk/click/b;->n:Z

    return-void
.end method

.method public final b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z
    .locals 9

    .line 572
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/click/b;->d(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z

    move-result v0

    const/4 v1, 0x1

    if-nez v0, :cond_0

    return v1

    .line 575
    :cond_0
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z

    move-result v0

    if-eqz v0, :cond_6

    .line 576
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNoticeUrl()Ljava/lang/String;

    move-result-object v0

    .line 577
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/o;->a()Lcom/mbridge/msdk/foundation/tools/o;

    move-result-object v2

    invoke-virtual {v2, p1}, Lcom/mbridge/msdk/foundation/tools/o;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 579
    iget-object v2, p0, Lcom/mbridge/msdk/click/b;->q:Landroid/content/Context;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getDeepLinkURL()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mbridge/msdk/click/c;->e(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_5

    if-eqz p1, :cond_1

    const/4 v2, 0x2

    .line 2475
    :try_start_0
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getLinkType()I

    move-result v3

    if-eq v2, v3, :cond_2

    :cond_1
    const/4 v2, 0x3

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getLinkType()I

    move-result v3

    if-ne v2, v3, :cond_3

    .line 2476
    :cond_2
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v2

    .line 2477
    sget-object v3, Lcom/mbridge/msdk/click/b;->d:Ljava/util/Map;

    if-eqz v3, :cond_3

    .line 2479
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClickTimeOutInterval()I

    move-result v3

    mul-int/lit16 v3, v3, 0x3e8

    .line 2480
    sget-object v4, Lcom/mbridge/msdk/click/b;->d:Ljava/util/Map;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v5

    int-to-long v7, v3

    add-long/2addr v5, v7

    invoke-static {v5, v6}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v3

    invoke-interface {v4, v2, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v2

    .line 2484
    sget-boolean v3, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v3, :cond_3

    .line 2485
    invoke-virtual {v2}, Ljava/lang/Exception;->printStackTrace()V

    .line 582
    :cond_3
    :goto_0
    iget-object v2, p0, Lcom/mbridge/msdk/click/b;->q:Landroid/content/Context;

    if-eqz v2, :cond_4

    .line 583
    new-instance v2, Landroid/content/Intent;

    invoke-direct {v2}, Landroid/content/Intent;-><init>()V

    const-string v3, "mb_dp_close_broadcast_receiver"

    .line 584
    invoke-virtual {v2, v3}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;

    .line 586
    :try_start_1
    iget-object v3, p0, Lcom/mbridge/msdk/click/b;->q:Landroid/content/Context;

    invoke-virtual {v3, v2}, Landroid/content/Context;->sendBroadcast(Landroid/content/Intent;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    .line 592
    :catch_1
    :cond_4
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "&opdptype=1"

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const/4 v2, -0x1

    .line 593
    invoke-direct {p0, p1, v0, v2}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;I)V

    .line 595
    invoke-static {p1}, Lcom/mbridge/msdk/click/c;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    return v1

    .line 600
    :cond_5
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/o;->a()Lcom/mbridge/msdk/foundation/tools/o;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/foundation/tools/o;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    :cond_6
    const/4 p1, 0x0

    return p1
.end method

.method public final c(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    .locals 16

    move-object/from16 v9, p0

    move-object/from16 v0, p1

    const-string v10, "MBridge SDK M"

    const/4 v7, 0x0

    .line 612
    :try_start_0
    iput-boolean v7, v9, Lcom/mbridge/msdk/click/b;->j:Z

    .line 614
    invoke-direct/range {p0 .. p1}, Lcom/mbridge/msdk/click/b;->e(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z

    move-result v1

    if-nez v1, :cond_0

    return-void

    .line 617
    :cond_0
    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNoticeUrl()Ljava/lang/String;

    move-result-object v8

    .line 618
    iget-object v1, v9, Lcom/mbridge/msdk/click/b;->p:Lcom/mbridge/msdk/foundation/db/i;

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/db/c;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/c;

    move-result-object v1

    .line 619
    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/db/c;->a()V

    .line 620
    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v2

    iget-object v3, v9, Lcom/mbridge/msdk/click/b;->g:Ljava/lang/String;

    invoke-virtual {v1, v2, v3}, Lcom/mbridge/msdk/foundation/db/c;->b(Ljava/lang/String;Ljava/lang/String;)Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    move-result-object v11

    if-eqz v11, :cond_2

    .line 622
    invoke-virtual {v11}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->getNoticeurl()Ljava/lang/String;

    move-result-object v2

    if-eqz v2, :cond_1

    const/4 v2, 0x0

    .line 623
    invoke-virtual {v11, v2}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->setNoticeurl(Ljava/lang/String;)V

    .line 625
    :cond_1
    invoke-virtual {v0, v11}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setJumpResult(Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;)V

    .line 626
    iget-object v3, v9, Lcom/mbridge/msdk/click/b;->g:Ljava/lang/String;

    const/4 v4, 0x0

    const/4 v5, -0x1

    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getTtc_type()I

    move-result v6

    move-object/from16 v2, p1

    invoke-virtual/range {v1 .. v6}, Lcom/mbridge/msdk/foundation/db/c;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;ZII)J

    .line 630
    :cond_2
    invoke-static/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z

    move-result v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string v2, "&opdptype=1"

    const-string v3, "mb_dp_close_broadcast_receiver"

    const-string v4, "&opdptype=0"

    const/4 v5, -0x1

    if-eqz v1, :cond_7

    .line 632
    :try_start_1
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/o;->a()Lcom/mbridge/msdk/foundation/tools/o;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/foundation/tools/o;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 634
    iget-object v1, v9, Lcom/mbridge/msdk/click/b;->q:Landroid/content/Context;

    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getDeepLinkURL()Ljava/lang/String;

    move-result-object v6

    invoke-static {v1, v6}, Lcom/mbridge/msdk/click/c;->e(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_6

    .line 635
    iget-object v1, v9, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    if-eqz v1, :cond_3

    .line 636
    iget-object v1, v9, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClickURL()Ljava/lang/String;

    move-result-object v4

    invoke-interface {v1, v0, v4}, Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;->onStartRedirection(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V

    .line 638
    :cond_3
    iget-object v1, v9, Lcom/mbridge/msdk/click/b;->q:Landroid/content/Context;

    if-eqz v1, :cond_4

    .line 639
    new-instance v1, Landroid/content/Intent;

    invoke-direct {v1}, Landroid/content/Intent;-><init>()V

    .line 640
    invoke-virtual {v1, v3}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 642
    :try_start_2
    iget-object v3, v9, Lcom/mbridge/msdk/click/b;->q:Landroid/content/Context;

    invoke-virtual {v3, v1}, Landroid/content/Context;->sendBroadcast(Landroid/content/Intent;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 648
    :catch_0
    :cond_4
    :try_start_3
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 649
    invoke-direct {v9, v0, v1, v5}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;I)V

    .line 651
    invoke-static/range {p1 .. p1}, Lcom/mbridge/msdk/click/c;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 652
    iget-object v1, v9, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    if-eqz v1, :cond_5

    .line 653
    iget-object v1, v9, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClickURL()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v1, v0, v2}, Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;->onFinishRedirection(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V

    :cond_5
    return-void

    .line 658
    :cond_6
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    .line 659
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/o;->a()Lcom/mbridge/msdk/foundation/tools/o;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/foundation/tools/o;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 663
    :cond_7
    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getLinkType()I

    move-result v1

    const/16 v6, 0xc

    if-ne v1, v6, :cond_a

    .line 664
    iget-object v1, v9, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    if-eqz v1, :cond_8

    .line 665
    iget-object v1, v9, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClickURL()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v1, v0, v2}, Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;->onStartRedirection(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V

    .line 667
    :cond_8
    invoke-direct {v9, v0, v8, v5}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;I)V

    .line 668
    iget-object v1, v9, Lcom/mbridge/msdk/click/b;->q:Landroid/content/Context;

    invoke-direct {v9, v1, v0}, Lcom/mbridge/msdk/click/b;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 669
    iget-object v1, v9, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    if-eqz v1, :cond_9

    .line 670
    iget-object v1, v9, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClickURL()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v1, v0, v2}, Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;->onFinishRedirection(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V

    :cond_9
    return-void

    .line 676
    :cond_a
    invoke-static {}, Lcom/mbridge/msdk/scheme/applet/AppletModelManager;->getInstance()Lcom/mbridge/msdk/scheme/applet/AppletModelManager;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/scheme/applet/AppletModelManager;->get(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Lcom/mbridge/msdk/scheme/applet/AppletsModel;

    move-result-object v1

    const/4 v6, 0x1

    if-eqz v1, :cond_14

    .line 678
    invoke-virtual {v1}, Lcom/mbridge/msdk/scheme/applet/AppletsModel;->isSupportWxScheme()Z

    move-result v12

    if-eqz v12, :cond_14

    .line 679
    invoke-virtual {v1}, Lcom/mbridge/msdk/scheme/applet/AppletsModel;->isRequestSuccess()Z

    move-result v12

    if-eqz v12, :cond_f

    .line 681
    iget-object v12, v9, Lcom/mbridge/msdk/click/b;->q:Landroid/content/Context;

    invoke-virtual {v1}, Lcom/mbridge/msdk/scheme/applet/AppletsModel;->getDeepLink()Ljava/lang/String;

    move-result-object v1

    invoke-static {v12, v1}, Lcom/mbridge/msdk/click/c;->e(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_e

    .line 682
    iget-object v1, v9, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    if-eqz v1, :cond_b

    .line 683
    iget-object v1, v9, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClickURL()Ljava/lang/String;

    move-result-object v4

    invoke-interface {v1, v0, v4}, Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;->onStartRedirection(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V

    .line 685
    :cond_b
    iget-object v1, v9, Lcom/mbridge/msdk/click/b;->q:Landroid/content/Context;

    if-eqz v1, :cond_c

    .line 686
    new-instance v1, Landroid/content/Intent;

    invoke-direct {v1}, Landroid/content/Intent;-><init>()V

    .line 687
    invoke-virtual {v1, v3}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    .line 689
    :try_start_4
    iget-object v3, v9, Lcom/mbridge/msdk/click/b;->q:Landroid/content/Context;

    invoke-virtual {v3, v1}, Landroid/content/Context;->sendBroadcast(Landroid/content/Intent;)V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_1
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    .line 695
    :catch_1
    :cond_c
    :try_start_5
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 696
    invoke-direct {v9, v0, v1, v5}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;I)V

    .line 697
    invoke-static/range {p1 .. p1}, Lcom/mbridge/msdk/click/c;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 698
    iget-object v1, v9, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    if-eqz v1, :cond_d

    .line 699
    iget-object v1, v9, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClickURL()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v1, v0, v2}, Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;->onFinishRedirection(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V

    :cond_d
    return-void

    .line 703
    :cond_e
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    goto :goto_0

    .line 707
    :cond_f
    invoke-virtual {v1}, Lcom/mbridge/msdk/scheme/applet/AppletsModel;->isRequesting()Z

    move-result v2

    if-eqz v2, :cond_11

    .line 708
    iget-object v2, v9, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    if-eqz v2, :cond_10

    .line 709
    iget-object v2, v9, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClickURL()Ljava/lang/String;

    move-result-object v3

    invoke-interface {v2, v0, v3}, Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;->onStartRedirection(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V

    .line 711
    :cond_10
    iget-object v2, v9, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-direct {v9, v2, v0, v1, v9}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/scheme/applet/AppletsModel;Lcom/mbridge/msdk/click/b;)Lcom/mbridge/msdk/scheme/applet/AppletSchemeCallBack;

    move-result-object v0

    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/scheme/applet/AppletsModel;->setAppletSchemeCallBack(Lcom/mbridge/msdk/scheme/applet/IAppletSchemeCallBack;)V

    return-void

    .line 714
    :cond_11
    invoke-virtual {v1, v6}, Lcom/mbridge/msdk/scheme/applet/AppletsModel;->can(I)Z

    move-result v2

    if-eqz v2, :cond_14

    .line 715
    invoke-virtual {v1}, Lcom/mbridge/msdk/scheme/applet/AppletsModel;->isRequestTimesMaxPerDay()Z

    move-result v2

    if-eqz v2, :cond_12

    if-eqz v0, :cond_14

    if-eqz v1, :cond_14

    .line 716
    invoke-virtual {v1}, Lcom/mbridge/msdk/scheme/applet/AppletsModel;->getReBuildClickUrl()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_14

    .line 717
    invoke-virtual {v1}, Lcom/mbridge/msdk/scheme/applet/AppletsModel;->getReBuildClickUrl()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setClickURL(Ljava/lang/String;)V

    goto :goto_0

    .line 720
    :cond_12
    iget-object v2, v9, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    if-eqz v2, :cond_13

    .line 721
    iget-object v2, v9, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClickURL()Ljava/lang/String;

    move-result-object v3

    invoke-interface {v2, v0, v3}, Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;->onStartRedirection(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V

    .line 723
    :cond_13
    iget-object v2, v9, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-direct {v9, v2, v0, v1, v9}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/scheme/applet/AppletsModel;Lcom/mbridge/msdk/click/b;)Lcom/mbridge/msdk/scheme/applet/AppletSchemeCallBack;

    move-result-object v0

    invoke-virtual {v1, v6, v0}, Lcom/mbridge/msdk/scheme/applet/AppletsModel;->requestWxAppletsScheme(ILcom/mbridge/msdk/scheme/applet/IAppletSchemeCallBack;)V

    return-void

    .line 731
    :cond_14
    :goto_0
    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getUserActivation()Z

    move-result v1

    if-nez v1, :cond_17

    .line 732
    iget-object v1, v9, Lcom/mbridge/msdk/click/b;->q:Landroid/content/Context;

    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPackageName()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mbridge/msdk/click/c;->d(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_17

    .line 734
    iget-object v1, v9, Lcom/mbridge/msdk/click/b;->q:Landroid/content/Context;

    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPackageName()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mbridge/msdk/click/c;->f(Landroid/content/Context;Ljava/lang/String;)V

    .line 735
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPackageName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " is intalled."

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v10, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 737
    sget v1, Lcom/mbridge/msdk/foundation/same/a;->K:I

    invoke-direct {v9, v0, v8, v1}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;I)V

    .line 739
    iget-object v1, v9, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    if-eqz v1, :cond_15

    .line 740
    iget-object v1, v9, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClickURL()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v1, v0, v2}, Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;->onStartRedirection(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V

    :cond_15
    const/4 v3, 0x0

    const/4 v4, 0x0

    const/4 v5, 0x0

    .line 743
    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getTtc_type()I

    move-result v7

    const/4 v8, 0x1

    invoke-static {v6}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v11

    move-object/from16 v1, p0

    move-object/from16 v2, p1

    move v6, v7

    move v7, v8

    move-object v8, v11

    invoke-direct/range {v1 .. v8}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZZZIZLjava/lang/Boolean;)V

    .line 744
    iget-object v1, v9, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    if-eqz v1, :cond_16

    .line 745
    iget-object v1, v9, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClickURL()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v1, v0, v2}, Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;->onFinishRedirection(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V

    .line 746
    iget-object v0, v9, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/ad;->a(Lcom/mbridge/msdk/out/BaseTrackingListener;)V

    :cond_16
    return-void

    .line 752
    :cond_17
    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getLinkType()I

    move-result v1

    .line 753
    invoke-direct/range {p0 .. p0}, Lcom/mbridge/msdk/click/b;->c()I

    move-result v2

    const/4 v3, 0x3

    if-eq v1, v3, :cond_18

    .line 756
    invoke-direct {v9, v0, v8, v5}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;I)V

    .line 759
    :cond_18
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "======302\u8df3\u8f6c\u524dlinkType:"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v5, " openType:"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v5, "======landingType\uff1a"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getLandingType()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v10, v4}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v4, 0x4

    const/16 v5, 0x9

    const/16 v8, 0x8

    if-eq v1, v8, :cond_1a

    if-eq v1, v5, :cond_1a

    if-ne v1, v4, :cond_19

    goto :goto_1

    :cond_19
    move v12, v7

    goto :goto_2

    :cond_1a
    :goto_1
    move v12, v6

    .line 762
    :goto_2
    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClickURL()Ljava/lang/String;

    move-result-object v13

    const-string v14, "market://"

    invoke-virtual {v13, v14}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v13

    if-nez v13, :cond_1c

    .line 763
    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClickURL()Ljava/lang/String;

    move-result-object v13

    const-string v14, "https://play.google.com/"

    invoke-virtual {v13, v14}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v13

    if-eqz v13, :cond_1b

    goto :goto_3

    :cond_1b
    move v13, v7

    goto/16 :goto_5

    .line 764
    :cond_1c
    :goto_3
    iget-object v13, v9, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    if-eqz v13, :cond_1d

    .line 765
    iget-object v13, v9, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClickURL()Ljava/lang/String;

    move-result-object v14

    invoke-interface {v13, v0, v14}, Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;->onStartRedirection(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V

    move v13, v6

    goto :goto_4

    :cond_1d
    move v13, v7

    .line 769
    :goto_4
    iget-object v14, v9, Lcom/mbridge/msdk/click/b;->q:Landroid/content/Context;

    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClickURL()Ljava/lang/String;

    move-result-object v15

    iget-object v3, v9, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-static {v14, v15, v3}, Lcom/mbridge/msdk/foundation/tools/ad$a;->a(Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;)Z

    move-result v3

    if-eqz v3, :cond_1f

    .line 771
    invoke-direct {v9, v11, v0, v7, v7}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZZ)V

    .line 772
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "\u4e0d\u7528\u505a302\u8df3\u8f6c \u6700\u7ec8\u5730\u5740\u5df2\u7ecf\u662fgp\u4e86\uff1a"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClickURL()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v10, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 773
    iget-object v1, v9, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    if-eqz v1, :cond_1e

    .line 774
    iget-object v1, v9, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClickURL()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v1, v0, v2}, Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;->onFinishRedirection(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V

    :cond_1e
    return-void

    :cond_1f
    if-nez v12, :cond_21

    .line 778
    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClickURL()Ljava/lang/String;

    move-result-object v1

    iget-object v3, v9, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-direct {v9, v2, v1, v0, v3}, Lcom/mbridge/msdk/click/b;->a(ILjava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;)V

    .line 780
    invoke-direct {v9, v11, v0, v7, v7}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZZ)V

    .line 781
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "\u6700\u7ec8\u5730\u5740\u662fgp, \u4f46\u662f\u6253\u5f00\u5931\u8d25\u4e86\uff1a"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClickURL()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v10, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 782
    iget-object v1, v9, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    if-eqz v1, :cond_20

    .line 783
    iget-object v1, v9, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClickURL()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v1, v0, v2}, Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;->onFinishRedirection(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_0

    :cond_20
    return-void

    :cond_21
    :goto_5
    const-string v3, " clickurl \u4e3a\u7a7a"

    const-string v14, "linketype="

    if-eqz v12, :cond_2e

    .line 789
    :try_start_6
    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClickURL()Ljava/lang/String;

    move-result-object v12

    .line 790
    iget-object v15, v9, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    if-eqz v15, :cond_22

    if-nez v13, :cond_22

    .line 791
    iget-object v13, v9, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-interface {v13, v0, v12}, Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;->onStartRedirection(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V

    .line 793
    :cond_22
    invoke-static {v12}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v13

    if-eqz v13, :cond_24

    .line 794
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v10, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 795
    iget-object v1, v9, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    if-eqz v1, :cond_23

    .line 796
    iget-object v1, v9, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-interface {v1, v0, v12}, Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;->onRedirectionFailed(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V

    .line 799
    :cond_23
    invoke-direct {v9, v11, v0, v6, v7}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZZ)V

    return-void

    :cond_24
    if-ne v1, v8, :cond_28

    const-string v1, "linketype=8 \u7528webview \u6253\u5f00"

    .line 803
    invoke-static {v10, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 804
    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAabEntity()Lcom/mbridge/msdk/foundation/entity/AabEntity;

    move-result-object v1

    if-eqz v1, :cond_26

    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAabEntity()Lcom/mbridge/msdk/foundation/entity/AabEntity;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/AabEntity;->getHlp()I

    move-result v1

    if-ne v1, v6, :cond_26

    .line 805
    iget-object v1, v9, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    if-nez v1, :cond_25

    .line 807
    iget-object v1, v9, Lcom/mbridge/msdk/click/b;->v:Lcom/mbridge/msdk/click/h;

    .line 808
    iget-object v2, v9, Lcom/mbridge/msdk/click/b;->v:Lcom/mbridge/msdk/click/h;

    if-eqz v2, :cond_25

    .line 809
    iget-object v2, v9, Lcom/mbridge/msdk/click/b;->v:Lcom/mbridge/msdk/click/h;

    invoke-interface {v2, v0, v12}, Lcom/mbridge/msdk/click/h;->onStartRedirection(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V

    .line 812
    :cond_25
    iget-object v2, v9, Lcom/mbridge/msdk/click/b;->q:Landroid/content/Context;

    invoke-static {v2, v12, v0, v9, v1}, Lcom/mbridge/msdk/foundation/tools/ad;->a(Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/click/b;Lcom/mbridge/msdk/out/BaseTrackingListener;)V

    goto :goto_6

    .line 814
    :cond_26
    iget-object v1, v9, Lcom/mbridge/msdk/click/b;->q:Landroid/content/Context;

    iget-object v2, v9, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-static {v1, v12, v0, v2}, Lcom/mbridge/msdk/foundation/tools/ad;->a(Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;)V

    .line 815
    iget-object v1, v9, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    if-eqz v1, :cond_27

    .line 816
    iget-object v1, v9, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-interface {v1, v0, v12}, Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;->onFinishRedirection(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V

    .line 819
    :cond_27
    :goto_6
    invoke-direct {v9, v11, v0, v7, v7}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZZ)V

    return-void

    :cond_28
    if-ne v1, v5, :cond_2a

    const-string v1, "linketype=9 \u7528\u6d4f\u89c8\u5668 \u6253\u5f00"

    .line 822
    invoke-static {v10, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 823
    iget-object v1, v9, Lcom/mbridge/msdk/click/b;->q:Landroid/content/Context;

    iget-object v2, v9, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-static {v1, v12, v2}, Lcom/mbridge/msdk/foundation/tools/ad;->a(Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/out/BaseTrackingListener;)V

    .line 824
    invoke-direct {v9, v11, v0, v7, v7}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZZ)V

    .line 825
    iget-object v1, v9, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    if-eqz v1, :cond_29

    .line 826
    iget-object v1, v9, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-interface {v1, v0, v12}, Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;->onFinishRedirection(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V

    :cond_29
    return-void

    :cond_2a
    if-ne v1, v4, :cond_2c

    const/4 v1, 0x2

    if-ne v2, v1, :cond_2b

    const-string v1, "linketype=4 opent=2 \u7528webview \u6253\u5f00"

    .line 832
    invoke-static {v10, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 833
    iget-object v1, v9, Lcom/mbridge/msdk/click/b;->q:Landroid/content/Context;

    iget-object v2, v9, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-static {v1, v12, v0, v2}, Lcom/mbridge/msdk/foundation/tools/ad;->a(Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;)V

    goto :goto_7

    :cond_2b
    const-string v1, "linketype=4 opent=\u4e0d\u4e3a2 \u7528Browser \u6253\u5f00"

    .line 835
    invoke-static {v10, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 836
    iget-object v1, v9, Lcom/mbridge/msdk/click/b;->q:Landroid/content/Context;

    iget-object v2, v9, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-static {v1, v12, v2}, Lcom/mbridge/msdk/foundation/tools/ad;->a(Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/out/BaseTrackingListener;)V

    .line 839
    :cond_2c
    :goto_7
    iget-object v1, v9, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    if-eqz v1, :cond_2d

    .line 840
    iget-object v1, v9, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-interface {v1, v0, v12}, Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;->onFinishRedirection(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V

    .line 843
    :cond_2d
    invoke-direct {v9, v11, v0, v7, v7}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZZ)V

    return-void

    :cond_2e
    const/4 v2, 0x2

    if-ne v1, v2, :cond_2f

    .line 846
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "linktype\u4e3a2 \u5f00\u59cb\u505a302\u8df3\u8f6c"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClickURL()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v10, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v3, 0x0

    const/4 v4, 0x1

    const/4 v5, 0x0

    .line 848
    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getTtc_type()I

    move-result v7

    const/4 v8, 0x0

    invoke-static {v6}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v11

    move-object/from16 v1, p0

    move-object/from16 v2, p1

    move v6, v7

    move v7, v8

    move-object v8, v11

    invoke-direct/range {v1 .. v8}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZZZIZLjava/lang/Boolean;)V

    goto/16 :goto_8

    :cond_2f
    const/4 v2, 0x3

    if-ne v1, v2, :cond_30

    .line 850
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "linktype\u4e3a3 \u5f00\u59cb\u505a302\u8df3\u8f6c"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClickURL()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v10, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v3, 0x0

    const/4 v4, 0x1

    const/4 v5, 0x0

    .line 851
    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getTtc_type()I

    move-result v7

    const/4 v8, 0x0

    invoke-static {v6}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v11

    move-object/from16 v1, p0

    move-object/from16 v2, p1

    move v6, v7

    move v7, v8

    move-object v8, v11

    invoke-direct/range {v1 .. v8}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZZZIZLjava/lang/Boolean;)V

    goto :goto_8

    .line 854
    :cond_30
    invoke-virtual/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClickURL()Ljava/lang/String;

    move-result-object v2

    .line 855
    iget-object v4, v9, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    if-eqz v4, :cond_31

    .line 856
    iget-object v4, v9, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-interface {v4, v0, v2}, Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;->onStartRedirection(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V

    .line 858
    :cond_31
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_33

    .line 859
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v10, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 860
    iget-object v1, v9, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    if-eqz v1, :cond_32

    .line 861
    iget-object v1, v9, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-interface {v1, v0, v2}, Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;->onRedirectionFailed(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V

    .line 864
    :cond_32
    invoke-direct {v9, v11, v0, v6, v7}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZZ)V

    return-void

    .line 867
    :cond_33
    iget-object v1, v9, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    if-eqz v1, :cond_34

    .line 868
    iget-object v1, v9, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-interface {v1, v0, v2}, Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;->onFinishRedirection(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V

    :cond_34
    const-string v1, "linketyp\u4e0d\u662f23489\u7684\u503c \u7528\u6d4f\u89c8\u5668 \u6253\u5f00"

    .line 870
    invoke-static {v10, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 871
    iget-object v1, v9, Lcom/mbridge/msdk/click/b;->q:Landroid/content/Context;

    iget-object v3, v9, Lcom/mbridge/msdk/click/b;->t:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-static {v1, v2, v3}, Lcom/mbridge/msdk/foundation/tools/ad;->a(Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/out/BaseTrackingListener;)V

    .line 873
    invoke-direct {v9, v11, v0, v7, v7}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZZ)V
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_0

    goto :goto_8

    :catchall_0
    move-exception v0

    .line 876
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v10, v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_8
    return-void
.end method
