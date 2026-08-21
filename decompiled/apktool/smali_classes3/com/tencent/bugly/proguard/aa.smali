.class public final Lcom/tencent/bugly/proguard/aa;
.super Ljava/lang/Object;
.source "BUGLY"


# static fields
.field private static final W:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private static aq:Lcom/tencent/bugly/proguard/aa;


# instance fields
.field public A:J

.field public B:J

.field public C:J

.field public D:Z

.field public E:Ljava/lang/String;

.field public F:Ljava/lang/String;

.field public G:Ljava/lang/String;

.field public H:Ljava/lang/String;

.field public I:Z

.field public J:Z

.field public K:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field public L:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field public M:Z

.field public N:Lcom/tencent/bugly/proguard/q;

.field public final O:Landroid/content/SharedPreferences;

.field public final P:Landroid/content/SharedPreferences;

.field public Q:Z

.field public R:Z

.field public S:Z

.field public final T:Ljava/lang/Object;

.field public final U:Ljava/lang/Object;

.field public final V:Ljava/lang/Object;

.field private final X:Landroid/content/Context;

.field private Y:Ljava/lang/String;

.field private Z:Ljava/lang/String;

.field public final a:J

.field private aa:Ljava/lang/String;

.field private ab:Ljava/lang/String;

.field private ac:Ljava/lang/String;

.field private ad:Ljava/lang/String;

.field private ae:J

.field private af:J

.field private ag:J

.field private ah:Ljava/lang/String;

.field private ai:Ljava/lang/String;

.field private aj:Ljava/lang/String;

.field private ak:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/tencent/bugly/crashreport/common/info/PlugInBean;",
            ">;"
        }
    .end annotation
.end field

.field private al:Ljava/lang/String;

.field private am:Ljava/lang/Boolean;

.field private an:Ljava/lang/String;

.field private ao:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/tencent/bugly/crashreport/common/info/PlugInBean;",
            ">;"
        }
    .end annotation
.end field

.field private ap:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/tencent/bugly/crashreport/common/info/PlugInBean;",
            ">;"
        }
    .end annotation
.end field

.field private final ar:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private final as:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private final at:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private final au:Ljava/lang/Object;

.field private final av:Ljava/lang/Object;

.field private final aw:Ljava/lang/Object;

.field private final ax:Ljava/lang/Object;

.field private final ay:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field public final b:B

.field public c:Ljava/lang/String;

.field public final d:Ljava/lang/String;

.field public e:Ljava/lang/String;

.field public f:Z

.field public final g:Ljava/lang/String;

.field public h:Ljava/lang/String;

.field public final i:Ljava/lang/String;

.field public final j:Ljava/lang/String;
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation
.end field

.field public final k:Ljava/lang/String;

.field public l:Ljava/lang/String;

.field public m:J

.field public n:Z

.field public o:Ljava/lang/String;

.field public p:I

.field public q:Ljava/lang/String;

.field public r:Ljava/lang/String;

.field public s:Ljava/lang/String;

.field public t:Ljava/lang/String;

.field public u:Ljava/lang/String;

.field public v:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field public w:I

.field public x:I

.field public y:Ljava/lang/String;

.field public z:J


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 27
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/tencent/bugly/proguard/aa;->W:Ljava/util/Map;

    const/4 v0, 0x0

    .line 79
    sput-object v0, Lcom/tencent/bugly/proguard/aa;->aq:Lcom/tencent/bugly/proguard/aa;

    return-void
.end method

.method private constructor <init>(Landroid/content/Context;)V
    .locals 8

    .line 131
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x1

    .line 37
    iput-boolean v0, p0, Lcom/tencent/bugly/proguard/aa;->f:Z

    const-string v1, "com.tencent.bugly"

    .line 39
    iput-object v1, p0, Lcom/tencent/bugly/proguard/aa;->g:Ljava/lang/String;

    const-string v1, "4.1.9.2"

    .line 40
    iput-object v1, p0, Lcom/tencent/bugly/proguard/aa;->h:Ljava/lang/String;

    const-string v1, ""

    .line 41
    iput-object v1, p0, Lcom/tencent/bugly/proguard/aa;->i:Ljava/lang/String;

    .line 42
    iput-object v1, p0, Lcom/tencent/bugly/proguard/aa;->j:Ljava/lang/String;

    const-string v2, "unknown"

    .line 49
    iput-object v2, p0, Lcom/tencent/bugly/proguard/aa;->l:Ljava/lang/String;

    .line 50
    iput-object v2, p0, Lcom/tencent/bugly/proguard/aa;->ab:Ljava/lang/String;

    .line 51
    iput-object v1, p0, Lcom/tencent/bugly/proguard/aa;->ac:Ljava/lang/String;

    const-wide/16 v3, 0x0

    .line 52
    iput-wide v3, p0, Lcom/tencent/bugly/proguard/aa;->m:J

    const/4 v5, 0x0

    .line 54
    iput-object v5, p0, Lcom/tencent/bugly/proguard/aa;->ad:Ljava/lang/String;

    const-wide/16 v6, -0x1

    .line 56
    iput-wide v6, p0, Lcom/tencent/bugly/proguard/aa;->ae:J

    .line 57
    iput-wide v6, p0, Lcom/tencent/bugly/proguard/aa;->af:J

    .line 58
    iput-wide v6, p0, Lcom/tencent/bugly/proguard/aa;->ag:J

    .line 59
    iput-object v5, p0, Lcom/tencent/bugly/proguard/aa;->ah:Ljava/lang/String;

    .line 60
    iput-object v5, p0, Lcom/tencent/bugly/proguard/aa;->ai:Ljava/lang/String;

    .line 61
    iput-object v5, p0, Lcom/tencent/bugly/proguard/aa;->aj:Ljava/lang/String;

    .line 62
    iput-object v5, p0, Lcom/tencent/bugly/proguard/aa;->ak:Ljava/util/Map;

    const/4 v6, 0x0

    .line 63
    iput-boolean v6, p0, Lcom/tencent/bugly/proguard/aa;->n:Z

    .line 64
    iput-object v5, p0, Lcom/tencent/bugly/proguard/aa;->al:Ljava/lang/String;

    .line 65
    iput-object v5, p0, Lcom/tencent/bugly/proguard/aa;->o:Ljava/lang/String;

    .line 67
    iput-object v5, p0, Lcom/tencent/bugly/proguard/aa;->q:Ljava/lang/String;

    .line 68
    iput-object v5, p0, Lcom/tencent/bugly/proguard/aa;->r:Ljava/lang/String;

    .line 69
    iput-object v5, p0, Lcom/tencent/bugly/proguard/aa;->s:Ljava/lang/String;

    .line 70
    iput-object v5, p0, Lcom/tencent/bugly/proguard/aa;->am:Ljava/lang/Boolean;

    .line 71
    iput-object v5, p0, Lcom/tencent/bugly/proguard/aa;->an:Ljava/lang/String;

    .line 72
    iput-object v5, p0, Lcom/tencent/bugly/proguard/aa;->t:Ljava/lang/String;

    .line 73
    iput-object v5, p0, Lcom/tencent/bugly/proguard/aa;->u:Ljava/lang/String;

    .line 74
    iput-object v5, p0, Lcom/tencent/bugly/proguard/aa;->ao:Ljava/util/Map;

    .line 75
    iput-object v5, p0, Lcom/tencent/bugly/proguard/aa;->ap:Ljava/util/Map;

    .line 77
    iput-object v5, p0, Lcom/tencent/bugly/proguard/aa;->v:Ljava/util/List;

    const/4 v7, -0x1

    .line 80
    iput v7, p0, Lcom/tencent/bugly/proguard/aa;->w:I

    .line 81
    iput v7, p0, Lcom/tencent/bugly/proguard/aa;->x:I

    .line 82
    new-instance v7, Ljava/util/HashMap;

    invoke-direct {v7}, Ljava/util/HashMap;-><init>()V

    iput-object v7, p0, Lcom/tencent/bugly/proguard/aa;->ar:Ljava/util/Map;

    .line 83
    new-instance v7, Ljava/util/HashMap;

    invoke-direct {v7}, Ljava/util/HashMap;-><init>()V

    iput-object v7, p0, Lcom/tencent/bugly/proguard/aa;->as:Ljava/util/Map;

    .line 84
    new-instance v7, Ljava/util/HashMap;

    invoke-direct {v7}, Ljava/util/HashMap;-><init>()V

    iput-object v7, p0, Lcom/tencent/bugly/proguard/aa;->at:Ljava/util/Map;

    .line 86
    iput-object v2, p0, Lcom/tencent/bugly/proguard/aa;->y:Ljava/lang/String;

    .line 87
    iput-wide v3, p0, Lcom/tencent/bugly/proguard/aa;->z:J

    .line 88
    iput-wide v3, p0, Lcom/tencent/bugly/proguard/aa;->A:J

    .line 89
    iput-wide v3, p0, Lcom/tencent/bugly/proguard/aa;->B:J

    .line 90
    iput-wide v3, p0, Lcom/tencent/bugly/proguard/aa;->C:J

    .line 92
    iput-boolean v6, p0, Lcom/tencent/bugly/proguard/aa;->D:Z

    .line 93
    iput-object v5, p0, Lcom/tencent/bugly/proguard/aa;->E:Ljava/lang/String;

    .line 94
    iput-object v5, p0, Lcom/tencent/bugly/proguard/aa;->F:Ljava/lang/String;

    .line 96
    iput-object v5, p0, Lcom/tencent/bugly/proguard/aa;->G:Ljava/lang/String;

    .line 97
    iput-object v1, p0, Lcom/tencent/bugly/proguard/aa;->H:Ljava/lang/String;

    .line 98
    iput-boolean v6, p0, Lcom/tencent/bugly/proguard/aa;->I:Z

    .line 99
    iput-boolean v6, p0, Lcom/tencent/bugly/proguard/aa;->J:Z

    .line 101
    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    iput-object v1, p0, Lcom/tencent/bugly/proguard/aa;->K:Ljava/util/HashMap;

    .line 103
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    iput-object v1, p0, Lcom/tencent/bugly/proguard/aa;->L:Ljava/util/List;

    .line 108
    iput-boolean v6, p0, Lcom/tencent/bugly/proguard/aa;->M:Z

    .line 109
    iput-object v5, p0, Lcom/tencent/bugly/proguard/aa;->N:Lcom/tencent/bugly/proguard/q;

    .line 115
    iput-boolean v0, p0, Lcom/tencent/bugly/proguard/aa;->Q:Z

    .line 116
    iput-boolean v0, p0, Lcom/tencent/bugly/proguard/aa;->R:Z

    .line 117
    iput-boolean v6, p0, Lcom/tencent/bugly/proguard/aa;->S:Z

    .line 120
    new-instance v1, Ljava/lang/Object;

    invoke-direct {v1}, Ljava/lang/Object;-><init>()V

    iput-object v1, p0, Lcom/tencent/bugly/proguard/aa;->au:Ljava/lang/Object;

    .line 121
    new-instance v1, Ljava/lang/Object;

    invoke-direct {v1}, Ljava/lang/Object;-><init>()V

    iput-object v1, p0, Lcom/tencent/bugly/proguard/aa;->T:Ljava/lang/Object;

    .line 122
    new-instance v1, Ljava/lang/Object;

    invoke-direct {v1}, Ljava/lang/Object;-><init>()V

    iput-object v1, p0, Lcom/tencent/bugly/proguard/aa;->av:Ljava/lang/Object;

    .line 123
    new-instance v1, Ljava/lang/Object;

    invoke-direct {v1}, Ljava/lang/Object;-><init>()V

    iput-object v1, p0, Lcom/tencent/bugly/proguard/aa;->aw:Ljava/lang/Object;

    .line 124
    new-instance v1, Ljava/lang/Object;

    invoke-direct {v1}, Ljava/lang/Object;-><init>()V

    iput-object v1, p0, Lcom/tencent/bugly/proguard/aa;->U:Ljava/lang/Object;

    .line 125
    new-instance v1, Ljava/lang/Object;

    invoke-direct {v1}, Ljava/lang/Object;-><init>()V

    iput-object v1, p0, Lcom/tencent/bugly/proguard/aa;->V:Ljava/lang/Object;

    .line 126
    new-instance v1, Ljava/lang/Object;

    invoke-direct {v1}, Ljava/lang/Object;-><init>()V

    iput-object v1, p0, Lcom/tencent/bugly/proguard/aa;->ax:Ljava/lang/Object;

    .line 128
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    iput-object v1, p0, Lcom/tencent/bugly/proguard/aa;->ay:Ljava/util/List;

    .line 132
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    iput-wide v1, p0, Lcom/tencent/bugly/proguard/aa;->a:J

    .line 133
    invoke-static {p1}, Lcom/tencent/bugly/proguard/ap;->a(Landroid/content/Context;)Landroid/content/Context;

    move-result-object v1

    iput-object v1, p0, Lcom/tencent/bugly/proguard/aa;->X:Landroid/content/Context;

    .line 134
    iput-byte v0, p0, Lcom/tencent/bugly/proguard/aa;->b:B

    .line 1184
    invoke-static {p1}, Lcom/tencent/bugly/proguard/z;->b(Landroid/content/Context;)Landroid/content/pm/PackageInfo;

    move-result-object v1

    if-eqz v1, :cond_0

    .line 1189
    :try_start_0
    iget-object v2, v1, Landroid/content/pm/PackageInfo;->versionName:Ljava/lang/String;

    iput-object v2, p0, Lcom/tencent/bugly/proguard/aa;->o:Ljava/lang/String;

    .line 1190
    iget-object v2, p0, Lcom/tencent/bugly/proguard/aa;->o:Ljava/lang/String;

    iput-object v2, p0, Lcom/tencent/bugly/proguard/aa;->E:Ljava/lang/String;

    .line 1191
    iget v1, v1, Landroid/content/pm/PackageInfo;->versionCode:I

    invoke-static {v1}, Ljava/lang/Integer;->toString(I)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/tencent/bugly/proguard/aa;->F:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Throwable; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 1193
    invoke-static {v1}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/Throwable;)Z

    move-result v2

    if-nez v2, :cond_0

    .line 1194
    invoke-virtual {v1}, Ljava/lang/Throwable;->printStackTrace()V

    .line 136
    :cond_0
    :goto_0
    invoke-static {p1}, Lcom/tencent/bugly/proguard/z;->a(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/tencent/bugly/proguard/aa;->c:Ljava/lang/String;

    .line 137
    invoke-static {}, Landroid/os/Process;->myPid()I

    move-result v1

    invoke-static {v1}, Lcom/tencent/bugly/proguard/z;->a(I)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/tencent/bugly/proguard/aa;->d:Ljava/lang/String;

    .line 138
    invoke-static {p1}, Lcom/tencent/bugly/proguard/z;->c(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/tencent/bugly/proguard/aa;->q:Ljava/lang/String;

    .line 139
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "Android "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-static {}, Lcom/tencent/bugly/proguard/ab;->b()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ",level "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/tencent/bugly/proguard/ab;->c()I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/tencent/bugly/proguard/aa;->k:Ljava/lang/String;

    .line 1205
    invoke-static {p1}, Lcom/tencent/bugly/proguard/z;->d(Landroid/content/Context;)Ljava/util/Map;

    move-result-object v1

    if-eqz v1, :cond_7

    .line 1210
    :try_start_1
    invoke-static {v1}, Lcom/tencent/bugly/proguard/z;->a(Ljava/util/Map;)Ljava/util/List;

    move-result-object v2

    iput-object v2, p0, Lcom/tencent/bugly/proguard/aa;->v:Ljava/util/List;

    const-string v2, "BUGLY_APPID"

    .line 1211
    invoke-interface {v1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    if-eqz v2, :cond_1

    .line 1213
    iput-object v2, p0, Lcom/tencent/bugly/proguard/aa;->r:Ljava/lang/String;

    const-string v2, "APP_ID"

    .line 1214
    iget-object v3, p0, Lcom/tencent/bugly/proguard/aa;->r:Ljava/lang/String;

    invoke-virtual {p0, v2, v3}, Lcom/tencent/bugly/proguard/aa;->b(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    const-string v2, "BUGLY_APP_VERSION"

    .line 1216
    invoke-interface {v1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    if-eqz v2, :cond_2

    .line 1218
    iput-object v2, p0, Lcom/tencent/bugly/proguard/aa;->o:Ljava/lang/String;

    :cond_2
    const-string v2, "BUGLY_APP_CHANNEL"

    .line 1220
    invoke-interface {v1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    if-eqz v2, :cond_3

    .line 1222
    iput-object v2, p0, Lcom/tencent/bugly/proguard/aa;->s:Ljava/lang/String;

    :cond_3
    const-string v2, "BUGLY_ENABLE_DEBUG"

    .line 1224
    invoke-interface {v1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    if-eqz v2, :cond_4

    const-string v3, "true"

    .line 1226
    invoke-virtual {v2, v3}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v2

    iput-boolean v2, p0, Lcom/tencent/bugly/proguard/aa;->D:Z

    :cond_4
    const-string v2, "com.tencent.rdm.uuid"

    .line 1228
    invoke-interface {v1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    if-eqz v2, :cond_5

    .line 1230
    iput-object v2, p0, Lcom/tencent/bugly/proguard/aa;->G:Ljava/lang/String;

    :cond_5
    const-string v2, "BUGLY_APP_BUILD_NO"

    .line 1232
    invoke-interface {v1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    .line 1233
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_6

    .line 1234
    invoke-static {v2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    iput v2, p0, Lcom/tencent/bugly/proguard/aa;->p:I

    :cond_6
    const-string v2, "BUGLY_AREA"

    .line 1236
    invoke-interface {v1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    if-eqz v1, :cond_7

    .line 1238
    iput-object v1, p0, Lcom/tencent/bugly/proguard/aa;->H:Ljava/lang/String;
    :try_end_1
    .catch Ljava/lang/Throwable; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_1

    :catch_1
    move-exception v1

    .line 1241
    invoke-static {v1}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/Throwable;)Z

    move-result v2

    if-nez v2, :cond_7

    .line 1242
    invoke-virtual {v1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_7
    :goto_1
    :try_start_2
    const-string v1, "bugly_db_"

    .line 143
    invoke-virtual {p1, v1}, Landroid/content/Context;->getDatabasePath(Ljava/lang/String;)Ljava/io/File;

    move-result-object v1

    .line 144
    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result v1

    if-nez v1, :cond_8

    .line 146
    iput-boolean v0, p0, Lcom/tencent/bugly/proguard/aa;->J:Z

    const-string v0, "App is first time to be installed on the device."

    .line 147
    new-array v1, v6, [Ljava/lang/Object;

    invoke-static {v0, v1}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z
    :try_end_2
    .catch Ljava/lang/Throwable; {:try_start_2 .. :try_end_2} :catch_2

    goto :goto_2

    :catch_2
    move-exception v0

    .line 150
    sget-boolean v1, Lcom/tencent/bugly/proguard/p;->c:Z

    if-eqz v1, :cond_8

    .line 151
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_8
    :goto_2
    const-string v0, "BUGLY_COMMON_VALUES"

    .line 154
    invoke-static {v0, p1}, Lcom/tencent/bugly/proguard/ap;->a(Ljava/lang/String;Landroid/content/Context;)Landroid/content/SharedPreferences;

    move-result-object v0

    iput-object v0, p0, Lcom/tencent/bugly/proguard/aa;->O:Landroid/content/SharedPreferences;

    const-string v0, "BUGLY_RESERVED_VALUES"

    .line 155
    invoke-static {v0, p1}, Lcom/tencent/bugly/proguard/ap;->a(Ljava/lang/String;Landroid/content/Context;)Landroid/content/SharedPreferences;

    move-result-object v0

    iput-object v0, p0, Lcom/tencent/bugly/proguard/aa;->P:Landroid/content/SharedPreferences;

    .line 156
    invoke-static {p1}, Lcom/tencent/bugly/proguard/ab;->a(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tencent/bugly/proguard/aa;->aj:Ljava/lang/String;

    .line 157
    invoke-direct {p0}, Lcom/tencent/bugly/proguard/aa;->E()V

    .line 158
    new-array p1, v6, [Ljava/lang/Object;

    const-string v0, "com info create end"

    invoke-static {v0, p1}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    return-void
.end method

.method public static B()I
    .locals 1

    .line 1046
    invoke-static {}, Lcom/tencent/bugly/proguard/ab;->c()I

    move-result v0

    return v0
.end method

.method public static C()Z
    .locals 3
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    const/4 v0, 0x0

    .line 1057
    new-array v1, v0, [Ljava/lang/Object;

    const-string v2, "Detect if the emulator is unavailable"

    invoke-static {v2, v1}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/String;[Ljava/lang/Object;)Z

    return v0
.end method

.method public static D()Z
    .locals 3
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    const/4 v0, 0x0

    .line 1069
    new-array v1, v0, [Ljava/lang/Object;

    const-string v2, "Detect if the device hook is unavailable"

    invoke-static {v2, v1}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/String;[Ljava/lang/Object;)Z

    return v0
.end method

.method private E()V
    .locals 8

    .line 163
    :try_start_0
    iget-object v0, p0, Lcom/tencent/bugly/proguard/aa;->P:Landroid/content/SharedPreferences;

    invoke-interface {v0}, Landroid/content/SharedPreferences;->getAll()Ljava/util/Map;

    move-result-object v0

    .line 164
    invoke-interface {v0}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    const/4 v2, 0x2

    const/4 v3, 0x1

    const/4 v4, 0x0

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    const-string v5, "put reserved request data from sp, key:%s value:%s"

    .line 165
    new-array v2, v2, [Ljava/lang/Object;

    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v6

    aput-object v6, v2, v4

    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v6

    aput-object v6, v2, v3

    invoke-static {v5, v2}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 166
    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {p0, v2, v1, v4}, Lcom/tencent/bugly/proguard/aa;->a(Ljava/lang/String;Ljava/lang/String;Z)V

    goto :goto_0

    .line 168
    :cond_0
    sget-object v0, Lcom/tencent/bugly/proguard/aa;->W:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_1
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    const-string v5, "put reserved request data from cache, key:%s value:%s"

    .line 169
    new-array v6, v2, [Ljava/lang/Object;

    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v7

    aput-object v7, v6, v4

    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v7

    aput-object v7, v6, v3

    invoke-static {v5, v6}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 170
    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Ljava/lang/String;

    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-direct {p0, v5, v1, v3}, Lcom/tencent/bugly/proguard/aa;->a(Ljava/lang/String;Ljava/lang/String;Z)V

    goto :goto_1

    .line 172
    :cond_1
    sget-object v0, Lcom/tencent/bugly/proguard/aa;->W:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->clear()V
    :try_end_0
    .catch Ljava/lang/Throwable; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    .line 174
    invoke-static {v0}, Lcom/tencent/bugly/proguard/al;->b(Ljava/lang/Throwable;)Z

    return-void
.end method

.method private F()Ljava/lang/String;
    .locals 2

    .line 438
    iget-object v0, p0, Lcom/tencent/bugly/proguard/aa;->ad:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    const-string v1, "androidid"

    .line 440
    invoke-static {v1, v0}, Lcom/tencent/bugly/proguard/ap;->d(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tencent/bugly/proguard/aa;->ad:Ljava/lang/String;

    .line 442
    :cond_0
    iget-object v0, p0, Lcom/tencent/bugly/proguard/aa;->ad:Ljava/lang/String;

    return-object v0
.end method

.method private static G()Ljava/lang/String;
    .locals 3

    .line 451
    invoke-static {}, Ljava/util/UUID;->randomUUID()Ljava/util/UUID;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/UUID;->toString()Ljava/lang/String;

    move-result-object v0

    .line 452
    invoke-static {v0}, Lcom/tencent/bugly/proguard/ap;->b(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_0

    const-string v1, "-"

    const-string v2, ""

    .line 453
    invoke-virtual {v0, v1, v2}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    :cond_0
    return-object v0
.end method

.method public static declared-synchronized a(Landroid/content/Context;)Lcom/tencent/bugly/proguard/aa;
    .locals 2

    const-class v0, Lcom/tencent/bugly/proguard/aa;

    monitor-enter v0

    .line 284
    :try_start_0
    sget-object v1, Lcom/tencent/bugly/proguard/aa;->aq:Lcom/tencent/bugly/proguard/aa;

    if-nez v1, :cond_0

    .line 285
    new-instance v1, Lcom/tencent/bugly/proguard/aa;

    invoke-direct {v1, p0}, Lcom/tencent/bugly/proguard/aa;-><init>(Landroid/content/Context;)V

    sput-object v1, Lcom/tencent/bugly/proguard/aa;->aq:Lcom/tencent/bugly/proguard/aa;

    .line 287
    :cond_0
    sget-object p0, Lcom/tencent/bugly/proguard/aa;->aq:Lcom/tencent/bugly/proguard/aa;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit v0

    return-object p0

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method private a(Ljava/lang/String;Ljava/lang/String;Z)V
    .locals 3

    .line 892
    invoke-static {p1}, Lcom/tencent/bugly/proguard/ap;->b(Ljava/lang/String;)Z

    move-result v0

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-eqz v0, :cond_0

    .line 893
    new-array p2, v1, [Ljava/lang/Object;

    aput-object p1, p2, v2

    const-string p1, "key should not be empty %s"

    invoke-static {p1, p2}, Lcom/tencent/bugly/proguard/al;->d(Ljava/lang/String;[Ljava/lang/Object;)Z

    return-void

    :cond_0
    const/4 v0, 0x3

    .line 896
    new-array v0, v0, [Ljava/lang/Object;

    aput-object p1, v0, v2

    aput-object p2, v0, v1

    const/4 v1, 0x2

    invoke-static {p3}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v2

    aput-object v2, v0, v1

    const-string v1, "putExtraRequestData key:%s value:%s save:%s"

    invoke-static {v1, v0}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 897
    iget-object v0, p0, Lcom/tencent/bugly/proguard/aa;->ax:Ljava/lang/Object;

    monitor-enter v0

    .line 898
    :try_start_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 899
    iget-object p2, p0, Lcom/tencent/bugly/proguard/aa;->as:Ljava/util/Map;

    invoke-interface {p2, p1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 900
    iget-object p2, p0, Lcom/tencent/bugly/proguard/aa;->P:Landroid/content/SharedPreferences;

    invoke-interface {p2}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object p2

    invoke-interface {p2, p1}, Landroid/content/SharedPreferences$Editor;->remove(Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    move-result-object p1

    invoke-interface {p1}, Landroid/content/SharedPreferences$Editor;->apply()V

    goto :goto_0

    .line 902
    :cond_1
    iget-object v1, p0, Lcom/tencent/bugly/proguard/aa;->as:Ljava/util/Map;

    invoke-interface {v1, p1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    if-eqz p3, :cond_2

    .line 904
    iget-object p3, p0, Lcom/tencent/bugly/proguard/aa;->P:Landroid/content/SharedPreferences;

    invoke-interface {p3}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object p3

    invoke-interface {p3, p1, p2}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    move-result-object p1

    invoke-interface {p1}, Landroid/content/SharedPreferences$Editor;->apply()V

    .line 907
    :cond_2
    :goto_0
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method

.method public static declared-synchronized b()Lcom/tencent/bugly/proguard/aa;
    .locals 2

    const-class v0, Lcom/tencent/bugly/proguard/aa;

    monitor-enter v0

    .line 296
    :try_start_0
    sget-object v1, Lcom/tencent/bugly/proguard/aa;->aq:Lcom/tencent/bugly/proguard/aa;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit v0

    return-object v1

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1
.end method

.method public static n()Ljava/lang/String;
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    const-string v0, ""

    return-object v0
.end method


# virtual methods
.method public final declared-synchronized A()Ljava/util/Map;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/tencent/bugly/crashreport/common/info/PlugInBean;",
            ">;"
        }
    .end annotation

    monitor-enter p0

    .line 1032
    :try_start_0
    iget-object v0, p0, Lcom/tencent/bugly/proguard/aa;->ao:Ljava/util/Map;

    .line 1033
    iget-object v1, p0, Lcom/tencent/bugly/proguard/aa;->ap:Ljava/util/Map;

    if-eqz v1, :cond_0

    .line 1034
    iget-object v1, p0, Lcom/tencent/bugly/proguard/aa;->ap:Ljava/util/Map;

    invoke-interface {v0, v1}, Ljava/util/Map;->putAll(Ljava/util/Map;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1036
    :cond_0
    monitor-exit p0

    return-object v0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public final a(IZ)V
    .locals 4

    const/4 v0, 0x2

    .line 265
    new-array v0, v0, [Ljava/lang/Object;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const/4 v2, 0x0

    aput-object v1, v0, v2

    invoke-static {p2}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    const/4 v3, 0x1

    aput-object v1, v0, v3

    const-string v1, "setActivityForeState, hash:%s isFore:%s"

    invoke-static {v1, v0}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    if-eqz p2, :cond_0

    .line 267
    iget-object p2, p0, Lcom/tencent/bugly/proguard/aa;->ay:Ljava/util/List;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    invoke-interface {p2, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    .line 269
    :cond_0
    iget-object p2, p0, Lcom/tencent/bugly/proguard/aa;->ay:Ljava/util/List;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    invoke-interface {p2, p1}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    .line 270
    iget-object p1, p0, Lcom/tencent/bugly/proguard/aa;->ay:Ljava/util/List;

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    invoke-interface {p1, p2}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    .line 272
    :goto_0
    iget-object p1, p0, Lcom/tencent/bugly/proguard/aa;->N:Lcom/tencent/bugly/proguard/q;

    if-eqz p1, :cond_2

    .line 273
    iget-object p2, p0, Lcom/tencent/bugly/proguard/aa;->ay:Ljava/util/List;

    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result p2

    if-lez p2, :cond_1

    const/4 v2, 0x1

    :cond_1
    invoke-interface {p1, v2}, Lcom/tencent/bugly/proguard/q;->setNativeIsAppForeground(Z)Z

    :cond_2
    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 3

    .line 465
    iput-object p1, p0, Lcom/tencent/bugly/proguard/aa;->aa:Ljava/lang/String;

    .line 466
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, "deviceId"

    .line 467
    invoke-static {v0, p1}, Lcom/tencent/bugly/proguard/ap;->c(Ljava/lang/String;Ljava/lang/String;)V

    .line 469
    :cond_0
    iget-object v0, p0, Lcom/tencent/bugly/proguard/aa;->ax:Ljava/lang/Object;

    monitor-enter v0

    .line 470
    :try_start_0
    iget-object v1, p0, Lcom/tencent/bugly/proguard/aa;->as:Ljava/util/Map;

    const-string v2, "E8"

    invoke-interface {v1, v2, p1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 471
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 854
    invoke-static {p1}, Lcom/tencent/bugly/proguard/ap;->b(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_1

    invoke-static {p2}, Lcom/tencent/bugly/proguard/ap;->b(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    .line 858
    :cond_0
    iget-object v0, p0, Lcom/tencent/bugly/proguard/aa;->av:Ljava/lang/Object;

    monitor-enter v0

    .line 859
    :try_start_0
    iget-object v1, p0, Lcom/tencent/bugly/proguard/aa;->ar:Ljava/util/Map;

    invoke-interface {v1, p1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 860
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1

    :cond_1
    :goto_0
    const/4 v0, 0x2

    .line 855
    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    aput-object p1, v0, v1

    const/4 p1, 0x1

    invoke-static {p2}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p2

    aput-object p2, v0, p1

    const-string p1, "key&value should not be empty %s %s"

    invoke-static {p1, v0}, Lcom/tencent/bugly/proguard/al;->d(Ljava/lang/String;[Ljava/lang/Object;)Z

    return-void
.end method

.method public final a()Z
    .locals 4

    .line 253
    iget-object v0, p0, Lcom/tencent/bugly/proguard/aa;->ay:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-lez v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    .line 254
    :goto_0
    new-array v1, v1, [Ljava/lang/Object;

    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v3

    aput-object v3, v1, v2

    const-string v2, "isAppForeground:%s"

    invoke-static {v2, v1}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    return v0
.end method

.method public final b(Ljava/lang/String;)V
    .locals 3

    const/4 v0, 0x2

    .line 507
    new-array v0, v0, [Ljava/lang/Object;

    iget-object v1, p0, Lcom/tencent/bugly/proguard/aa;->Z:Ljava/lang/String;

    const/4 v2, 0x0

    aput-object v1, v0, v2

    const/4 v1, 0x1

    aput-object p1, v0, v1

    const-string v1, "change deviceModel\uff0cold:%s new:%s"

    invoke-static {v1, v0}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 508
    iput-object p1, p0, Lcom/tencent/bugly/proguard/aa;->Z:Ljava/lang/String;

    .line 509
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, "deviceModel"

    .line 510
    invoke-static {v0, p1}, Lcom/tencent/bugly/proguard/ap;->c(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final b(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 928
    invoke-static {p1}, Lcom/tencent/bugly/proguard/ap;->b(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_1

    invoke-static {p2}, Lcom/tencent/bugly/proguard/ap;->b(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    .line 933
    :cond_0
    iget-object v0, p0, Lcom/tencent/bugly/proguard/aa;->aw:Ljava/lang/Object;

    monitor-enter v0

    .line 934
    :try_start_0
    iget-object v1, p0, Lcom/tencent/bugly/proguard/aa;->at:Ljava/util/Map;

    invoke-interface {v1, p1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 935
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1

    :cond_1
    :goto_0
    const/4 v0, 0x2

    .line 929
    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    aput-object p1, v0, v1

    const/4 p1, 0x1

    invoke-static {p2}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p2

    aput-object p2, v0, p1

    const-string p1, "server key&value should not be empty %s %s"

    invoke-static {p1, v0}, Lcom/tencent/bugly/proguard/al;->d(Ljava/lang/String;[Ljava/lang/Object;)Z

    return-void
.end method

.method public final c()V
    .locals 2

    .line 312
    iget-object v0, p0, Lcom/tencent/bugly/proguard/aa;->au:Ljava/lang/Object;

    monitor-enter v0

    .line 313
    :try_start_0
    invoke-static {}, Ljava/util/UUID;->randomUUID()Ljava/util/UUID;

    move-result-object v1

    invoke-virtual {v1}, Ljava/util/UUID;->toString()Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/tencent/bugly/proguard/aa;->Y:Ljava/lang/String;

    .line 314
    monitor-exit v0

    return-void

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method public final declared-synchronized c(Ljava/lang/String;)V
    .locals 0

    monitor-enter p0

    .line 529
    :try_start_0
    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tencent/bugly/proguard/aa;->ab:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 530
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final d()Ljava/lang/String;
    .locals 2

    .line 323
    iget-object v0, p0, Lcom/tencent/bugly/proguard/aa;->au:Ljava/lang/Object;

    monitor-enter v0

    .line 324
    :try_start_0
    iget-object v1, p0, Lcom/tencent/bugly/proguard/aa;->Y:Ljava/lang/String;

    if-nez v1, :cond_0

    .line 325
    invoke-virtual {p0}, Lcom/tencent/bugly/proguard/aa;->c()V

    .line 327
    :cond_0
    iget-object v1, p0, Lcom/tencent/bugly/proguard/aa;->Y:Ljava/lang/String;

    monitor-exit v0

    return-object v1

    :catchall_0
    move-exception v1

    .line 328
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method public final declared-synchronized d(Ljava/lang/String;)V
    .locals 0

    monitor-enter p0

    .line 547
    :try_start_0
    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tencent/bugly/proguard/aa;->ac:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 548
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final e()Ljava/lang/String;
    .locals 1

    .line 337
    iget-object v0, p0, Lcom/tencent/bugly/proguard/aa;->e:Ljava/lang/String;

    invoke-static {v0}, Lcom/tencent/bugly/proguard/ap;->b(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 338
    iget-object v0, p0, Lcom/tencent/bugly/proguard/aa;->e:Ljava/lang/String;

    return-object v0

    .line 340
    :cond_0
    iget-object v0, p0, Lcom/tencent/bugly/proguard/aa;->r:Ljava/lang/String;

    return-object v0
.end method

.method public final e(Ljava/lang/String;)V
    .locals 1

    .line 622
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 623
    invoke-virtual {p1}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tencent/bugly/proguard/aa;->ai:Ljava/lang/String;

    :cond_0
    return-void
.end method

.method public final f()Ljava/lang/String;
    .locals 2

    .line 359
    iget-object v0, p0, Lcom/tencent/bugly/proguard/aa;->V:Ljava/lang/Object;

    monitor-enter v0

    .line 360
    :try_start_0
    iget-object v1, p0, Lcom/tencent/bugly/proguard/aa;->l:Ljava/lang/String;

    monitor-exit v0

    return-object v1

    :catchall_0
    move-exception v1

    .line 361
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method public final f(Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    .line 813
    invoke-static {p1}, Lcom/tencent/bugly/proguard/ap;->b(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    .line 814
    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    aput-object p1, v0, v1

    const-string p1, "key should not be empty %s"

    invoke-static {p1, v0}, Lcom/tencent/bugly/proguard/al;->d(Ljava/lang/String;[Ljava/lang/Object;)Z

    const/4 p1, 0x0

    return-object p1

    .line 817
    :cond_0
    iget-object v0, p0, Lcom/tencent/bugly/proguard/aa;->av:Ljava/lang/Object;

    monitor-enter v0

    .line 818
    :try_start_0
    iget-object v1, p0, Lcom/tencent/bugly/proguard/aa;->ar:Ljava/util/Map;

    invoke-interface {v1, p1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    monitor-exit v0

    return-object p1

    :catchall_0
    move-exception p1

    .line 819
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method

.method public final g()Ljava/lang/String;
    .locals 2

    .line 410
    iget-object v0, p0, Lcom/tencent/bugly/proguard/aa;->aa:Ljava/lang/String;

    if-eqz v0, :cond_0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    const-string v1, "deviceId"

    .line 414
    invoke-static {v1, v0}, Lcom/tencent/bugly/proguard/ap;->d(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tencent/bugly/proguard/aa;->aa:Ljava/lang/String;

    .line 415
    iget-object v0, p0, Lcom/tencent/bugly/proguard/aa;->aa:Ljava/lang/String;

    if-eqz v0, :cond_1

    return-object v0

    .line 420
    :cond_1
    invoke-direct {p0}, Lcom/tencent/bugly/proguard/aa;->F()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tencent/bugly/proguard/aa;->aa:Ljava/lang/String;

    .line 421
    iget-object v0, p0, Lcom/tencent/bugly/proguard/aa;->aa:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 422
    invoke-static {}, Lcom/tencent/bugly/proguard/aa;->G()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tencent/bugly/proguard/aa;->aa:Ljava/lang/String;

    .line 425
    :cond_2
    iget-object v0, p0, Lcom/tencent/bugly/proguard/aa;->aa:Ljava/lang/String;

    if-eqz v0, :cond_3

    .line 426
    invoke-static {v1, v0}, Lcom/tencent/bugly/proguard/ap;->c(Ljava/lang/String;Ljava/lang/String;)V

    .line 427
    iget-object v0, p0, Lcom/tencent/bugly/proguard/aa;->aa:Ljava/lang/String;

    return-object v0

    :cond_3
    const-string v0, ""

    return-object v0
.end method

.method public final g(Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    .line 838
    invoke-static {p1}, Lcom/tencent/bugly/proguard/ap;->b(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    .line 839
    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    aput-object p1, v0, v1

    const-string p1, "key should not be empty %s"

    invoke-static {p1, v0}, Lcom/tencent/bugly/proguard/al;->d(Ljava/lang/String;[Ljava/lang/Object;)Z

    const/4 p1, 0x0

    return-object p1

    .line 842
    :cond_0
    iget-object v0, p0, Lcom/tencent/bugly/proguard/aa;->av:Ljava/lang/Object;

    monitor-enter v0

    .line 843
    :try_start_0
    iget-object v1, p0, Lcom/tencent/bugly/proguard/aa;->ar:Ljava/util/Map;

    invoke-interface {v1, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    monitor-exit v0

    return-object p1

    :catchall_0
    move-exception p1

    .line 844
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method

.method public final declared-synchronized h()Ljava/lang/String;
    .locals 4

    monitor-enter p0

    .line 480
    :try_start_0
    iget-object v0, p0, Lcom/tencent/bugly/proguard/aa;->Z:Ljava/lang/String;

    if-eqz v0, :cond_0

    .line 481
    iget-object v0, p0, Lcom/tencent/bugly/proguard/aa;->Z:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return-object v0

    :cond_0
    :try_start_1
    const-string v0, "deviceModel"

    const/4 v1, 0x0

    .line 484
    invoke-static {v0, v1}, Lcom/tencent/bugly/proguard/ap;->d(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tencent/bugly/proguard/aa;->Z:Ljava/lang/String;

    .line 485
    iget-object v0, p0, Lcom/tencent/bugly/proguard/aa;->Z:Ljava/lang/String;

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-eqz v0, :cond_1

    const-string v0, "collect device model from sp:%s"

    .line 486
    new-array v1, v1, [Ljava/lang/Object;

    iget-object v3, p0, Lcom/tencent/bugly/proguard/aa;->Z:Ljava/lang/String;

    aput-object v3, v1, v2

    invoke-static {v0, v1}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 487
    iget-object v0, p0, Lcom/tencent/bugly/proguard/aa;->Z:Ljava/lang/String;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    monitor-exit p0

    return-object v0

    .line 489
    :cond_1
    :try_start_2
    iget-boolean v0, p0, Lcom/tencent/bugly/proguard/aa;->n:Z

    if-nez v0, :cond_2

    const-string v0, "not allow collect device model"

    .line 490
    new-array v1, v2, [Ljava/lang/Object;

    invoke-static {v0, v1}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    const-string v0, "fail"
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 491
    monitor-exit p0

    return-object v0

    .line 495
    :cond_2
    :try_start_3
    invoke-static {}, Lcom/tencent/bugly/proguard/ab;->a()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tencent/bugly/proguard/aa;->Z:Ljava/lang/String;

    const-string v0, "collect device model:%s"

    .line 496
    new-array v1, v1, [Ljava/lang/Object;

    iget-object v3, p0, Lcom/tencent/bugly/proguard/aa;->Z:Ljava/lang/String;

    aput-object v3, v1, v2

    invoke-static {v0, v1}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    const-string v0, "deviceModel"

    .line 497
    iget-object v1, p0, Lcom/tencent/bugly/proguard/aa;->Z:Ljava/lang/String;

    invoke-static {v0, v1}, Lcom/tencent/bugly/proguard/ap;->c(Ljava/lang/String;Ljava/lang/String;)V

    .line 498
    iget-object v0, p0, Lcom/tencent/bugly/proguard/aa;->Z:Ljava/lang/String;
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    monitor-exit p0

    return-object v0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public final declared-synchronized i()Ljava/lang/String;
    .locals 1

    monitor-enter p0

    .line 538
    :try_start_0
    iget-object v0, p0, Lcom/tencent/bugly/proguard/aa;->ac:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return-object v0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public final j()J
    .locals 5

    .line 556
    iget-wide v0, p0, Lcom/tencent/bugly/proguard/aa;->ae:J

    const-wide/16 v2, 0x0

    cmp-long v4, v0, v2

    if-gtz v4, :cond_0

    .line 557
    invoke-static {}, Lcom/tencent/bugly/proguard/ab;->e()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/tencent/bugly/proguard/aa;->ae:J

    .line 559
    :cond_0
    iget-wide v0, p0, Lcom/tencent/bugly/proguard/aa;->ae:J

    return-wide v0
.end method

.method public final k()J
    .locals 5

    .line 568
    iget-wide v0, p0, Lcom/tencent/bugly/proguard/aa;->af:J

    const-wide/16 v2, 0x0

    cmp-long v4, v0, v2

    if-gtz v4, :cond_0

    .line 569
    invoke-static {}, Lcom/tencent/bugly/proguard/ab;->i()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/tencent/bugly/proguard/aa;->af:J

    .line 571
    :cond_0
    iget-wide v0, p0, Lcom/tencent/bugly/proguard/aa;->af:J

    return-wide v0
.end method

.method public final l()J
    .locals 5

    .line 580
    iget-wide v0, p0, Lcom/tencent/bugly/proguard/aa;->ag:J

    const-wide/16 v2, 0x0

    cmp-long v4, v0, v2

    if-gtz v4, :cond_0

    .line 581
    invoke-static {}, Lcom/tencent/bugly/proguard/ab;->k()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/tencent/bugly/proguard/aa;->ag:J

    .line 583
    :cond_0
    iget-wide v0, p0, Lcom/tencent/bugly/proguard/aa;->ag:J

    return-wide v0
.end method

.method public final m()Ljava/lang/String;
    .locals 3

    .line 605
    iget-object v0, p0, Lcom/tencent/bugly/proguard/aa;->ai:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-nez v0, :cond_0

    .line 606
    new-array v0, v2, [Ljava/lang/Object;

    iget-object v2, p0, Lcom/tencent/bugly/proguard/aa;->ai:Ljava/lang/String;

    aput-object v2, v0, v1

    const-string v1, "get cpu type from so:%s"

    invoke-static {v1, v0}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 607
    iget-object v0, p0, Lcom/tencent/bugly/proguard/aa;->ai:Ljava/lang/String;

    return-object v0

    .line 609
    :cond_0
    iget-object v0, p0, Lcom/tencent/bugly/proguard/aa;->aj:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 610
    new-array v0, v2, [Ljava/lang/Object;

    iget-object v2, p0, Lcom/tencent/bugly/proguard/aa;->aj:Ljava/lang/String;

    aput-object v2, v0, v1

    const-string v1, "get cpu type from lib dir:%s"

    invoke-static {v1, v0}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 611
    iget-object v0, p0, Lcom/tencent/bugly/proguard/aa;->aj:Ljava/lang/String;

    return-object v0

    :cond_1
    const-string v0, "unknown"

    return-object v0
.end method

.method public final o()Ljava/lang/String;
    .locals 6

    const/4 v0, 0x0

    .line 658
    :try_start_0
    iget-object v1, p0, Lcom/tencent/bugly/proguard/aa;->X:Landroid/content/Context;

    const-string v2, "BuglySdkInfos"

    invoke-virtual {v1, v2, v0}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v1

    .line 659
    invoke-interface {v1}, Landroid/content/SharedPreferences;->getAll()Ljava/util/Map;

    move-result-object v1

    .line 660
    invoke-interface {v1}, Ljava/util/Map;->isEmpty()Z

    move-result v2

    if-nez v2, :cond_1

    .line 661
    iget-object v2, p0, Lcom/tencent/bugly/proguard/aa;->T:Ljava/lang/Object;

    monitor-enter v2
    :try_end_0
    .catch Ljava/lang/Throwable; {:try_start_0 .. :try_end_0} :catch_1

    .line 662
    :try_start_1
    invoke-interface {v1}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_0

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/util/Map$Entry;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 664
    :try_start_2
    iget-object v4, p0, Lcom/tencent/bugly/proguard/aa;->K:Ljava/util/HashMap;

    invoke-interface {v3}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v5

    invoke-interface {v3}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v4, v5, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_2
    .catch Ljava/lang/Throwable; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_0

    :catch_0
    move-exception v3

    .line 666
    :try_start_3
    invoke-static {v3}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/Throwable;)Z

    goto :goto_0

    .line 669
    :cond_0
    monitor-exit v2

    goto :goto_1

    :catchall_0
    move-exception v1

    monitor-exit v2
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    :try_start_4
    throw v1
    :try_end_4
    .catch Ljava/lang/Throwable; {:try_start_4 .. :try_end_4} :catch_1

    :catch_1
    move-exception v1

    .line 672
    invoke-static {v1}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/Throwable;)Z

    .line 674
    :cond_1
    :goto_1
    iget-object v1, p0, Lcom/tencent/bugly/proguard/aa;->K:Ljava/util/HashMap;

    invoke-virtual {v1}, Ljava/util/HashMap;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_3

    .line 675
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    .line 676
    iget-object v2, p0, Lcom/tencent/bugly/proguard/aa;->K:Ljava/util/HashMap;

    invoke-virtual {v2}, Ljava/util/HashMap;->entrySet()Ljava/util/Set;

    move-result-object v2

    invoke-interface {v2}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :goto_2
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_2

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/util/Map$Entry;

    const-string v4, "["

    .line 677
    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 678
    invoke-interface {v3}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, ","

    .line 679
    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 680
    invoke-interface {v3}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "] "

    .line 681
    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_2

    :cond_2
    const/4 v2, 0x1

    .line 683
    new-array v2, v2, [Ljava/lang/Object;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    aput-object v3, v2, v0

    const-string v0, "SDK_INFO = %s"

    invoke-static {v0, v2}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 684
    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v2, "SDK_INFO"

    invoke-virtual {p0, v2, v0}, Lcom/tencent/bugly/proguard/aa;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 685
    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 687
    :cond_3
    new-array v0, v0, [Ljava/lang/Object;

    const-string v1, "SDK_INFO is empty"

    invoke-static {v1, v0}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    const/4 v0, 0x0

    return-object v0
.end method

.method public final declared-synchronized p()Ljava/util/Map;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/tencent/bugly/crashreport/common/info/PlugInBean;",
            ">;"
        }
    .end annotation

    monitor-enter p0

    .line 698
    :try_start_0
    iget-object v0, p0, Lcom/tencent/bugly/proguard/aa;->ak:Ljava/util/Map;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/tencent/bugly/proguard/aa;->ak:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->size()I

    move-result v0

    if-gtz v0, :cond_0

    goto :goto_0

    .line 702
    :cond_0
    new-instance v0, Ljava/util/HashMap;

    iget-object v1, p0, Lcom/tencent/bugly/proguard/aa;->ak:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map;->size()I

    move-result v1

    invoke-direct {v0, v1}, Ljava/util/HashMap;-><init>(I)V

    .line 703
    iget-object v1, p0, Lcom/tencent/bugly/proguard/aa;->ak:Ljava/util/Map;

    invoke-interface {v0, v1}, Ljava/util/Map;->putAll(Ljava/util/Map;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 704
    monitor-exit p0

    return-object v0

    :cond_1
    :goto_0
    const/4 v0, 0x0

    .line 699
    monitor-exit p0

    return-object v0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public final q()Ljava/lang/String;
    .locals 1

    .line 743
    iget-object v0, p0, Lcom/tencent/bugly/proguard/aa;->al:Ljava/lang/String;

    if-nez v0, :cond_0

    .line 744
    invoke-static {}, Lcom/tencent/bugly/proguard/ab;->m()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tencent/bugly/proguard/aa;->al:Ljava/lang/String;

    .line 746
    :cond_0
    iget-object v0, p0, Lcom/tencent/bugly/proguard/aa;->al:Ljava/lang/String;

    return-object v0
.end method

.method public final r()Ljava/lang/Boolean;
    .locals 1

    .line 764
    iget-object v0, p0, Lcom/tencent/bugly/proguard/aa;->am:Ljava/lang/Boolean;

    if-nez v0, :cond_0

    .line 765
    invoke-static {}, Lcom/tencent/bugly/proguard/ab;->q()Z

    move-result v0

    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    iput-object v0, p0, Lcom/tencent/bugly/proguard/aa;->am:Ljava/lang/Boolean;

    .line 767
    :cond_0
    iget-object v0, p0, Lcom/tencent/bugly/proguard/aa;->am:Ljava/lang/Boolean;

    return-object v0
.end method

.method public final s()Ljava/lang/String;
    .locals 3

    .line 785
    iget-object v0, p0, Lcom/tencent/bugly/proguard/aa;->an:Ljava/lang/String;

    if-nez v0, :cond_0

    .line 786
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/tencent/bugly/proguard/ab;->n()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tencent/bugly/proguard/aa;->an:Ljava/lang/String;

    const/4 v0, 0x1

    .line 787
    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    iget-object v2, p0, Lcom/tencent/bugly/proguard/aa;->an:Ljava/lang/String;

    aput-object v2, v0, v1

    const-string v1, "ROM ID: %s"

    invoke-static {v1, v0}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 789
    :cond_0
    iget-object v0, p0, Lcom/tencent/bugly/proguard/aa;->an:Ljava/lang/String;

    return-object v0
.end method

.method public final t()Ljava/util/Map;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 798
    iget-object v0, p0, Lcom/tencent/bugly/proguard/aa;->av:Ljava/lang/Object;

    monitor-enter v0

    .line 799
    :try_start_0
    iget-object v1, p0, Lcom/tencent/bugly/proguard/aa;->ar:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map;->size()I

    move-result v1

    if-gtz v1, :cond_0

    const/4 v1, 0x0

    .line 800
    monitor-exit v0

    return-object v1

    .line 802
    :cond_0
    new-instance v1, Ljava/util/HashMap;

    iget-object v2, p0, Lcom/tencent/bugly/proguard/aa;->ar:Ljava/util/Map;

    invoke-direct {v1, v2}, Ljava/util/HashMap;-><init>(Ljava/util/Map;)V

    monitor-exit v0

    return-object v1

    :catchall_0
    move-exception v1

    .line 803
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method public final u()V
    .locals 2

    .line 826
    iget-object v0, p0, Lcom/tencent/bugly/proguard/aa;->av:Ljava/lang/Object;

    monitor-enter v0

    .line 827
    :try_start_0
    iget-object v1, p0, Lcom/tencent/bugly/proguard/aa;->ar:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map;->clear()V

    .line 828
    monitor-exit v0

    return-void

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method public final v()I
    .locals 2

    .line 869
    iget-object v0, p0, Lcom/tencent/bugly/proguard/aa;->av:Ljava/lang/Object;

    monitor-enter v0

    .line 870
    :try_start_0
    iget-object v1, p0, Lcom/tencent/bugly/proguard/aa;->ar:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map;->size()I

    move-result v1

    monitor-exit v0

    return v1

    :catchall_0
    move-exception v1

    .line 871
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method public final w()Ljava/util/Set;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Set<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 880
    iget-object v0, p0, Lcom/tencent/bugly/proguard/aa;->av:Ljava/lang/Object;

    monitor-enter v0

    .line 881
    :try_start_0
    iget-object v1, p0, Lcom/tencent/bugly/proguard/aa;->ar:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map;->keySet()Ljava/util/Set;

    move-result-object v1

    monitor-exit v0

    return-object v1

    :catchall_0
    move-exception v1

    .line 882
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method public final x()Ljava/util/Map;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 916
    iget-object v0, p0, Lcom/tencent/bugly/proguard/aa;->ax:Ljava/lang/Object;

    monitor-enter v0

    .line 917
    :try_start_0
    iget-object v1, p0, Lcom/tencent/bugly/proguard/aa;->as:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map;->size()I

    move-result v1

    if-gtz v1, :cond_0

    const/4 v1, 0x0

    .line 918
    monitor-exit v0

    return-object v1

    .line 920
    :cond_0
    new-instance v1, Ljava/util/HashMap;

    iget-object v2, p0, Lcom/tencent/bugly/proguard/aa;->as:Ljava/util/Map;

    invoke-direct {v1, v2}, Ljava/util/HashMap;-><init>(Ljava/util/Map;)V

    monitor-exit v0

    return-object v1

    :catchall_0
    move-exception v1

    .line 921
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method public final y()Ljava/util/Map;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 944
    iget-object v0, p0, Lcom/tencent/bugly/proguard/aa;->aw:Ljava/lang/Object;

    monitor-enter v0

    .line 945
    :try_start_0
    iget-object v1, p0, Lcom/tencent/bugly/proguard/aa;->at:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map;->size()I

    move-result v1

    if-gtz v1, :cond_0

    const/4 v1, 0x0

    .line 946
    monitor-exit v0

    return-object v1

    .line 948
    :cond_0
    new-instance v1, Ljava/util/HashMap;

    iget-object v2, p0, Lcom/tencent/bugly/proguard/aa;->at:Ljava/util/Map;

    invoke-direct {v1, v2}, Ljava/util/HashMap;-><init>(Ljava/util/Map;)V

    monitor-exit v0

    return-object v1

    :catchall_0
    move-exception v1

    .line 949
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method public final z()I
    .locals 2

    .line 974
    iget-object v0, p0, Lcom/tencent/bugly/proguard/aa;->U:Ljava/lang/Object;

    monitor-enter v0

    .line 975
    :try_start_0
    iget v1, p0, Lcom/tencent/bugly/proguard/aa;->w:I

    monitor-exit v0

    return v1

    :catchall_0
    move-exception v1

    .line 976
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method
