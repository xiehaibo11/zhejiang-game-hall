.class public Lcom/mbridge/msdk/mbnative/controller/NativeController;
.super Ljava/lang/Object;
.source "NativeController.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mbridge/msdk/mbnative/controller/NativeController$b;,
        Lcom/mbridge/msdk/mbnative/controller/NativeController$g;,
        Lcom/mbridge/msdk/mbnative/controller/NativeController$d;,
        Lcom/mbridge/msdk/mbnative/controller/NativeController$a;,
        Lcom/mbridge/msdk/mbnative/controller/NativeController$c;,
        Lcom/mbridge/msdk/mbnative/controller/NativeController$f;,
        Lcom/mbridge/msdk/mbnative/controller/NativeController$e;
    }
.end annotation


# static fields
.field private static B:Z

.field public static c:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Long;",
            ">;"
        }
    .end annotation
.end field

.field private static final e:Ljava/lang/String;


# instance fields
.field private A:Z

.field private C:I

.field private D:I

.field private E:I

.field private F:I

.field private G:Lcom/mbridge/msdk/foundation/same/e/b;

.field private H:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Boolean;",
            ">;"
        }
    .end annotation
.end field

.field private I:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/mbnative/controller/a;",
            ">;"
        }
    .end annotation
.end field

.field private J:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/mbnative/controller/a$a;",
            ">;"
        }
    .end annotation
.end field

.field private K:Ljava/util/concurrent/CopyOnWriteArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/CopyOnWriteArrayList<",
            "Lcom/mbridge/msdk/foundation/same/e/a;",
            ">;"
        }
    .end annotation
.end field

.field private L:Ljava/util/Hashtable;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Hashtable<",
            "Ljava/lang/String;",
            "Lcom/iab/omid/library/mmadbridge/adsession/AdSession;",
            ">;"
        }
    .end annotation
.end field

.field private M:I

.field private N:Ljava/lang/String;

.field private O:Lcom/mbridge/msdk/foundation/db/i;

.field private P:I

.field private Q:Lcom/mbridge/msdk/mbnative/controller/NativeController$a;

.field private R:Z

.field private S:Z

.field private T:Ljava/lang/String;

.field private U:Ljava/util/Timer;

.field private V:Ljava/lang/String;

.field private W:Lcom/mbridge/msdk/c/d;

.field private X:J

.field private Y:I

.field private Z:I

.field protected a:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field private aa:Z

.field private ab:I

.field private ac:I

.field private ad:Z

.field protected b:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field d:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation
.end field

.field private f:Lcom/mbridge/msdk/c/c;

.field private g:Lcom/mbridge/msdk/mbnative/c/a;

.field private h:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

.field private i:Landroid/content/Context;

.field private j:Ljava/lang/String;

.field private k:Ljava/lang/String;

.field private l:Ljava/util/Queue;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Queue<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field private m:Ljava/util/Queue;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Queue<",
            "Ljava/lang/Long;",
            ">;"
        }
    .end annotation
.end field

.field private n:Ljava/lang/String;

.field private o:Lcom/mbridge/msdk/mbnative/controller/NativeController$e;

.field private p:Lcom/mbridge/msdk/foundation/same/report/d;

.field private q:Ljava/lang/String;

.field private r:Lcom/mbridge/msdk/click/b;

.field private s:I

.field private t:I

.field private u:I

.field private v:I

.field private w:Ljava/lang/String;

.field private x:Z

.field private y:Z

.field private z:Z


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 94
    const-class v0, Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->e:Ljava/lang/String;

    .line 125
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->c:Ljava/util/Map;

    return-void
.end method

.method public constructor <init>()V
    .locals 2

    .line 330
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x1

    .line 110
    iput v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->s:I

    .line 111
    iput v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->t:I

    const/4 v1, -0x1

    .line 112
    iput v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->u:I

    const/4 v1, 0x0

    .line 113
    iput v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->v:I

    .line 117
    iput-boolean v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->y:Z

    .line 118
    iput-boolean v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->z:Z

    .line 119
    iput-boolean v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->A:Z

    .line 123
    iput v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->C:I

    .line 124
    iput v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->D:I

    .line 126
    iput v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->E:I

    .line 127
    iput v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->F:I

    .line 130
    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    iput-object v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->H:Ljava/util/Map;

    .line 134
    new-instance v1, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v1}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    iput-object v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->K:Ljava/util/concurrent/CopyOnWriteArrayList;

    .line 135
    new-instance v1, Ljava/util/Hashtable;

    invoke-direct {v1}, Ljava/util/Hashtable;-><init>()V

    iput-object v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->L:Ljava/util/Hashtable;

    .line 137
    iput v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->M:I

    const-string v0, ""

    .line 139
    iput-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->N:Ljava/lang/String;

    const/4 v1, 0x2

    .line 141
    iput v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->P:I

    .line 154
    iput-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->T:Ljava/lang/String;

    .line 158
    iput-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->V:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Lcom/mbridge/msdk/mbnative/c/a;Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;Ljava/util/Map;Landroid/content/Context;)V
    .locals 11
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/mbridge/msdk/mbnative/c/a;",
            "Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;",
            "Landroid/content/Context;",
            ")V"
        }
    .end annotation

    const-string v0, "native_info"

    const-string v1, "com.mbridge.msdk.videocommon.download.b"

    .line 203
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v2, 0x1

    .line 3341
    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    .line 110
    iput v2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->s:I

    .line 111
    iput v2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->t:I

    const/4 v4, -0x1

    .line 112
    iput v4, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->u:I

    const/4 v4, 0x0

    .line 113
    iput v4, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->v:I

    .line 117
    iput-boolean v4, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->y:Z

    .line 118
    iput-boolean v4, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->z:Z

    .line 119
    iput-boolean v4, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->A:Z

    .line 123
    iput v4, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->C:I

    .line 124
    iput v4, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->D:I

    .line 126
    iput v4, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->E:I

    .line 127
    iput v4, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->F:I

    .line 130
    new-instance v5, Ljava/util/HashMap;

    invoke-direct {v5}, Ljava/util/HashMap;-><init>()V

    iput-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->H:Ljava/util/Map;

    .line 134
    new-instance v5, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v5}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    iput-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->K:Ljava/util/concurrent/CopyOnWriteArrayList;

    .line 135
    new-instance v5, Ljava/util/Hashtable;

    invoke-direct {v5}, Ljava/util/Hashtable;-><init>()V

    iput-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->L:Ljava/util/Hashtable;

    .line 137
    iput v2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->M:I

    const-string v5, ""

    .line 139
    iput-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->N:Ljava/lang/String;

    const/4 v6, 0x2

    .line 141
    iput v6, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->P:I

    .line 154
    iput-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->T:Ljava/lang/String;

    .line 158
    iput-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->V:Ljava/lang/String;

    .line 204
    iput-object p4, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->i:Landroid/content/Context;

    .line 205
    iput-object p3, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->d:Ljava/util/Map;

    .line 206
    new-instance v7, Lcom/mbridge/msdk/c/c;

    invoke-direct {v7}, Lcom/mbridge/msdk/c/c;-><init>()V

    iput-object v7, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->f:Lcom/mbridge/msdk/c/c;

    .line 207
    iput-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->g:Lcom/mbridge/msdk/mbnative/c/a;

    .line 208
    iput-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->h:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    .line 209
    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    iput-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->I:Ljava/util/List;

    .line 210
    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    iput-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->J:Ljava/util/List;

    const-string p1, "unit_id"

    .line 211
    invoke-interface {p3, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    iput-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->j:Ljava/lang/String;

    .line 212
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 213
    sget-object p1, Lcom/mbridge/msdk/mbnative/controller/NativeController;->e:Ljava/lang/String;

    const-string p2, "load error,make sure you have correct unitid"

    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 217
    :cond_0
    sget-object p1, Lcom/mbridge/msdk/MBridgeConstans;->PLACEMENT_ID:Ljava/lang/String;

    invoke-interface {p3, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    sget-object p1, Lcom/mbridge/msdk/MBridgeConstans;->PLACEMENT_ID:Ljava/lang/String;

    invoke-interface {p3, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 218
    sget-object p1, Lcom/mbridge/msdk/MBridgeConstans;->PLACEMENT_ID:Ljava/lang/String;

    invoke-interface {p3, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    iput-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->k:Ljava/lang/String;

    goto :goto_0

    .line 220
    :cond_1
    iput-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->k:Ljava/lang/String;

    :goto_0
    const-string p1, "isPreloadImg"

    .line 223
    invoke-interface {p3, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_2

    .line 224
    invoke-interface {p3, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/Boolean;

    invoke-virtual {p1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p1

    sput-boolean p1, Lcom/mbridge/msdk/mbnative/controller/NativeController;->B:Z

    .line 226
    :cond_2
    new-instance p1, Ljava/util/LinkedList;

    invoke-direct {p1}, Ljava/util/LinkedList;-><init>()V

    iput-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->l:Ljava/util/Queue;

    .line 227
    new-instance p1, Ljava/util/LinkedList;

    invoke-direct {p1}, Ljava/util/LinkedList;-><init>()V

    iput-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->m:Ljava/util/Queue;

    .line 228
    new-instance p1, Lcom/mbridge/msdk/foundation/same/e/b;

    iget-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->i:Landroid/content/Context;

    invoke-direct {p1, p2}, Lcom/mbridge/msdk/foundation/same/e/b;-><init>(Landroid/content/Context;)V

    iput-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->G:Lcom/mbridge/msdk/foundation/same/e/b;

    .line 229
    invoke-static {}, Landroid/os/Looper;->myLooper()Landroid/os/Looper;

    move-result-object p1

    if-nez p1, :cond_3

    .line 230
    invoke-static {}, Landroid/os/Looper;->prepare()V

    .line 232
    :cond_3
    new-instance p1, Lcom/mbridge/msdk/mbnative/controller/NativeController$e;

    invoke-direct {p1, p0}, Lcom/mbridge/msdk/mbnative/controller/NativeController$e;-><init>(Lcom/mbridge/msdk/mbnative/controller/NativeController;)V

    iput-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->o:Lcom/mbridge/msdk/mbnative/controller/NativeController$e;

    const-string p1, "catetory"

    .line 233
    invoke-interface {p3, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_4

    .line 234
    invoke-interface {p3, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    iput-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->w:Ljava/lang/String;

    .line 238
    :cond_4
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/mbnative/controller/b;->b()Ljava/util/Map;

    move-result-object p1

    iget-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->j:Ljava/lang/String;

    invoke-interface {p1, p2}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_5

    .line 239
    invoke-static {}, Lcom/mbridge/msdk/mbnative/controller/b;->b()Ljava/util/Map;

    move-result-object p1

    iget-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->j:Ljava/lang/String;

    invoke-interface {p1, p2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/Boolean;

    invoke-virtual {p1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :cond_5
    move p1, v4

    :goto_1
    const-string p2, "ad_frame_num"

    const-string v7, "ad_num"

    if-nez p1, :cond_9

    .line 242
    :try_start_1
    invoke-interface {p3, v7}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_8

    .line 243
    invoke-interface {p3, v7}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/Integer;

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result p1

    if-ge p1, v2, :cond_6

    move p1, v2

    :cond_6
    const/16 v7, 0xa

    if-le p1, v7, :cond_7

    move p1, v7

    .line 250
    :cond_7
    iput p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->t:I

    .line 251
    iput p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->s:I

    .line 254
    :cond_8
    invoke-interface {p3, p2}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_b

    .line 255
    invoke-interface {p3, p2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/Integer;

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result p1

    iput p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->E:I

    goto :goto_2

    .line 259
    :cond_9
    invoke-static {}, Lcom/mbridge/msdk/mbnative/controller/b;->d()Ljava/util/Map;

    move-result-object p1

    iget-object v8, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->j:Ljava/lang/String;

    invoke-interface {p1, v8}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_b

    .line 260
    invoke-static {}, Lcom/mbridge/msdk/mbnative/controller/b;->d()Ljava/util/Map;

    move-result-object p1

    iget-object v8, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->j:Ljava/lang/String;

    invoke-interface {p1, v8}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/Integer;

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result p1

    iput p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->t:I

    .line 261
    invoke-interface {p3, v7}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_a

    .line 262
    invoke-interface {p3, v7}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/Integer;

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result p1

    iput p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->C:I

    iput p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->s:I

    .line 264
    :cond_a
    invoke-interface {p3, p2}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_b

    .line 265
    invoke-interface {p3, p2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/Integer;

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result p1

    iput p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->D:I

    iput p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->E:I
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_2

    :catch_0
    move-exception p1

    .line 270
    sget-object p2, Lcom/mbridge/msdk/mbnative/controller/NativeController;->e:Ljava/lang/String;

    invoke-static {p1}, Lcom/mbridge/msdk/mbnative/b/a;->a(Ljava/lang/Exception;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 273
    :cond_b
    :goto_2
    new-instance p1, Lcom/mbridge/msdk/foundation/same/report/d;

    iget-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->i:Landroid/content/Context;

    invoke-direct {p1, p2}, Lcom/mbridge/msdk/foundation/same/report/d;-><init>(Landroid/content/Context;)V

    iput-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->p:Lcom/mbridge/msdk/foundation/same/report/d;

    .line 274
    new-instance p1, Lcom/mbridge/msdk/click/b;

    iget-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->i:Landroid/content/Context;

    iget-object v7, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->j:Ljava/lang/String;

    invoke-direct {p1, p2, v7}, Lcom/mbridge/msdk/click/b;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    iput-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->r:Lcom/mbridge/msdk/click/b;

    :try_start_2
    const-string p1, "com.mbridge.msdk.nativex.view.MBMediaView"

    .line 278
    invoke-static {p1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    .line 279
    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    .line 281
    iput-boolean v2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->S:Z

    .line 282
    iget-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->d:Ljava/util/Map;

    if-eqz p1, :cond_d

    iget-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->d:Ljava/util/Map;

    const-string p2, "native_video_width"

    invoke-interface {p1, p2}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result p1

    if-nez p1, :cond_c

    iget-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->d:Ljava/util/Map;

    const-string p2, "native_video_height"

    invoke-interface {p1, p2}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result p1

    if-nez p1, :cond_c

    const-string p1, "videoSupport"

    invoke-interface {p3, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_d

    .line 283
    :cond_c
    iput-boolean v2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->R:Z

    .line 286
    :cond_d
    iget-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->i:Landroid/content/Context;

    iget-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->j:Ljava/lang/String;

    invoke-static {p1, p2}, Lcom/mbridge/msdk/mbnative/controller/c;->a(Landroid/content/Context;Ljava/lang/String;)V

    .line 288
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/x;->b()V

    .line 289
    iget-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->j:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_14

    .line 291
    iget-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->i:Landroid/content/Context;

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object p1

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/db/f;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/f;

    move-result-object p1

    .line 292
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/db/f;->a()V

    .line 294
    invoke-interface {p3, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result p1

    const/4 p2, 0x0

    if-eqz p1, :cond_e

    .line 295
    invoke-interface {p3, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    goto :goto_3

    :cond_e
    move-object p1, p2

    .line 297
    :goto_3
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a(Ljava/lang/String;)I

    move-result p1

    .line 300
    iget-object p3, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->j:Ljava/lang/String;

    if-gtz p1, :cond_f

    iget p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->s:I

    .line 3336
    :cond_f
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v0

    invoke-virtual {v0, v5, p3}, Lcom/mbridge/msdk/c/b;->e(Ljava/lang/String;Ljava/lang/String;)Lcom/mbridge/msdk/c/d;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->W:Lcom/mbridge/msdk/c/d;

    if-nez v0, :cond_10

    .line 3338
    invoke-static {p3}, Lcom/mbridge/msdk/c/d;->d(Ljava/lang/String;)Lcom/mbridge/msdk/c/d;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->W:Lcom/mbridge/msdk/c/d;

    .line 3340
    :cond_10
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->W:Lcom/mbridge/msdk/c/d;

    invoke-virtual {v0}, Lcom/mbridge/msdk/c/d;->r()Ljava/util/List;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a:Ljava/util/List;

    if-eqz v0, :cond_11

    .line 3341
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_11

    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a:Ljava/util/List;

    invoke-interface {v0, v3}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_11

    .line 3343
    invoke-static {v2}, Lcom/mbridge/msdk/mbnative/a/f;->a(I)Lcom/mbridge/msdk/mbnative/a/b;

    move-result-object v0

    if-eqz v0, :cond_11

    .line 3345
    invoke-virtual {v0, p3, p1}, Lcom/mbridge/msdk/mbnative/a/b;->b(Ljava/lang/Object;I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/util/List;

    goto :goto_4

    :cond_11
    move-object p1, p2

    :goto_4
    if-eqz p1, :cond_14

    .line 303
    new-instance p3, Ljava/util/ArrayList;

    invoke-direct {p3}, Ljava/util/ArrayList;-><init>()V

    move v0, v4

    .line 305
    :goto_5
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v5

    if-ge v0, v5, :cond_13

    .line 306
    invoke-interface {p1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 307
    invoke-virtual {v5}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoUrlEncode()Ljava/lang/String;

    move-result-object v7

    invoke-static {v7}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v7

    if-nez v7, :cond_12

    .line 308
    invoke-interface {p3, v5}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_12
    add-int/lit8 v0, v0, 0x1

    goto :goto_5

    .line 311
    :cond_13
    invoke-interface {p3}, Ljava/util/List;->size()I

    move-result p1

    if-lez p1, :cond_14

    .line 312
    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object p1

    const-string v0, "com.mbridge.msdk.videocommon.listener.a"

    .line 313
    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    const-string v1, "getInstance"

    new-array v5, v4, [Ljava/lang/Class;

    .line 314
    invoke-virtual {p1, v1, v5}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1

    new-array v5, v4, [Ljava/lang/Object;

    .line 315
    invoke-virtual {v1, p2, v5}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    const-string v5, "createUnitCache"

    const/4 v7, 0x5

    new-array v8, v7, [Ljava/lang/Class;

    .line 316
    const-class v9, Landroid/content/Context;

    aput-object v9, v8, v4

    const-class v9, Ljava/lang/String;

    aput-object v9, v8, v2

    const-class v9, Ljava/util/concurrent/CopyOnWriteArrayList;

    aput-object v9, v8, v6

    sget-object v9, Ljava/lang/Integer;->TYPE:Ljava/lang/Class;

    const/4 v10, 0x3

    aput-object v9, v8, v10

    const/4 v9, 0x4

    aput-object v0, v8, v9

    invoke-virtual {p1, v5, v8}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v0

    new-array v5, v7, [Ljava/lang/Object;

    aput-object p4, v5, v4

    .line 317
    iget-object p4, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->j:Ljava/lang/String;

    aput-object p4, v5, v2

    new-instance p4, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {p4, p3}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>(Ljava/util/Collection;)V

    aput-object p4, v5, v6

    aput-object v3, v5, v10

    aput-object p2, v5, v9

    invoke-virtual {v0, v1, v5}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    const-string p2, "load"

    new-array p3, v2, [Ljava/lang/Class;

    .line 319
    const-class p4, Ljava/lang/String;

    aput-object p4, p3, v4

    invoke-virtual {p1, p2, p3}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object p1

    new-array p2, v2, [Ljava/lang/Object;

    .line 320
    iget-object p3, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->j:Ljava/lang/String;

    aput-object p3, p2, v4

    invoke-virtual {p1, v1, p2}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_6

    .line 325
    :catchall_0
    sget-object p1, Lcom/mbridge/msdk/mbnative/controller/NativeController;->e:Ljava/lang/String;

    const-string p2, "please import the nativex aar"

    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_14
    :goto_6
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/mbnative/controller/NativeController;I)I
    .locals 0

    .line 93
    iput p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->Y:I

    return p1
.end method

.method private a(Ljava/lang/String;)I
    .locals 5

    const/4 v0, 0x0

    if-nez p1, :cond_0

    return v0

    .line 358
    :cond_0
    :try_start_0
    new-instance v1, Lorg/json/JSONArray;

    invoke-direct {v1, p1}, Lorg/json/JSONArray;-><init>(Ljava/lang/String;)V

    .line 359
    invoke-virtual {v1}, Lorg/json/JSONArray;->length()I

    move-result p1

    if-lez p1, :cond_2

    move p1, v0

    .line 360
    :goto_0
    invoke-virtual {v1}, Lorg/json/JSONArray;->length()I

    move-result v2

    if-ge p1, v2, :cond_2

    .line 361
    invoke-virtual {v1, p1}, Lorg/json/JSONArray;->opt(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lorg/json/JSONObject;

    const-string v3, "id"

    .line 362
    invoke-virtual {v2, v3, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v3

    const/4 v4, 0x2

    if-ne v4, v3, :cond_1

    const-string p1, "ad_num"

    .line 364
    invoke-virtual {v2, p1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p1

    :cond_1
    add-int/lit8 p1, p1, 0x1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 370
    sget-object v1, Lcom/mbridge/msdk/mbnative/controller/NativeController;->e:Ljava/lang/String;

    invoke-static {p1}, Lcom/mbridge/msdk/mbnative/b/a;->a(Ljava/lang/Exception;)Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    return v0
.end method

.method static synthetic a(Lcom/mbridge/msdk/mbnative/controller/NativeController;Lcom/mbridge/msdk/foundation/db/i;)Lcom/mbridge/msdk/foundation/db/i;
    .locals 0

    .line 93
    iput-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->O:Lcom/mbridge/msdk/foundation/db/i;

    return-object p1
.end method

.method static synthetic a(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Lcom/mbridge/msdk/foundation/same/report/d;
    .locals 0

    .line 93
    iget-object p0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->p:Lcom/mbridge/msdk/foundation/same/report/d;

    return-object p0
.end method

.method static synthetic a(Lcom/mbridge/msdk/mbnative/controller/NativeController;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 93
    iput-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->q:Ljava/lang/String;

    return-object p1
.end method

.method private a(ILjava/util/List;)Ljava/util/List;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/out/Campaign;",
            ">;)",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/out/Campaign;",
            ">;"
        }
    .end annotation

    const/4 v0, 0x1

    if-ne p1, v0, :cond_2

    .line 1912
    iget-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->d:Ljava/util/Map;

    const-string v1, "native_info"

    invoke-interface {p1, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    if-eqz p2, :cond_2

    .line 1913
    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result p1

    if-lez p1, :cond_2

    const/4 p1, 0x0

    .line 1914
    invoke-interface {p2, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v1, :cond_0

    .line 1917
    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getTemplate()I

    move-result v0

    :cond_0
    const/4 v1, 0x2

    if-ne v0, v1, :cond_1

    if-eqz p2, :cond_2

    .line 1920
    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result v0

    iget v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->ab:I

    if-lt v0, v1, :cond_2

    .line 1921
    invoke-interface {p2, p1, v1}, Ljava/util/List;->subList(II)Ljava/util/List;

    move-result-object p2

    goto :goto_0

    :cond_1
    const/4 v1, 0x3

    if-ne v0, v1, :cond_2

    if-eqz p2, :cond_2

    .line 1924
    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result v0

    iget v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->ac:I

    if-lt v0, v1, :cond_2

    .line 1925
    invoke-interface {p2, p1, v1}, Ljava/util/List;->subList(II)Ljava/util/List;

    move-result-object p2

    :cond_2
    :goto_0
    return-object p2
.end method

.method static synthetic a(Lcom/mbridge/msdk/mbnative/controller/NativeController;ILjava/util/List;)Ljava/util/List;
    .locals 0

    .line 93
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a(ILjava/util/List;)Ljava/util/List;

    move-result-object p0

    return-object p0
.end method

.method static synthetic a(Lcom/mbridge/msdk/mbnative/controller/NativeController;Ljava/util/List;Z)Ljava/util/List;
    .locals 6

    if-eqz p1, :cond_5

    .line 7523
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v0

    add-int/lit8 v0, v0, -0x1

    :goto_0
    if-ltz v0, :cond_5

    .line 7526
    invoke-interface {p1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mbridge/msdk/out/Campaign;

    .line 7527
    invoke-virtual {v1}, Lcom/mbridge/msdk/out/Campaign;->getId()Ljava/lang/String;

    move-result-object v2

    .line 7528
    instance-of v3, v1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v3, :cond_0

    .line 7529
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object v2, v1

    check-cast v2, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoUrlEncode()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getBidToken()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 7531
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/videocommon/download/b;->getInstance()Lcom/mbridge/msdk/videocommon/download/b;

    move-result-object v4

    iget-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->j:Ljava/lang/String;

    invoke-virtual {v4, v5, v2}, Lcom/mbridge/msdk/videocommon/download/b;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/mbridge/msdk/videocommon/download/a;

    move-result-object v2

    if-eqz p2, :cond_2

    if-eqz v2, :cond_1

    .line 7533
    invoke-direct {p0}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->e()Lcom/mbridge/msdk/c/d;

    move-result-object v3

    invoke-virtual {v3}, Lcom/mbridge/msdk/c/d;->f()I

    move-result v3

    invoke-static {v2, v3}, Lcom/mbridge/msdk/videocommon/download/d;->a(Lcom/mbridge/msdk/videocommon/download/a;I)Z

    move-result v2

    if-eqz v2, :cond_1

    goto :goto_1

    .line 7535
    :cond_1
    invoke-interface {p1, v0}, Ljava/util/List;->remove(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mbridge/msdk/out/Campaign;

    .line 7536
    invoke-virtual {v1}, Lcom/mbridge/msdk/out/Campaign;->getType()I

    move-result v1

    invoke-static {v1}, Lcom/mbridge/msdk/mbnative/a/f;->a(I)Lcom/mbridge/msdk/mbnative/a/b;

    move-result-object v1

    .line 7537
    iget-object v3, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->j:Ljava/lang/String;

    iget-object v4, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->V:Ljava/lang/String;

    invoke-virtual {v1, v3, v2, v4}, Lcom/mbridge/msdk/mbnative/a/b;->a(Ljava/lang/String;Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V

    goto :goto_1

    :cond_2
    if-eqz v3, :cond_4

    .line 7541
    move-object v3, v1

    check-cast v3, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 7543
    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImageUrl()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_4

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoUrlEncode()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_4

    if-eqz v2, :cond_3

    .line 7544
    invoke-direct {p0}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->e()Lcom/mbridge/msdk/c/d;

    move-result-object v3

    invoke-virtual {v3}, Lcom/mbridge/msdk/c/d;->f()I

    move-result v3

    invoke-static {v2, v3}, Lcom/mbridge/msdk/videocommon/download/d;->a(Lcom/mbridge/msdk/videocommon/download/a;I)Z

    move-result v2

    if-eqz v2, :cond_3

    goto :goto_1

    .line 7546
    :cond_3
    invoke-interface {p1, v0}, Ljava/util/List;->remove(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mbridge/msdk/out/Campaign;

    .line 7547
    invoke-virtual {v1}, Lcom/mbridge/msdk/out/Campaign;->getType()I

    move-result v1

    invoke-static {v1}, Lcom/mbridge/msdk/mbnative/a/f;->a(I)Lcom/mbridge/msdk/mbnative/a/b;

    move-result-object v1

    .line 7548
    iget-object v3, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->j:Ljava/lang/String;

    iget-object v4, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->V:Ljava/lang/String;

    invoke-virtual {v1, v3, v2, v4}, Lcom/mbridge/msdk/mbnative/a/b;->a(Ljava/lang/String;Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V

    :cond_4
    :goto_1
    add-int/lit8 v0, v0, -0x1

    goto/16 :goto_0

    :cond_5
    return-object p1
.end method

.method private a(JIZLjava/lang/String;Ljava/lang/String;)V
    .locals 16

    move-object/from16 v10, p0

    move/from16 v11, p4

    move-object/from16 v12, p5

    .line 1966
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->G()Ljava/util/UUID;

    move-result-object v13

    const-string v0, "_post"

    const-string v1, "_ttc"

    const/4 v2, 0x0

    .line 1971
    invoke-static {v2}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v2

    const-string v3, "_"

    if-nez v13, :cond_0

    .line 1968
    iget-object v4, v10, Lcom/mbridge/msdk/mbnative/controller/NativeController;->H:Ljava/util/Map;

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v11}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v4, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1969
    iget-object v1, v10, Lcom/mbridge/msdk/mbnative/controller/NativeController;->H:Ljava/util/Map;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v11}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-interface {v1, v0, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    .line 1971
    :cond_0
    iget-object v4, v10, Lcom/mbridge/msdk/mbnative/controller/NativeController;->H:Ljava/util/Map;

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v11}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v4, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1972
    iget-object v1, v10, Lcom/mbridge/msdk/mbnative/controller/NativeController;->H:Ljava/util/Map;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v11}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-interface {v1, v0, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1975
    :goto_0
    new-instance v14, Lcom/mbridge/msdk/mbnative/controller/NativeController$3;

    invoke-direct {v14, v10, v12, v13, v11}, Lcom/mbridge/msdk/mbnative/controller/NativeController$3;-><init>(Lcom/mbridge/msdk/mbnative/controller/NativeController;Ljava/lang/String;Ljava/util/UUID;Z)V

    .line 2005
    new-instance v15, Lcom/mbridge/msdk/mbnative/controller/NativeController$4;

    move-object v0, v15

    move-object/from16 v1, p0

    move-object/from16 v2, p5

    move/from16 v3, p4

    move-object v4, v13

    move-object v5, v14

    move-wide/from16 v6, p1

    move/from16 v8, p3

    move-object/from16 v9, p6

    invoke-direct/range {v0 .. v9}, Lcom/mbridge/msdk/mbnative/controller/NativeController$4;-><init>(Lcom/mbridge/msdk/mbnative/controller/NativeController;Ljava/lang/String;ZLjava/util/UUID;Lcom/mbridge/msdk/foundation/same/e/a;JILjava/lang/String;)V

    .line 2058
    iget-object v0, v10, Lcom/mbridge/msdk/mbnative/controller/NativeController;->o:Lcom/mbridge/msdk/mbnative/controller/NativeController$e;

    const-wide/32 v1, 0x15f90

    invoke-virtual {v0, v15, v1, v2}, Lcom/mbridge/msdk/mbnative/controller/NativeController$e;->postDelayed(Ljava/lang/Runnable;J)Z

    .line 2059
    new-instance v9, Lcom/mbridge/msdk/mbnative/controller/NativeController$5;

    move-object v0, v9

    move-object/from16 v1, p0

    move/from16 v2, p4

    move-object/from16 v3, p5

    move-wide/from16 v5, p1

    move/from16 v7, p3

    move-object/from16 v8, p6

    invoke-direct/range {v0 .. v8}, Lcom/mbridge/msdk/mbnative/controller/NativeController$5;-><init>(Lcom/mbridge/msdk/mbnative/controller/NativeController;ZLjava/lang/String;Ljava/util/UUID;JILjava/lang/String;)V

    .line 2092
    iget-object v0, v10, Lcom/mbridge/msdk/mbnative/controller/NativeController;->G:Lcom/mbridge/msdk/foundation/same/e/b;

    if-nez v0, :cond_1

    .line 2093
    new-instance v0, Lcom/mbridge/msdk/foundation/same/e/b;

    iget-object v1, v10, Lcom/mbridge/msdk/mbnative/controller/NativeController;->i:Landroid/content/Context;

    invoke-direct {v0, v1}, Lcom/mbridge/msdk/foundation/same/e/b;-><init>(Landroid/content/Context;)V

    iput-object v0, v10, Lcom/mbridge/msdk/mbnative/controller/NativeController;->G:Lcom/mbridge/msdk/foundation/same/e/b;

    .line 2095
    :cond_1
    iget-object v0, v10, Lcom/mbridge/msdk/mbnative/controller/NativeController;->G:Lcom/mbridge/msdk/foundation/same/e/b;

    if-eqz v0, :cond_2

    .line 2096
    invoke-virtual {v0, v14, v9}, Lcom/mbridge/msdk/foundation/same/e/b;->a(Lcom/mbridge/msdk/foundation/same/e/a;Lcom/mbridge/msdk/foundation/same/e/a$b;)V

    :cond_2
    return-void
.end method

.method private a(Landroid/view/View;Landroid/view/View$OnClickListener;Ljava/lang/Class;)V
    .locals 3

    const-string v0, ""

    if-eqz p1, :cond_2

    if-nez p2, :cond_0

    goto :goto_1

    :cond_0
    if-eqz p3, :cond_1

    .line 1232
    :try_start_0
    invoke-virtual {p3, p1}, Ljava/lang/Class;->isInstance(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    return-void

    .line 1236
    :cond_1
    invoke-virtual {p1, p2}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1237
    instance-of v1, p1, Landroid/view/ViewGroup;

    if-eqz v1, :cond_3

    .line 1238
    check-cast p1, Landroid/view/ViewGroup;

    const/4 v1, 0x0

    .line 1239
    :goto_0
    invoke-virtual {p1}, Landroid/view/ViewGroup;->getChildCount()I

    move-result v2

    if-ge v1, v2, :cond_3

    .line 1240
    invoke-virtual {p1, v1}, Landroid/view/ViewGroup;->getChildAt(I)Landroid/view/View;

    move-result-object v2

    .line 1241
    invoke-direct {p0, v2, p2, p3}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a(Landroid/view/View;Landroid/view/View$OnClickListener;Ljava/lang/Class;)V

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_2
    :goto_1
    const-string p1, "traverseView  subview or mOnClickListener is null"

    .line 1228
    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    const-string p1, "traverseView  failed"

    .line 1246
    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    return-void
.end method

.method private a(Landroid/view/View;Ljava/lang/Class;)V
    .locals 3

    const-string v0, ""

    if-nez p1, :cond_0

    :try_start_0
    const-string p1, "traverseView  subview  is null"

    .line 1364
    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_0
    if-eqz p2, :cond_1

    .line 1368
    invoke-virtual {p2, p1}, Ljava/lang/Class;->isInstance(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    return-void

    :cond_1
    const/4 v1, 0x0

    .line 1372
    invoke-virtual {p1, v1}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1373
    instance-of v1, p1, Landroid/view/ViewGroup;

    if-eqz v1, :cond_2

    .line 1374
    check-cast p1, Landroid/view/ViewGroup;

    const/4 v1, 0x0

    .line 1375
    :goto_0
    invoke-virtual {p1}, Landroid/view/ViewGroup;->getChildCount()I

    move-result v2

    if-ge v1, v2, :cond_2

    .line 1376
    invoke-virtual {p1, v1}, Landroid/view/ViewGroup;->getChildAt(I)Landroid/view/View;

    move-result-object v2

    .line 1377
    invoke-direct {p0, v2, p2}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a(Landroid/view/View;Ljava/lang/Class;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :catchall_0
    const-string p1, "traverseView  failed"

    .line 1382
    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    return-void
.end method

.method private a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    .locals 7

    .line 1111
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isReportClick()Z

    move-result v0

    if-nez v0, :cond_0

    const/4 v0, 0x1

    .line 1112
    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setReportClick(Z)V

    if-eqz p1, :cond_0

    .line 1113
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNativeVideoTracking()Lcom/mbridge/msdk/foundation/entity/l;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNativeVideoTracking()Lcom/mbridge/msdk/foundation/entity/l;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/l;->h()[Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 1114
    iget-object v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->i:Landroid/content/Context;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCampaignUnitId()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNativeVideoTracking()Lcom/mbridge/msdk/foundation/entity/l;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/l;->h()[Ljava/lang/String;

    move-result-object v4

    const/4 v5, 0x0

    const/4 v6, 0x0

    move-object v2, p1

    invoke-static/range {v1 .. v6}, Lcom/mbridge/msdk/click/b;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;[Ljava/lang/String;ZZ)V

    :cond_0
    return-void
.end method

.method private a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/view/View;Ljava/util/List;)V
    .locals 8
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            "Landroid/view/View;",
            "Ljava/util/List<",
            "Landroid/view/View;",
            ">;)V"
        }
    .end annotation

    const/4 v0, 0x0

    .line 1185
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->i:Landroid/content/Context;

    if-eqz v1, :cond_0

    if-eqz p1, :cond_0

    .line 1186
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 1188
    invoke-virtual {v0, p2}, Lcom/iab/omid/library/mmadbridge/adsession/AdSession;->registerAdView(Landroid/view/View;)V

    .line 1189
    invoke-virtual {v0}, Lcom/iab/omid/library/mmadbridge/adsession/AdSession;->start()V

    :cond_0
    move-object v5, v0

    const/4 v0, 0x0

    .line 1193
    iget-object v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->W:Lcom/mbridge/msdk/c/d;

    if-eqz v1, :cond_1

    .line 1194
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->W:Lcom/mbridge/msdk/c/d;

    invoke-virtual {v0}, Lcom/mbridge/msdk/c/d;->d()I

    move-result v0

    :cond_1
    move v6, v0

    .line 1196
    new-instance v7, Lcom/mbridge/msdk/mbnative/controller/NativeController$f;

    move-object v0, v7

    move-object v1, p1

    move-object v2, p2

    move-object v3, p3

    move-object v4, p0

    invoke-direct/range {v0 .. v5}, Lcom/mbridge/msdk/mbnative/controller/NativeController$f;-><init>(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/view/View;Ljava/util/List;Lcom/mbridge/msdk/mbnative/controller/NativeController;Lcom/iab/omid/library/mmadbridge/adsession/AdSession;)V

    .line 1197
    iget-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->K:Ljava/util/concurrent/CopyOnWriteArrayList;

    if-nez p1, :cond_2

    .line 1198
    new-instance p1, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {p1}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    iput-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->K:Ljava/util/concurrent/CopyOnWriteArrayList;

    .line 1200
    :cond_2
    iget-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->K:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {p1, v7}, Ljava/util/concurrent/CopyOnWriteArrayList;->add(Ljava/lang/Object;)Z

    .line 1201
    new-instance p1, Lcom/mbridge/msdk/mbnative/controller/NativeController$11;

    invoke-direct {p1, p0, v7}, Lcom/mbridge/msdk/mbnative/controller/NativeController$11;-><init>(Lcom/mbridge/msdk/mbnative/controller/NativeController;Lcom/mbridge/msdk/mbnative/controller/NativeController$f;)V

    invoke-virtual {v7, p1}, Lcom/mbridge/msdk/mbnative/controller/NativeController$f;->setonStateChangeListener(Lcom/mbridge/msdk/foundation/same/e/a$b;)V

    .line 1211
    iget-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->o:Lcom/mbridge/msdk/mbnative/controller/NativeController$e;

    if-eqz p1, :cond_3

    .line 1212
    iget-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->o:Lcom/mbridge/msdk/mbnative/controller/NativeController$e;

    mul-int/lit16 v6, v6, 0x3e8

    int-to-long p2, v6

    invoke-virtual {p1, v7, p2, p3}, Lcom/mbridge/msdk/mbnative/controller/NativeController$e;->postDelayed(Ljava/lang/Runnable;J)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 1215
    sget-object p2, Lcom/mbridge/msdk/mbnative/controller/NativeController;->e:Ljava/lang/String;

    invoke-static {p1}, Lcom/mbridge/msdk/mbnative/b/a;->a(Ljava/lang/Exception;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    :goto_0
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/mbnative/controller/NativeController;Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    .locals 7

    if-eqz p2, :cond_1

    .line 6069
    :try_start_0
    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->needShowIDialog()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 6070
    new-instance v6, Lcom/mbridge/msdk/mbnative/controller/NativeController$9;

    invoke-direct {v6, p0, p2}, Lcom/mbridge/msdk/mbnative/controller/NativeController$9;-><init>(Lcom/mbridge/msdk/mbnative/controller/NativeController;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 6087
    invoke-static {p2}, Lcom/mbridge/msdk/click/c;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->needShowIDialog()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 6088
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->r:Lcom/mbridge/msdk/click/b;

    invoke-virtual {v0, p2}, Lcom/mbridge/msdk/click/b;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 6089
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a()Lcom/mbridge/msdk/mbjscommon/confirmation/e;

    move-result-object v1

    const-string v2, ""

    iget-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->j:Ljava/lang/String;

    move-object v3, p2

    move-object v4, p1

    invoke-virtual/range {v1 .. v6}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/widget/dialog/a;)V

    goto :goto_0

    .line 6091
    :cond_0
    invoke-direct {p0, p2}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 6092
    iget-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->g:Lcom/mbridge/msdk/mbnative/c/a;

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/mbnative/c/a;->onAdClick(Lcom/mbridge/msdk/out/Campaign;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 6098
    sget-object v0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->e:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 6100
    :cond_1
    iget-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->r:Lcom/mbridge/msdk/click/b;

    const/4 p1, 0x0

    sput-boolean p1, Lcom/mbridge/msdk/click/b;->a:Z

    .line 6101
    iget-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->r:Lcom/mbridge/msdk/click/b;

    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->g:Lcom/mbridge/msdk/mbnative/c/a;

    invoke-virtual {p1, p2, v0}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/out/NativeListener$NativeAdListener;)V

    .line 6102
    invoke-direct {p0, p2}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    :goto_0
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/mbnative/controller/NativeController;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    .locals 0

    .line 93
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/mbnative/controller/NativeController;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/view/View;Ljava/util/List;Lcom/iab/omid/library/mmadbridge/adsession/AdSession;)V
    .locals 3

    .line 6301
    :try_start_0
    sget-object v0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->e:Ljava/lang/String;

    const-string v1, "trackView start"

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 6302
    new-instance v0, Lcom/mbridge/msdk/mbnative/controller/NativeController$12;

    invoke-direct {v0, p0, p1}, Lcom/mbridge/msdk/mbnative/controller/NativeController$12;-><init>(Lcom/mbridge/msdk/mbnative/controller/NativeController;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 6314
    new-instance p1, Lcom/mbridge/msdk/mbnative/controller/a;

    new-instance v1, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v2

    invoke-direct {v1, v2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    invoke-direct {p1, p3, v0, v1}, Lcom/mbridge/msdk/mbnative/controller/a;-><init>(Ljava/util/List;Lcom/mbridge/msdk/mbnative/controller/a$a;Landroid/os/Handler;)V

    .line 6316
    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/mbnative/controller/a;->a(Landroid/view/View;)V

    .line 6318
    iget-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->I:Ljava/util/List;

    if-eqz p2, :cond_0

    .line 6319
    iget-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->I:Ljava/util/List;

    invoke-interface {p2, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 6321
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->J:Ljava/util/List;

    if-eqz p1, :cond_1

    .line 6322
    iget-object p0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->J:Ljava/util/List;

    invoke-interface {p0, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_1
    if-eqz p4, :cond_2

    .line 6326
    invoke-static {p4}, Lcom/iab/omid/library/mmadbridge/adsession/AdEvents;->createAdEvents(Lcom/iab/omid/library/mmadbridge/adsession/AdSession;)Lcom/iab/omid/library/mmadbridge/adsession/AdEvents;

    move-result-object p0

    invoke-virtual {p0}, Lcom/iab/omid/library/mmadbridge/adsession/AdEvents;->impressionOccurred()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :cond_2
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/mbnative/controller/NativeController;Lcom/mbridge/msdk/out/NativeListener$NativeAdListener;Ljava/lang/String;)V
    .locals 0

    .line 93
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a(Lcom/mbridge/msdk/out/NativeListener$NativeAdListener;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/mbnative/controller/NativeController;Ljava/util/List;ILcom/mbridge/msdk/out/NativeListener$NativeAdListener;)V
    .locals 0

    .line 93
    invoke-direct {p0, p1, p2, p3}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a(Ljava/util/List;ILcom/mbridge/msdk/out/NativeListener$NativeAdListener;)V

    return-void
.end method

.method private a(Lcom/mbridge/msdk/out/NativeListener$NativeAdListener;Ljava/lang/String;)V
    .locals 2

    .line 1901
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->o:Lcom/mbridge/msdk/mbnative/controller/NativeController$e;

    new-instance v1, Lcom/mbridge/msdk/mbnative/controller/NativeController$2;

    invoke-direct {v1, p0, p1, p2}, Lcom/mbridge/msdk/mbnative/controller/NativeController$2;-><init>(Lcom/mbridge/msdk/mbnative/controller/NativeController;Lcom/mbridge/msdk/out/NativeListener$NativeAdListener;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/mbnative/controller/NativeController$e;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method private a(Ljava/util/List;ILcom/mbridge/msdk/out/NativeListener$NativeAdListener;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/out/Campaign;",
            ">;I",
            "Lcom/mbridge/msdk/out/NativeListener$NativeAdListener;",
            ")V"
        }
    .end annotation

    .line 1886
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->o:Lcom/mbridge/msdk/mbnative/controller/NativeController$e;

    new-instance v1, Lcom/mbridge/msdk/mbnative/controller/NativeController$15;

    invoke-direct {v1, p0, p1, p3, p2}, Lcom/mbridge/msdk/mbnative/controller/NativeController$15;-><init>(Lcom/mbridge/msdk/mbnative/controller/NativeController;Ljava/util/List;Lcom/mbridge/msdk/out/NativeListener$NativeAdListener;I)V

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/mbnative/controller/NativeController$e;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method private a(Ljava/util/List;Lcom/mbridge/msdk/mbnative/controller/NativeController$b;)V
    .locals 10
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/out/Campaign;",
            ">;",
            "Lcom/mbridge/msdk/mbnative/controller/NativeController$b;",
            ")V"
        }
    .end annotation

    .line 2477
    invoke-direct {p0}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->f()V

    .line 2478
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    .line 2479
    new-instance v6, Ljava/util/Timer;

    invoke-direct {v6}, Ljava/util/Timer;-><init>()V

    iput-object v6, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->U:Ljava/util/Timer;

    .line 2480
    new-instance v7, Lcom/mbridge/msdk/mbnative/controller/NativeController$7;

    move-object v0, v7

    move-object v1, p0

    move-object v4, p2

    move-object v5, p1

    invoke-direct/range {v0 .. v5}, Lcom/mbridge/msdk/mbnative/controller/NativeController$7;-><init>(Lcom/mbridge/msdk/mbnative/controller/NativeController;JLcom/mbridge/msdk/mbnative/controller/NativeController$b;Ljava/util/List;)V

    const-wide/16 p1, 0x0

    const-wide/16 v8, 0x3e8

    move-object v4, v6

    move-object v5, v7

    move-wide v6, p1

    invoke-virtual/range {v4 .. v9}, Ljava/util/Timer;->schedule(Ljava/util/TimerTask;JJ)V

    return-void
.end method

.method private a(I)Z
    .locals 12

    .line 529
    invoke-static {}, Lcom/mbridge/msdk/mbnative/controller/b;->b()Ljava/util/Map;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->j:Ljava/lang/String;

    invoke-interface {v0, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_15

    .line 530
    invoke-static {}, Lcom/mbridge/msdk/mbnative/controller/b;->b()Ljava/util/Map;

    move-result-object v0

    iget-object v2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->j:Ljava/lang/String;

    invoke-interface {v0, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    if-eqz v0, :cond_15

    .line 531
    invoke-static {}, Lcom/mbridge/msdk/mbnative/controller/b;->a()Ljava/util/Map;

    move-result-object v0

    .line 532
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, "_"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->j:Ljava/lang/String;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v0, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/Map;

    .line 533
    invoke-static {}, Lcom/mbridge/msdk/mbnative/controller/b;->d()Ljava/util/Map;

    move-result-object v4

    iget-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->j:Ljava/lang/String;

    invoke-interface {v4, v5}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/Integer;

    .line 534
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v5

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v6

    invoke-virtual {v6}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Lcom/mbridge/msdk/c/b;->b(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object v5

    if-eqz v4, :cond_0

    .line 537
    invoke-virtual {v4}, Ljava/lang/Integer;->intValue()I

    move-result v4

    iput v4, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->t:I

    :cond_0
    if-eqz v2, :cond_15

    .line 540
    invoke-interface {v2}, Ljava/util/Map;->size()I

    move-result v4

    if-lez v4, :cond_15

    .line 541
    invoke-interface {v2}, Ljava/util/Map;->keySet()Ljava/util/Set;

    move-result-object v4

    .line 542
    invoke-interface {v4}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v4

    invoke-interface {v4}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/Long;

    .line 543
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v6

    if-nez v5, :cond_1

    .line 545
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v5

    invoke-virtual {v5}, Lcom/mbridge/msdk/c/b;->b()Lcom/mbridge/msdk/c/a;

    move-result-object v5

    .line 547
    :cond_1
    invoke-virtual {v5}, Lcom/mbridge/msdk/c/a;->ag()J

    move-result-wide v8

    const-wide/16 v10, 0x3e8

    mul-long/2addr v8, v10

    .line 548
    invoke-virtual {v4}, Ljava/lang/Long;->longValue()J

    move-result-wide v10

    sub-long/2addr v6, v10

    cmp-long v5, v6, v8

    if-ltz v5, :cond_2

    .line 549
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->j:Ljava/lang/String;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-interface {v0, p1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    goto/16 :goto_8

    :cond_2
    const/4 v5, 0x1

    if-ne p1, v5, :cond_9

    .line 552
    invoke-interface {v2, v4}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Ljava/util/List;

    if-eqz v6, :cond_8

    .line 553
    invoke-interface {v6}, Ljava/util/List;->size()I

    move-result v7

    if-lez v7, :cond_8

    .line 554
    iget-object v7, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->g:Lcom/mbridge/msdk/mbnative/c/a;

    if-nez v7, :cond_3

    return v1

    .line 558
    :cond_3
    iget v8, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->E:I

    invoke-interface {v6}, Ljava/util/List;->size()I

    move-result v9

    if-lt v8, v9, :cond_4

    .line 559
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->j:Ljava/lang/String;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-interface {v0, p1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 560
    invoke-interface {v7, v6}, Lcom/mbridge/msdk/out/NativeListener$NativeAdListener;->onAdFramesLoaded(Ljava/util/List;)V

    return v5

    .line 564
    :cond_4
    iget v8, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->E:I

    if-nez v8, :cond_5

    return v1

    .line 567
    :cond_5
    iget v8, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->D:I

    invoke-interface {v6, v1, v8}, Ljava/util/List;->subList(II)Ljava/util/List;

    move-result-object v8

    .line 568
    invoke-interface {v7, v6}, Lcom/mbridge/msdk/out/NativeListener$NativeAdListener;->onAdFramesLoaded(Ljava/util/List;)V

    .line 569
    invoke-interface {v6, v8}, Ljava/util/List;->removeAll(Ljava/util/Collection;)Z

    .line 570
    invoke-interface {v2, v4, v8}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 571
    new-instance v9, Ljava/util/ArrayList;

    invoke-direct {v9}, Ljava/util/ArrayList;-><init>()V

    .line 572
    invoke-interface {v6}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v6

    .line 574
    :goto_0
    invoke-interface {v6}, Ljava/util/Iterator;->hasNext()Z

    move-result v10

    if-eqz v10, :cond_7

    .line 575
    invoke-interface {v6}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v10

    check-cast v10, Lcom/mbridge/msdk/out/Frame;

    .line 576
    iget v11, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->E:I

    if-ge v1, v11, :cond_6

    goto :goto_1

    .line 578
    :cond_6
    invoke-interface {v9, v10}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :goto_1
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 582
    :cond_7
    invoke-interface {v2, v4, v9}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 583
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->j:Ljava/lang/String;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-interface {v0, p1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 584
    invoke-interface {v7, v8}, Lcom/mbridge/msdk/out/NativeListener$NativeAdListener;->onAdFramesLoaded(Ljava/util/List;)V

    return v5

    :cond_8
    return v1

    .line 590
    :cond_9
    invoke-interface {v2, v4}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/util/List;

    if-eqz p1, :cond_15

    .line 591
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_15

    .line 592
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 595
    invoke-interface {p1, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getType()I

    move-result v2

    if-ne v2, v5, :cond_12

    .line 597
    iget-object v2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->n:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_a

    .line 598
    iget v2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->C:I

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v3

    invoke-static {v2, v3}, Ljava/lang/Math;->min(II)I

    move-result v2

    goto :goto_4

    .line 601
    :cond_a
    :try_start_0
    new-instance v2, Lorg/json/JSONArray;

    iget-object v3, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->n:Ljava/lang/String;

    invoke-direct {v2, v3}, Lorg/json/JSONArray;-><init>(Ljava/lang/String;)V

    .line 604
    invoke-virtual {v2}, Lorg/json/JSONArray;->length()I

    move-result v3

    const/4 v4, 0x3

    if-lez v3, :cond_d

    move v3, v1

    move v6, v3

    move v7, v6

    .line 605
    :goto_2
    invoke-virtual {v2}, Lorg/json/JSONArray;->length()I

    move-result v8

    if-ge v3, v8, :cond_e

    .line 606
    invoke-virtual {v2, v3}, Lorg/json/JSONArray;->opt(I)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Lorg/json/JSONObject;

    const-string v9, "id"

    .line 607
    invoke-virtual {v8, v9, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v9
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const/4 v10, 0x2

    const-string v11, "ad_num"

    if-ne v10, v9, :cond_b

    .line 609
    :try_start_1
    invoke-virtual {v8, v11}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v6

    goto :goto_3

    :cond_b
    if-ne v4, v9, :cond_c

    .line 611
    invoke-virtual {v8, v11}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v7

    :cond_c
    :goto_3
    add-int/lit8 v3, v3, 0x1

    goto :goto_2

    :cond_d
    move v6, v1

    move v7, v6

    .line 616
    :cond_e
    invoke-interface {p1, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 617
    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getTemplate()I

    move-result v2

    if-ne v4, v2, :cond_f

    .line 620
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v2

    invoke-static {v7, v2}, Ljava/lang/Math;->min(II)I

    move-result v2

    goto :goto_4

    .line 622
    :cond_f
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v2

    invoke-static {v6, v2}, Ljava/lang/Math;->min(II)I

    move-result v2
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_4

    .line 625
    :catch_0
    sget-object v2, Lcom/mbridge/msdk/mbnative/controller/NativeController;->e:Ljava/lang/String;

    const-string v3, "load from catch error in get nativeinfo adnum"

    invoke-static {v2, v3}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    move v2, v1

    :goto_4
    if-lez v2, :cond_11

    .line 630
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    .line 632
    :goto_5
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_14

    if-ne v1, v2, :cond_10

    goto :goto_7

    .line 636
    :cond_10
    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 637
    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getTemplate()I

    .line 638
    invoke-interface {v0, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 639
    invoke-interface {p1}, Ljava/util/Iterator;->remove()V

    add-int/lit8 v1, v1, 0x1

    goto :goto_5

    :cond_11
    return v1

    .line 647
    :cond_12
    iget v2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->C:I

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v3

    invoke-static {v2, v3}, Ljava/lang/Math;->min(II)I

    move-result v2

    if-lez v2, :cond_15

    .line 650
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    .line 651
    :goto_6
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_14

    if-ne v1, v2, :cond_13

    goto :goto_7

    .line 655
    :cond_13
    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 656
    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getTemplate()I

    .line 657
    invoke-interface {v0, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 658
    invoke-interface {p1}, Ljava/util/Iterator;->remove()V

    add-int/lit8 v1, v1, 0x1

    goto :goto_6

    .line 668
    :cond_14
    :goto_7
    invoke-direct {p0, v0}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a(Ljava/util/List;)Z

    return v5

    :cond_15
    :goto_8
    return v1
.end method

.method static synthetic a(Lcom/mbridge/msdk/mbnative/controller/NativeController;Ljava/util/List;)Z
    .locals 0

    .line 93
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a(Ljava/util/List;)Z

    move-result p0

    return p0
.end method

.method static synthetic a(Lcom/mbridge/msdk/mbnative/controller/NativeController;Z)Z
    .locals 0

    .line 93
    iput-boolean p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->z:Z

    return p1
.end method

.method private a(Ljava/util/List;)Z
    .locals 10
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/out/Campaign;",
            ">;)Z"
        }
    .end annotation

    .line 1797
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->V:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    if-nez v0, :cond_0

    if-eqz p1, :cond_0

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v0

    if-nez v0, :cond_0

    return v1

    :cond_0
    if-eqz p1, :cond_b

    .line 1800
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_b

    .line 1801
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->g:Lcom/mbridge/msdk/mbnative/c/a;

    if-eqz v0, :cond_a

    .line 1804
    invoke-interface {p1, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v2, :cond_1

    .line 1806
    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getTemplate()I

    move-result v3

    goto :goto_0

    :cond_1
    const/4 v3, 0x2

    .line 1811
    :goto_0
    iget-object v4, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->i:Landroid/content/Context;

    invoke-static {v4}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v4

    invoke-static {v4}, Lcom/mbridge/msdk/foundation/db/l;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/l;

    move-result-object v4

    .line 1812
    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/db/l;->b()V

    move v5, v1

    .line 1813
    :goto_1
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v6

    if-ge v5, v6, :cond_3

    .line 1814
    invoke-interface {p1, v5}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 1815
    invoke-virtual {v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v4, v7}, Lcom/mbridge/msdk/foundation/db/l;->a(Ljava/lang/String;)Z

    move-result v7

    if-nez v7, :cond_2

    .line 1817
    new-instance v7, Lcom/mbridge/msdk/foundation/entity/h;

    invoke-direct {v7}, Lcom/mbridge/msdk/foundation/entity/h;-><init>()V

    .line 1818
    invoke-virtual {v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v7, v8}, Lcom/mbridge/msdk/foundation/entity/h;->a(Ljava/lang/String;)V

    .line 1819
    invoke-virtual {v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getFca()I

    move-result v8

    invoke-virtual {v7, v8}, Lcom/mbridge/msdk/foundation/entity/h;->a(I)V

    .line 1820
    invoke-virtual {v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getFcb()I

    move-result v6

    invoke-virtual {v7, v6}, Lcom/mbridge/msdk/foundation/entity/h;->b(I)V

    .line 1821
    invoke-virtual {v7, v1}, Lcom/mbridge/msdk/foundation/entity/h;->d(I)V

    .line 1822
    invoke-virtual {v7, v1}, Lcom/mbridge/msdk/foundation/entity/h;->c(I)V

    .line 1823
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v8

    invoke-virtual {v7, v8, v9}, Lcom/mbridge/msdk/foundation/entity/h;->a(J)V

    .line 1824
    invoke-virtual {v4, v7}, Lcom/mbridge/msdk/foundation/db/l;->a(Lcom/mbridge/msdk/foundation/entity/h;)V

    :cond_2
    add-int/lit8 v5, v5, 0x1

    goto :goto_1

    .line 1827
    :cond_3
    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getType()I

    move-result v2

    .line 1829
    iget-boolean v4, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->S:Z

    const-string v5, "has no ads"

    if-eqz v4, :cond_7

    iget-boolean v4, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->R:Z

    if-eqz v4, :cond_7

    const/4 v4, 0x3

    if-eq v2, v4, :cond_7

    const/4 v6, 0x6

    if-eq v2, v6, :cond_7

    const/4 v6, 0x7

    if-eq v2, v6, :cond_7

    .line 1832
    invoke-direct {p0}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->e()Lcom/mbridge/msdk/c/d;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/c/d;->h()I

    move-result v1

    if-ne v1, v4, :cond_5

    .line 1834
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->b(Ljava/util/List;)Ljava/util/List;

    move-result-object v1

    if-eqz p1, :cond_4

    .line 1835
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v2

    if-lez v2, :cond_4

    .line 1836
    new-instance v2, Lcom/mbridge/msdk/mbnative/controller/NativeController$13;

    invoke-direct {v2, p0, v1, v3, v0}, Lcom/mbridge/msdk/mbnative/controller/NativeController$13;-><init>(Lcom/mbridge/msdk/mbnative/controller/NativeController;Ljava/util/List;ILcom/mbridge/msdk/out/NativeListener$NativeAdListener;)V

    invoke-direct {p0, p1, v2}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a(Ljava/util/List;Lcom/mbridge/msdk/mbnative/controller/NativeController$b;)V

    goto :goto_3

    .line 1848
    :cond_4
    invoke-direct {p0, v0, v5}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a(Lcom/mbridge/msdk/out/NativeListener$NativeAdListener;Ljava/lang/String;)V

    goto :goto_3

    .line 1851
    :cond_5
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->c(Ljava/util/List;)Ljava/util/List;

    move-result-object v1

    if-eqz v1, :cond_6

    .line 1852
    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v2

    if-lez v2, :cond_6

    .line 1853
    new-instance v2, Lcom/mbridge/msdk/mbnative/controller/NativeController$14;

    invoke-direct {v2, p0, p1, v3, v0}, Lcom/mbridge/msdk/mbnative/controller/NativeController$14;-><init>(Lcom/mbridge/msdk/mbnative/controller/NativeController;Ljava/util/List;ILcom/mbridge/msdk/out/NativeListener$NativeAdListener;)V

    invoke-direct {p0, v1, v2}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a(Ljava/util/List;Lcom/mbridge/msdk/mbnative/controller/NativeController$b;)V

    goto :goto_3

    .line 1865
    :cond_6
    invoke-direct {p0, p1, v3, v0}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a(Ljava/util/List;ILcom/mbridge/msdk/out/NativeListener$NativeAdListener;)V

    goto :goto_3

    :cond_7
    if-eqz p1, :cond_9

    .line 1870
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v2

    if-lez v2, :cond_9

    .line 1871
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :goto_2
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_8

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/mbridge/msdk/out/Campaign;

    .line 1872
    invoke-virtual {v4, v1}, Lcom/mbridge/msdk/out/Campaign;->setVideoLength(I)V

    goto :goto_2

    .line 1874
    :cond_8
    invoke-direct {p0, p1, v3, v0}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a(Ljava/util/List;ILcom/mbridge/msdk/out/NativeListener$NativeAdListener;)V

    goto :goto_3

    .line 1876
    :cond_9
    invoke-direct {p0, v0, v5}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a(Lcom/mbridge/msdk/out/NativeListener$NativeAdListener;Ljava/lang/String;)V

    :cond_a
    :goto_3
    const/4 p1, 0x1

    return p1

    :cond_b
    return v1
.end method

.method public static a(Ljava/util/Map;)Z
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)Z"
        }
    .end annotation

    const-string v0, "key_word"

    if-eqz p0, :cond_0

    :try_start_0
    const-string v1, "app_id"

    .line 2110
    invoke-interface {p0, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    const-string v1, "app_key"

    .line 2111
    invoke-interface {p0, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {p0, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 2112
    invoke-interface {p0, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    if-eqz p0, :cond_0

    .line 2113
    sget-object p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->e:Ljava/lang/String;

    const-string v0, "\u6709smart \u53c2\u6570"

    invoke-static {p0, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const/4 p0, 0x1

    return p0

    :catch_0
    move-exception p0

    .line 2117
    sget-object v0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->e:Ljava/lang/String;

    invoke-static {p0}, Lcom/mbridge/msdk/mbnative/b/a;->a(Ljava/lang/Exception;)Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 2119
    :cond_0
    sget-object p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->e:Ljava/lang/String;

    const-string v0, "\u6728\u6709smart \u53c2\u6570"

    invoke-static {p0, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    const/4 p0, 0x0

    return p0
.end method

.method static synthetic b(Lcom/mbridge/msdk/mbnative/controller/NativeController;I)I
    .locals 0

    .line 93
    iput p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->v:I

    return p1
.end method

.method private b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Lcom/iab/omid/library/mmadbridge/adsession/AdSession;
    .locals 11

    .line 1168
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->L:Ljava/util/Hashtable;

    if-nez v0, :cond_0

    .line 1169
    new-instance v0, Ljava/util/Hashtable;

    invoke-direct {v0}, Ljava/util/Hashtable;-><init>()V

    iput-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->L:Ljava/util/Hashtable;

    .line 1171
    :cond_0
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v0

    .line 1172
    iget-object v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->L:Ljava/util/Hashtable;

    invoke-virtual {v1, v0}, Ljava/util/Hashtable;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    if-nez v1, :cond_1

    .line 1173
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isActiveOm()Z

    move-result v2

    if-eqz v2, :cond_1

    .line 1174
    iget-object v3, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->i:Landroid/content/Context;

    const/4 v4, 0x1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getOmid()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v7

    iget-object v8, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->j:Ljava/lang/String;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v10

    const-string v9, ""

    invoke-static/range {v3 .. v10}, Lcom/mbridge/msdk/a/b;->a(Landroid/content/Context;ZLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    move-result-object v1

    :cond_1
    if-eqz v1, :cond_2

    .line 1177
    iget-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->L:Ljava/util/Hashtable;

    invoke-virtual {p1, v0, v1}, Ljava/util/Hashtable;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_2
    return-object v1
.end method

.method static synthetic b(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Ljava/lang/String;
    .locals 0

    .line 93
    iget-object p0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->j:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic b(Lcom/mbridge/msdk/mbnative/controller/NativeController;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 93
    iput-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->T:Ljava/lang/String;

    return-object p1
.end method

.method private b(Ljava/util/List;)Ljava/util/List;
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/out/Campaign;",
            ">;)",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/out/Campaign;",
            ">;"
        }
    .end annotation

    if-eqz p1, :cond_1

    .line 2438
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v0

    const/4 v1, 0x0

    add-int/lit8 v0, v0, -0x1

    :goto_0
    if-ltz v0, :cond_1

    .line 2442
    :try_start_0
    invoke-interface {p1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mbridge/msdk/foundation/entity/CampaignEx;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    move-object v1, v2

    goto :goto_1

    :catchall_0
    move-exception v2

    .line 2444
    invoke-virtual {v2}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_1
    if-eqz v1, :cond_0

    .line 2446
    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoUrlEncode()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 2447
    invoke-interface {p1, v0}, Ljava/util/List;->remove(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mbridge/msdk/out/Campaign;

    .line 2448
    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getType()I

    move-result v3

    invoke-static {v3}, Lcom/mbridge/msdk/mbnative/a/f;->a(I)Lcom/mbridge/msdk/mbnative/a/b;

    move-result-object v3

    .line 2449
    iget-object v4, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->j:Ljava/lang/String;

    iget-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->V:Ljava/lang/String;

    invoke-virtual {v3, v4, v2, v5}, Lcom/mbridge/msdk/mbnative/a/b;->a(Ljava/lang/String;Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V

    .line 2450
    sget-object v3, Lcom/mbridge/msdk/mbnative/controller/NativeController;->e:Ljava/lang/String;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "remove no videoURL ads:"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v3, v2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    add-int/lit8 v0, v0, -0x1

    goto :goto_0

    :cond_1
    return-object p1
.end method

.method public static b(Ljava/util/Map;)Ljava/util/List;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    const-string v0, "key_word"

    const/4 v1, 0x0

    .line 2134
    :try_start_0
    invoke-interface {p0, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    instance-of v2, v2, Ljava/lang/String;

    if-eqz v2, :cond_4

    .line 2135
    invoke-interface {p0, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/String;

    .line 2136
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-object v1

    .line 2140
    :cond_0
    new-instance v0, Lorg/json/JSONArray;

    invoke-direct {v0, p0}, Lorg/json/JSONArray;-><init>(Ljava/lang/String;)V

    .line 2141
    invoke-virtual {v0}, Lorg/json/JSONArray;->length()I

    move-result p0

    if-nez p0, :cond_1

    return-object v1

    .line 2145
    :cond_1
    new-instance p0, Ljava/util/ArrayList;

    invoke-direct {p0}, Ljava/util/ArrayList;-><init>()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    const/4 v1, 0x0

    .line 2146
    :goto_0
    :try_start_1
    invoke-virtual {v0}, Lorg/json/JSONArray;->length()I

    move-result v2

    if-ge v1, v2, :cond_3

    .line 2148
    invoke-virtual {v0, v1}, Lorg/json/JSONArray;->optJSONObject(I)Lorg/json/JSONObject;

    move-result-object v2

    if-eqz v2, :cond_2

    const-string v3, "p"

    .line 2150
    invoke-virtual {v2, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 2151
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_2

    .line 2152
    invoke-virtual {p0, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    :cond_2
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_3
    move-object v1, p0

    goto :goto_2

    :catch_0
    move-exception v0

    move-object v1, p0

    goto :goto_1

    :catch_1
    move-exception v0

    .line 2158
    :goto_1
    sget-object p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->e:Ljava/lang/String;

    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/b/a;->a(Ljava/lang/Exception;)Ljava/lang/String;

    move-result-object v0

    invoke-static {p0, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_4
    :goto_2
    return-object v1
.end method

.method private b(IJILjava/lang/String;)V
    .locals 7

    const/4 v1, 0x2

    const/4 v2, 0x1

    if-nez p4, :cond_2

    .line 715
    invoke-static {p1}, Lcom/mbridge/msdk/mbnative/a/f;->a(I)Lcom/mbridge/msdk/mbnative/a/b;

    move-result-object v3

    if-eqz v3, :cond_2

    if-eq p1, v2, :cond_0

    if-ne p1, v1, :cond_1

    .line 717
    :cond_0
    iget-object v4, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->d:Ljava/util/Map;

    const-string v5, "native_info"

    invoke-interface {v4, v5}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_1

    .line 718
    iget v4, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->M:I

    iput v4, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->t:I

    goto :goto_0

    .line 720
    :cond_1
    iget v4, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->s:I

    iput v4, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->t:I

    .line 722
    :goto_0
    iget-object v4, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->j:Ljava/lang/String;

    iget v5, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->t:I

    invoke-virtual {v3, v4, v5}, Lcom/mbridge/msdk/mbnative/a/b;->b(Ljava/lang/Object;I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/util/List;

    .line 723
    invoke-direct {p0, v3}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->d(Ljava/util/List;)Ljava/util/List;

    move-result-object v3

    invoke-direct {p0, p1, v3}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a(ILjava/util/List;)Ljava/util/List;

    move-result-object v3

    invoke-direct {p0, v3}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a(Ljava/util/List;)Z

    move-result v3

    if-eqz v3, :cond_2

    return-void

    :cond_2
    const/4 v3, 0x0

    .line 728
    iput-boolean v3, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->x:Z

    if-eq p1, v2, :cond_4

    if-eq p1, v1, :cond_3

    .line 737
    invoke-virtual/range {p0 .. p5}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a(IJILjava/lang/String;)V

    goto :goto_1

    :cond_3
    const/4 v1, 0x2

    move-object v0, p0

    move-wide v2, p2

    move v4, p4

    move-object v5, p5

    .line 734
    invoke-virtual/range {v0 .. v5}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a(IJILjava/lang/String;)V

    goto :goto_1

    :cond_4
    const/4 v4, 0x1

    .line 731
    iget-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->j:Ljava/lang/String;

    move-object v0, p0

    move-wide v1, p2

    move v3, p4

    move-object v6, p5

    invoke-direct/range {v0 .. v6}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a(JIZLjava/lang/String;Ljava/lang/String;)V

    :goto_1
    return-void
.end method

.method private b(ILjava/lang/String;)V
    .locals 7

    .line 684
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->l:Ljava/util/Queue;

    if-eqz v0, :cond_1

    invoke-interface {v0}, Ljava/util/Queue;->size()I

    move-result v0

    if-lez v0, :cond_1

    .line 685
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->l:Ljava/util/Queue;

    invoke-interface {v0}, Ljava/util/Queue;->poll()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v2

    .line 686
    sget v0, Lcom/mbridge/msdk/MBridgeConstans;->REQUEST_TIME_OUT:I

    int-to-long v0, v0

    iput-wide v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->X:J

    .line 687
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->m:Ljava/util/Queue;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Ljava/util/Queue;->size()I

    move-result v0

    if-lez v0, :cond_0

    .line 688
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->m:Ljava/util/Queue;

    invoke-interface {v0}, Ljava/util/Queue;->poll()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Long;

    invoke-virtual {v0}, Ljava/lang/Long;->longValue()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->X:J

    .line 690
    :cond_0
    sget-object v0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->e:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "start queue adsource = "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 691
    iget-wide v3, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->X:J

    move-object v1, p0

    move v5, p1

    move-object v6, p2

    invoke-direct/range {v1 .. v6}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->b(IJILjava/lang/String;)V

    goto :goto_0

    .line 693
    :cond_1
    iget-boolean p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->y:Z

    if-nez p1, :cond_2

    iget-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->g:Lcom/mbridge/msdk/mbnative/c/a;

    if-eqz p1, :cond_2

    .line 694
    sget-object p1, Lcom/mbridge/msdk/mbnative/controller/NativeController;->e:Ljava/lang/String;

    const-string p2, "no ad source return"

    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    const/4 p1, 0x1

    .line 695
    iput-boolean p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->y:Z

    .line 696
    iget-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->g:Lcom/mbridge/msdk/mbnative/c/a;

    const-string p2, "no ad source"

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/mbnative/c/a;->onAdLoadError(Ljava/lang/String;)V

    :cond_2
    :goto_0
    return-void
.end method

.method static synthetic b(Lcom/mbridge/msdk/mbnative/controller/NativeController;Ljava/util/List;)V
    .locals 12

    const-string v0, "com.mbridge.msdk.videocommon.download.b"

    if-eqz p1, :cond_4

    .line 7196
    :try_start_0
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_4

    .line 7197
    sget-object v1, Lcom/mbridge/msdk/mbnative/controller/NativeController;->e:Ljava/lang/String;

    const-string v2, "===\u521b\u5efa\u4e0b\u8f7d\u4efb\u52a1"

    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    const-string v1, "com.mbridge.msdk.nativex.view.MBMediaView"

    .line 7199
    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    .line 7200
    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    .line 7201
    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    const-string v1, "com.mbridge.msdk.videocommon.listener.a"

    .line 7202
    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    const-string v2, "getInstance"

    const/4 v3, 0x0

    new-array v4, v3, [Ljava/lang/Class;

    .line 7203
    invoke-virtual {v0, v2, v4}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v2

    new-array v4, v3, [Ljava/lang/Object;

    const/4 v5, 0x0

    .line 7204
    invoke-virtual {v2, v5, v4}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    if-eqz v2, :cond_0

    const-string v4, "createUnitCache"

    const/4 v6, 0x5

    new-array v7, v6, [Ljava/lang/Class;

    .line 7206
    const-class v8, Landroid/content/Context;

    aput-object v8, v7, v3

    const-class v8, Ljava/lang/String;

    const/4 v9, 0x1

    aput-object v8, v7, v9

    const-class v8, Ljava/util/concurrent/CopyOnWriteArrayList;

    const/4 v10, 0x2

    aput-object v8, v7, v10

    sget-object v8, Ljava/lang/Integer;->TYPE:Ljava/lang/Class;

    const/4 v11, 0x3

    aput-object v8, v7, v11

    const/4 v8, 0x4

    aput-object v1, v7, v8

    invoke-virtual {v0, v4, v7}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1

    new-array v4, v6, [Ljava/lang/Object;

    .line 7207
    iget-object v6, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->i:Landroid/content/Context;

    aput-object v6, v4, v3

    iget-object v6, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->j:Ljava/lang/String;

    aput-object v6, v4, v9

    new-instance v6, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v6, p1}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>(Ljava/util/Collection;)V

    aput-object v6, v4, v10

    invoke-static {v9}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    aput-object v6, v4, v11

    aput-object v5, v4, v8

    invoke-virtual {v1, v2, v4}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "load"

    new-array v4, v9, [Ljava/lang/Class;

    .line 7208
    const-class v5, Ljava/lang/String;

    aput-object v5, v4, v3

    invoke-virtual {v0, v1, v4}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v0

    new-array v1, v9, [Ljava/lang/Object;

    .line 7209
    iget-object v4, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->j:Ljava/lang/String;

    aput-object v4, v1, v3

    invoke-virtual {v0, v2, v1}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    .line 7213
    :cond_0
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :catch_0
    :cond_1
    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_5

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_2

    .line 7214
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImageUrl()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    .line 7215
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/same/c/b;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/same/c/b;

    move-result-object v1

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImageUrl()Ljava/lang/String;

    move-result-object v2

    new-instance v3, Lcom/mbridge/msdk/mbnative/controller/NativeController$6;

    invoke-direct {v3, p0}, Lcom/mbridge/msdk/mbnative/controller/NativeController$6;-><init>(Lcom/mbridge/msdk/mbnative/controller/NativeController;)V

    invoke-virtual {v1, v2, v3}, Lcom/mbridge/msdk/foundation/same/c/b;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/same/c/c;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 7230
    :cond_2
    :try_start_2
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getendcard_url()Ljava/lang/String;

    move-result-object v1

    .line 7231
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_1

    const-string v2, ".zip"

    .line 7233
    invoke-virtual {v1, v2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_3

    const-string v2, "md5filename"

    invoke-virtual {v1, v2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_3

    .line 7234
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;->getInstance()Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;

    move-result-object v2

    invoke-virtual {v2, v1}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;->getH5ResAddress(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    .line 7237
    new-instance v3, Lcom/mbridge/msdk/mbnative/controller/NativeController$g;

    iget-object v4, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->j:Ljava/lang/String;

    invoke-direct {v3, v4, v0, v2}, Lcom/mbridge/msdk/mbnative/controller/NativeController$g;-><init>(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Z)V

    .line 7238
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;->getInstance()Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;

    move-result-object v0

    invoke-virtual {v0, v1, v3}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;->downloadH5Res(Ljava/lang/String;Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$H5ResDownloadListerInter;)V

    goto :goto_0

    .line 7240
    :cond_3
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/HTMLResourceManager;->getInstance()Lcom/mbridge/msdk/foundation/download/download/HTMLResourceManager;

    move-result-object v2

    invoke-virtual {v2, v1}, Lcom/mbridge/msdk/foundation/download/download/HTMLResourceManager;->getHtmlContentFromUrl(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    .line 7243
    new-instance v3, Lcom/mbridge/msdk/mbnative/controller/NativeController$d;

    iget-object v4, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->j:Ljava/lang/String;

    invoke-direct {v3, v4, v0, v2}, Lcom/mbridge/msdk/mbnative/controller/NativeController$d;-><init>(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Z)V

    .line 7244
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;->getInstance()Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;

    move-result-object v0

    invoke-virtual {v0, v1, v3}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;->downloadH5Res(Ljava/lang/String;Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$H5ResDownloadListerInter;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_0

    .line 7253
    :catchall_0
    :try_start_3
    sget-object p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->e:Ljava/lang/String;

    const-string p1, "please import the videocommon and nativex aar"

    invoke-static {p0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    .line 7256
    :cond_4
    sget-object p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->e:Ljava/lang/String;

    const-string p1, "onload \u4e0d\u7528\u4e0b\u8f7d\u89c6\u9891\u7d20\u6750 size\u4e3a0"

    invoke-static {p0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    goto :goto_1

    :catchall_1
    move-exception p0

    .line 7260
    sget-boolean p1, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz p1, :cond_5

    .line 7261
    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_5
    :goto_1
    return-void
.end method

.method static synthetic b(Lcom/mbridge/msdk/mbnative/controller/NativeController;Z)Z
    .locals 0

    .line 93
    iput-boolean p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->aa:Z

    return p1
.end method

.method static synthetic c(Lcom/mbridge/msdk/mbnative/controller/NativeController;)I
    .locals 0

    .line 93
    iget p0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->t:I

    return p0
.end method

.method static synthetic c()Ljava/lang/String;
    .locals 1

    .line 93
    sget-object v0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->e:Ljava/lang/String;

    return-object v0
.end method

.method static synthetic c(Lcom/mbridge/msdk/mbnative/controller/NativeController;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 93
    iput-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->N:Ljava/lang/String;

    return-object p1
.end method

.method static synthetic c(Lcom/mbridge/msdk/mbnative/controller/NativeController;Ljava/util/List;)Ljava/util/List;
    .locals 0

    .line 93
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->d(Ljava/util/List;)Ljava/util/List;

    move-result-object p0

    return-object p0
.end method

.method private c(Ljava/util/List;)Ljava/util/List;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/out/Campaign;",
            ">;)",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/out/Campaign;",
            ">;"
        }
    .end annotation

    const/4 v0, 0x0

    if-eqz p1, :cond_2

    .line 2460
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_0
    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mbridge/msdk/out/Campaign;

    .line 2461
    instance-of v2, v1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v2, :cond_0

    .line 2462
    move-object v2, v1

    check-cast v2, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 2463
    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImageUrl()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_0

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoUrlEncode()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_0

    if-nez v0, :cond_1

    .line 2465
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 2467
    :cond_1
    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    :cond_2
    return-object v0
.end method

.method static synthetic c(Lcom/mbridge/msdk/mbnative/controller/NativeController;Z)Z
    .locals 0

    .line 93
    iput-boolean p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->y:Z

    return p1
.end method

.method static synthetic d(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Ljava/lang/String;
    .locals 0

    .line 93
    iget-object p0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->V:Ljava/lang/String;

    return-object p0
.end method

.method private d(Ljava/util/List;)Ljava/util/List;
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/out/Campaign;",
            ">;)",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/out/Campaign;",
            ">;"
        }
    .end annotation

    if-nez p1, :cond_0

    const/4 p1, 0x0

    return-object p1

    .line 2574
    :cond_0
    new-instance v0, Ljava/util/ArrayList;

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v1

    invoke-direct {v0, v1}, Ljava/util/ArrayList;-><init>(I)V

    .line 2575
    new-instance v1, Ljava/util/ArrayList;

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v2

    invoke-direct {v1, v2}, Ljava/util/ArrayList;-><init>(I)V

    .line 2576
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_1
    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_4

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mbridge/msdk/out/Campaign;

    .line 2577
    instance-of v3, v2, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v3, :cond_3

    .line 2578
    move-object v3, v2

    check-cast v3, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 2579
    iget-object v4, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->V:Ljava/lang/String;

    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_2

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getBidToken()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_2

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isBidCampaign()Z

    move-result v4

    if-nez v4, :cond_2

    .line 2580
    invoke-interface {v1, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    .line 2581
    :cond_2
    iget-object v4, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->V:Ljava/lang/String;

    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_1

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getBidToken()Ljava/lang/String;

    move-result-object v3

    iget-object v4, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->V:Ljava/lang/String;

    invoke-static {v3, v4}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_1

    .line 2582
    invoke-interface {v0, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    .line 2585
    :cond_3
    invoke-interface {v1, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    .line 2588
    :cond_4
    iget-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->V:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_5

    return-object v1

    :cond_5
    return-object v0
.end method

.method static synthetic d()Z
    .locals 1

    .line 93
    sget-boolean v0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->B:Z

    return v0
.end method

.method static synthetic d(Lcom/mbridge/msdk/mbnative/controller/NativeController;Z)Z
    .locals 0

    .line 93
    iput-boolean p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->x:Z

    return p1
.end method

.method private e()Lcom/mbridge/msdk/c/d;
    .locals 3

    .line 2429
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->j:Ljava/lang/String;

    const-string v2, ""

    invoke-virtual {v0, v2, v1}, Lcom/mbridge/msdk/c/b;->e(Ljava/lang/String;Ljava/lang/String;)Lcom/mbridge/msdk/c/d;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->W:Lcom/mbridge/msdk/c/d;

    if-nez v0, :cond_0

    .line 2431
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->j:Ljava/lang/String;

    invoke-static {v0}, Lcom/mbridge/msdk/c/d;->d(Ljava/lang/String;)Lcom/mbridge/msdk/c/d;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->W:Lcom/mbridge/msdk/c/d;

    .line 2433
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->W:Lcom/mbridge/msdk/c/d;

    return-object v0
.end method

.method static synthetic e(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Z
    .locals 0

    .line 93
    iget-boolean p0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->y:Z

    return p0
.end method

.method static synthetic f(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Lcom/mbridge/msdk/click/b;
    .locals 0

    .line 93
    iget-object p0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->r:Lcom/mbridge/msdk/click/b;

    return-object p0
.end method

.method private f()V
    .locals 1

    .line 2560
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->U:Ljava/util/Timer;

    if-eqz v0, :cond_0

    .line 2561
    invoke-virtual {v0}, Ljava/util/Timer;->cancel()V

    const/4 v0, 0x0

    .line 2562
    iput-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->U:Ljava/util/Timer;

    :cond_0
    return-void
.end method

.method static synthetic g(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Lcom/mbridge/msdk/mbnative/c/a;
    .locals 0

    .line 93
    iget-object p0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->g:Lcom/mbridge/msdk/mbnative/c/a;

    return-object p0
.end method

.method static synthetic h(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Ljava/util/concurrent/CopyOnWriteArrayList;
    .locals 0

    .line 93
    iget-object p0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->K:Ljava/util/concurrent/CopyOnWriteArrayList;

    return-object p0
.end method

.method static synthetic i(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Landroid/content/Context;
    .locals 0

    .line 93
    iget-object p0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->i:Landroid/content/Context;

    return-object p0
.end method

.method public static insertExcludeId(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    .locals 4

    .line 2413
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    if-eqz p1, :cond_0

    .line 2414
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 2417
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    .line 2416
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/k;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/k;

    move-result-object v0

    .line 2418
    new-instance v1, Lcom/mbridge/msdk/foundation/entity/g;

    invoke-direct {v1}, Lcom/mbridge/msdk/foundation/entity/g;-><init>()V

    .line 2419
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    invoke-virtual {v1, v2, v3}, Lcom/mbridge/msdk/foundation/entity/g;->a(J)V

    .line 2420
    invoke-virtual {v1, p0}, Lcom/mbridge/msdk/foundation/entity/g;->b(Ljava/lang/String;)V

    .line 2421
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v1, p0}, Lcom/mbridge/msdk/foundation/entity/g;->a(Ljava/lang/String;)V

    .line 2422
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/db/k;->a(Lcom/mbridge/msdk/foundation/entity/g;)V

    :cond_0
    return-void
.end method

.method static synthetic j(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Z
    .locals 0

    .line 93
    iget-boolean p0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->x:Z

    return p0
.end method

.method static synthetic k(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Lcom/mbridge/msdk/mbnative/controller/NativeController$e;
    .locals 0

    .line 93
    iget-object p0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->o:Lcom/mbridge/msdk/mbnative/controller/NativeController$e;

    return-object p0
.end method

.method static synthetic l(Lcom/mbridge/msdk/mbnative/controller/NativeController;)I
    .locals 0

    .line 93
    iget p0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->Y:I

    return p0
.end method

.method static synthetic m(Lcom/mbridge/msdk/mbnative/controller/NativeController;)I
    .locals 0

    .line 93
    iget p0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->ab:I

    return p0
.end method

.method static synthetic n(Lcom/mbridge/msdk/mbnative/controller/NativeController;)I
    .locals 0

    .line 93
    iget p0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->ac:I

    return p0
.end method

.method static synthetic o(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Z
    .locals 0

    .line 93
    iget-boolean p0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->z:Z

    return p0
.end method

.method static synthetic p(Lcom/mbridge/msdk/mbnative/controller/NativeController;)I
    .locals 0

    .line 93
    iget p0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->u:I

    return p0
.end method

.method static synthetic q(Lcom/mbridge/msdk/mbnative/controller/NativeController;)I
    .locals 0

    .line 93
    iget p0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->v:I

    return p0
.end method

.method static synthetic r(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Lcom/mbridge/msdk/foundation/db/i;
    .locals 0

    .line 93
    iget-object p0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->O:Lcom/mbridge/msdk/foundation/db/i;

    return-object p0
.end method

.method static synthetic s(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Ljava/util/Map;
    .locals 0

    .line 93
    iget-object p0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->H:Ljava/util/Map;

    return-object p0
.end method

.method static synthetic t(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Lcom/mbridge/msdk/foundation/same/e/b;
    .locals 0

    .line 93
    iget-object p0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->G:Lcom/mbridge/msdk/foundation/same/e/b;

    return-object p0
.end method

.method static synthetic u(Lcom/mbridge/msdk/mbnative/controller/NativeController;)V
    .locals 0

    .line 93
    invoke-direct {p0}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->f()V

    return-void
.end method

.method static synthetic v(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Lcom/mbridge/msdk/c/d;
    .locals 0

    .line 93
    invoke-direct {p0}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->e()Lcom/mbridge/msdk/c/d;

    move-result-object p0

    return-object p0
.end method


# virtual methods
.method public final a()V
    .locals 3

    .line 1387
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->G:Lcom/mbridge/msdk/foundation/same/e/b;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 1388
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/same/e/b;->a()V

    .line 1389
    iput-object v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->G:Lcom/mbridge/msdk/foundation/same/e/b;

    .line 1391
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->L:Ljava/util/Hashtable;

    if-eqz v0, :cond_3

    .line 1392
    invoke-virtual {v0}, Ljava/util/Hashtable;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_1
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    if-eqz v2, :cond_1

    .line 1394
    invoke-virtual {v2}, Lcom/iab/omid/library/mmadbridge/adsession/AdSession;->finish()V

    goto :goto_0

    .line 1398
    :cond_2
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->L:Ljava/util/Hashtable;

    invoke-virtual {v0}, Ljava/util/Hashtable;->clear()V

    .line 1400
    :cond_3
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->o:Lcom/mbridge/msdk/mbnative/controller/NativeController$e;

    if-eqz v0, :cond_4

    .line 1401
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/mbnative/controller/NativeController$e;->removeCallbacksAndMessages(Ljava/lang/Object;)V

    .line 1404
    :cond_4
    iput-object v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->h:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    .line 1406
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->r:Lcom/mbridge/msdk/click/b;

    invoke-virtual {v0}, Lcom/mbridge/msdk/click/b;->a()V

    .line 1408
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->i:Landroid/content/Context;

    if-eqz v0, :cond_5

    .line 1409
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->i:Landroid/content/Context;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/same/c/b;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/same/c/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/same/c/b;->c()V

    .line 1412
    :cond_5
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->I:Ljava/util/List;

    if-eqz v0, :cond_7

    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->I:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_7

    .line 1413
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->I:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_1
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_6

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mbridge/msdk/mbnative/controller/a;

    .line 1414
    invoke-virtual {v2}, Lcom/mbridge/msdk/mbnative/controller/a;->a()V

    goto :goto_1

    .line 1416
    :cond_6
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->I:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->clear()V

    .line 1417
    iput-object v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->I:Ljava/util/List;

    .line 1419
    :cond_7
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->J:Ljava/util/List;

    if-eqz v0, :cond_9

    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->J:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_9

    .line 1420
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->J:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_2
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_8

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mbridge/msdk/mbnative/controller/a$a;

    goto :goto_2

    .line 1423
    :cond_8
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->J:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->clear()V

    .line 1424
    iput-object v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->J:Ljava/util/List;

    .line 1426
    :cond_9
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->K:Ljava/util/concurrent/CopyOnWriteArrayList;

    if-eqz v0, :cond_b

    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->K:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result v0

    if-lez v0, :cond_b

    .line 1427
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->K:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v0

    .line 1428
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_a

    .line 1429
    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/foundation/same/e/a;

    if-eqz v0, :cond_a

    .line 1431
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/same/e/a;->cancel()V

    .line 1432
    iget-object v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->o:Lcom/mbridge/msdk/mbnative/controller/NativeController$e;

    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/mbnative/controller/NativeController$e;->removeCallbacks(Ljava/lang/Runnable;)V

    .line 1435
    :cond_a
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->K:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;->clear()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :cond_b
    return-void
.end method

.method public final declared-synchronized a(IJILjava/lang/String;)V
    .locals 10

    monitor-enter p0

    .line 786
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->d:Ljava/util/Map;

    const-string v1, "native_info"

    invoke-interface {v0, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 787
    iget v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->ab:I

    iget v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->ac:I

    invoke-static {v0, v1}, Ljava/lang/Math;->max(II)I

    move-result v0

    iput v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->t:I

    :cond_0
    const/4 v0, 0x1

    if-nez p4, :cond_5

    .line 790
    invoke-static {p1}, Lcom/mbridge/msdk/mbnative/a/f;->a(I)Lcom/mbridge/msdk/mbnative/a/b;

    move-result-object v1

    .line 791
    iget-boolean v2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->x:Z

    if-eqz v2, :cond_4

    if-eqz v1, :cond_1

    .line 793
    iget-object v2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->j:Ljava/lang/String;

    iget v3, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->t:I

    invoke-virtual {v1, v2, v3}, Lcom/mbridge/msdk/mbnative/a/b;->b(Ljava/lang/Object;I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/List;

    .line 794
    invoke-direct {p0, v1}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->d(Ljava/util/List;)Ljava/util/List;

    move-result-object v1

    invoke-direct {p0, v0, v1}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a(ILjava/util/List;)Ljava/util/List;

    move-result-object v1

    invoke-direct {p0, v1}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a(Ljava/util/List;)Z

    move-result v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v1, :cond_1

    .line 795
    monitor-exit p0

    return-void

    .line 798
    :cond_1
    :try_start_1
    sget-object v1, Lcom/mbridge/msdk/mbnative/controller/NativeController;->e:Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "isGetApiReulst = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v3, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->aa:Z

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v3, " isReturn = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v3, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->y:Z

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 800
    iget-object v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->Q:Lcom/mbridge/msdk/mbnative/controller/NativeController$a;

    if-eqz v1, :cond_2

    iget-boolean v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->aa:Z

    if-nez v1, :cond_2

    .line 801
    iget-object v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->Q:Lcom/mbridge/msdk/mbnative/controller/NativeController$a;

    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->b(Z)V

    .line 803
    :cond_2
    iget-boolean v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->aa:Z

    if-eqz v1, :cond_3

    iget-boolean v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->y:Z

    if-nez v1, :cond_3

    .line 804
    sget-object v1, Lcom/mbridge/msdk/mbnative/controller/NativeController;->e:Ljava/lang/String;

    const-string v2, "222222"

    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    const-string v1, "mb load failed"

    .line 805
    invoke-virtual {p0, v1, p4, p5}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a(Ljava/lang/String;ILjava/lang/String;)V

    .line 808
    :cond_3
    iget-boolean v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->ad:Z
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-nez v1, :cond_5

    .line 809
    monitor-exit p0

    return-void

    :cond_4
    if-eq p1, v0, :cond_5

    if-eqz v1, :cond_5

    .line 814
    :try_start_2
    iget-object v2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->j:Ljava/lang/String;

    iget v3, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->t:I

    invoke-virtual {v1, v2, v3}, Lcom/mbridge/msdk/mbnative/a/b;->b(Ljava/lang/Object;I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/List;

    .line 815
    invoke-direct {p0, v1}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->d(Ljava/util/List;)Ljava/util/List;

    move-result-object v1

    invoke-direct {p0, p1, v1}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a(ILjava/util/List;)Ljava/util/List;

    move-result-object v1

    invoke-direct {p0, v1}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a(Ljava/util/List;)Z

    move-result v1
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    if-eqz v1, :cond_5

    .line 816
    monitor-exit p0

    return-void

    .line 823
    :cond_5
    :try_start_3
    iget v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->u:I

    const/4 v2, -0x1

    const/4 v3, 0x0

    if-ne v1, v2, :cond_6

    .line 824
    iput p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->u:I

    goto :goto_0

    .line 825
    :cond_6
    iget v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->u:I

    if-eq v1, p1, :cond_7

    .line 826
    iput v3, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->v:I

    .line 829
    :cond_7
    :goto_0
    iget-object v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->i:Landroid/content/Context;

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/db/f;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/f;

    move-result-object v1

    .line 830
    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/db/f;->a()V

    .line 832
    sget-object v1, Lcom/mbridge/msdk/mbnative/controller/NativeController;->e:Ljava/lang/String;

    const-string v2, "START LOAD MB MVNATIVE"

    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 834
    new-instance v1, Lcom/mbridge/msdk/mbnative/e/a/a;

    iget-object v2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->i:Landroid/content/Context;

    invoke-direct {v1, v2}, Lcom/mbridge/msdk/mbnative/e/a/a;-><init>(Landroid/content/Context;)V

    .line 835
    new-instance v2, Lcom/mbridge/msdk/foundation/same/net/g/d;

    invoke-direct {v2}, Lcom/mbridge/msdk/foundation/same/net/g/d;-><init>()V

    .line 836
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v4

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v4

    .line 837
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v5

    invoke-virtual {v5}, Lcom/mbridge/msdk/foundation/controller/a;->l()Ljava/lang/String;

    move-result-object v5

    .line 839
    iget-object v6, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->d:Ljava/util/Map;

    if-eqz v6, :cond_b

    iget-object v6, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->d:Ljava/util/Map;

    const-string v7, "app_id"

    invoke-interface {v6, v7}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_b

    iget-object v6, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->d:Ljava/util/Map;

    const-string v7, "app_key"

    .line 840
    invoke-interface {v6, v7}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_b

    iget-object v6, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->d:Ljava/util/Map;

    const-string v7, "key_word"

    invoke-interface {v6, v7}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_b

    iget-object v6, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->d:Ljava/util/Map;

    const-string v7, "key_word"

    .line 841
    invoke-interface {v6, v7}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    if-eqz v6, :cond_b

    const/4 v6, 0x0

    .line 843
    iget-object v7, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->d:Ljava/util/Map;

    const-string v8, "app_id"

    invoke-interface {v7, v8}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v7

    instance-of v7, v7, Ljava/lang/String;

    if-eqz v7, :cond_8

    .line 844
    iget-object v4, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->d:Ljava/util/Map;

    const-string v7, "app_id"

    invoke-interface {v4, v7}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    .line 846
    :cond_8
    iget-object v7, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->d:Ljava/util/Map;

    const-string v8, "app_key"

    invoke-interface {v7, v8}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v7

    instance-of v7, v7, Ljava/lang/String;

    if-eqz v7, :cond_9

    .line 847
    iget-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->d:Ljava/util/Map;

    const-string v7, "app_key"

    invoke-interface {v5, v7}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Ljava/lang/String;

    .line 849
    :cond_9
    iget-object v7, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->d:Ljava/util/Map;

    const-string v8, "key_word"

    invoke-interface {v7, v8}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v7

    instance-of v7, v7, Ljava/lang/String;

    if-eqz v7, :cond_a

    .line 850
    iget-object v6, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->d:Ljava/util/Map;

    const-string v7, "key_word"

    invoke-interface {v6, v7}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Ljava/lang/String;

    .line 852
    :cond_a
    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v7

    if-nez v7, :cond_b

    const-string v7, "smart"

    .line 853
    invoke-static {v6}, Lcom/mbridge/msdk/foundation/tools/t;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v2, v7, v6}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_b
    const-string v6, "app_id"

    .line 857
    invoke-virtual {v2, v6, v4}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string v6, "unit_id"

    .line 858
    iget-object v7, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->j:Ljava/lang/String;

    invoke-virtual {v2, v6, v7}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 859
    iget-object v6, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->k:Ljava/lang/String;

    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_c

    .line 860
    sget-object v6, Lcom/mbridge/msdk/MBridgeConstans;->PLACEMENT_ID:Ljava/lang/String;

    iget-object v7, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->k:Ljava/lang/String;

    invoke-virtual {v2, v6, v7}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_c
    const-string v6, "req_type"

    const-string v7, "2"

    .line 862
    invoke-virtual {v2, v6, v7}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 863
    iget-object v6, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->w:Ljava/lang/String;

    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_d

    const-string v6, "category"

    .line 864
    iget-object v7, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->w:Ljava/lang/String;

    invoke-virtual {v2, v6, v7}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_d
    const-string v6, "sign"

    .line 866
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Lcom/mbridge/msdk/foundation/tools/SameMD5;->getMD5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v6, v4}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 868
    iget v4, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->Z:I

    if-lez v4, :cond_e

    if-nez p4, :cond_e

    const-string v4, "ad_num"

    .line 869
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    iget v6, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->Z:I

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v6, ""

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v2, v4, v5}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    :cond_e
    const-string v4, "ad_num"

    .line 871
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    iget v6, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->s:I

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v6, ""

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v2, v4, v5}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 874
    :goto_1
    iget-object v4, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->j:Ljava/lang/String;

    invoke-static {v4}, Lcom/mbridge/msdk/foundation/tools/ae;->g(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    .line 875
    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_f

    const-string v5, "j"

    .line 876
    invoke-virtual {v2, v5, v4}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_f
    const-string v4, "only_impression"

    const-string v5, "1"

    .line 879
    invoke-virtual {v2, v4, v5}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string v4, "ping_mode"

    const-string v5, "1"

    .line 880
    invoke-virtual {v2, v4, v5}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 882
    iget v4, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->E:I

    if-eqz v4, :cond_10

    const-string v4, "frame_num"

    .line 883
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    iget v6, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->E:I

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v6, ""

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v2, v4, v5}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 887
    :cond_10
    iget-object v4, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->n:Ljava/lang/String;

    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_11

    const-string v4, "native_info"

    .line 888
    iget-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->n:Ljava/lang/String;

    invoke-virtual {v2, v4, v5}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    if-ne p1, v0, :cond_12

    .line 890
    sget-boolean v4, Lcom/mbridge/msdk/click/b;->a:Z

    if-nez v4, :cond_12

    const-string v4, "tnum"

    .line 891
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    iget v6, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->M:I

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v6, ""

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v2, v4, v5}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_2

    :cond_11
    if-ne p1, v0, :cond_12

    .line 893
    sget-boolean v4, Lcom/mbridge/msdk/click/b;->a:Z

    if-nez v4, :cond_12

    const-string v4, "tnum"

    .line 894
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    iget v6, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->s:I

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v6, ""

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v2, v4, v5}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_12
    :goto_2
    if-ne p1, v0, :cond_13

    .line 897
    iget-object v4, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->N:Ljava/lang/String;

    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_13

    const-string v4, "ttc_ids"

    .line 898
    iget-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->N:Ljava/lang/String;

    invoke-virtual {v2, v4, v5}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 901
    :cond_13
    iget-object v4, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->j:Ljava/lang/String;

    const-string v5, "native"

    invoke-static {v4, v5}, Lcom/mbridge/msdk/foundation/same/a/d;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    .line 902
    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_14

    .line 903
    sget-object v5, Lcom/mbridge/msdk/foundation/same/net/g/d;->b:Ljava/lang/String;

    invoke-virtual {v2, v5, v4}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 908
    :cond_14
    sget v4, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v5, 0xe

    if-lt v4, v5, :cond_18

    .line 910
    iget-object v4, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->d:Ljava/util/Map;

    const-string v5, "native_video_width"

    invoke-interface {v4, v5}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_15

    iget-object v4, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->d:Ljava/util/Map;

    const-string v5, "native_video_width"

    invoke-interface {v4, v5}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    instance-of v4, v4, Ljava/lang/Integer;

    if-eqz v4, :cond_15

    const-string v4, "video_width"

    .line 911
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v6, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->d:Ljava/util/Map;

    const-string v7, "native_video_width"

    invoke-interface {v6, v7}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Ljava/lang/Integer;

    invoke-virtual {v6}, Ljava/lang/Integer;->intValue()I

    move-result v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v6, ""

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v2, v4, v5}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 913
    :cond_15
    iget-object v4, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->d:Ljava/util/Map;

    const-string v5, "native_video_height"

    invoke-interface {v4, v5}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_16

    iget-object v4, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->d:Ljava/util/Map;

    const-string v5, "native_video_height"

    invoke-interface {v4, v5}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    instance-of v4, v4, Ljava/lang/Integer;

    if-eqz v4, :cond_16

    const-string v4, "video_height"

    .line 914
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v6, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->d:Ljava/util/Map;

    const-string v7, "native_video_height"

    invoke-interface {v6, v7}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Ljava/lang/Integer;

    invoke-virtual {v6}, Ljava/lang/Integer;->intValue()I

    move-result v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v6, ""

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v2, v4, v5}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 916
    :cond_16
    iget-object v4, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->d:Ljava/util/Map;

    const-string v5, "videoSupport"

    invoke-interface {v4, v5}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_17

    iget-object v4, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->d:Ljava/util/Map;

    const-string v5, "videoSupport"

    invoke-interface {v4, v5}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    instance-of v4, v4, Ljava/lang/Boolean;

    if-eqz v4, :cond_17

    iget-object v4, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->d:Ljava/util/Map;

    const-string v5, "videoSupport"

    invoke-interface {v4, v5}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/Boolean;

    invoke-virtual {v4}, Ljava/lang/Boolean;->booleanValue()Z

    :cond_17
    const-string v4, "video_version"

    const-string v5, "2.0"

    .line 918
    invoke-virtual {v2, v4, v5}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 923
    :cond_18
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v4

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v5

    invoke-virtual {v5}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Lcom/mbridge/msdk/c/b;->b(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object v4

    if-nez v4, :cond_19

    .line 926
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v4

    invoke-virtual {v4}, Lcom/mbridge/msdk/c/b;->b()Lcom/mbridge/msdk/c/a;

    .line 929
    :cond_19
    iget-object v4, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->d:Ljava/util/Map;

    invoke-static {v4}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a(Ljava/util/Map;)Z

    move-result v4

    if-nez v4, :cond_1a

    .line 930
    sget-object v4, Lcom/mbridge/msdk/mbnative/controller/NativeController;->e:Ljava/lang/String;

    const-string v5, "\u6ca1\u6709param \u53c2\u6570 \u8981\u4f20fqci"

    invoke-static {v4, v5}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 931
    iget-object v4, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->i:Landroid/content/Context;

    iget-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->j:Ljava/lang/String;

    invoke-static {v4, v5}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Landroid/content/Context;Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v4

    .line 932
    invoke-virtual {v4}, Lorg/json/JSONArray;->length()I

    move-result v5

    if-lez v5, :cond_1a

    .line 933
    sget-object v5, Lcom/mbridge/msdk/foundation/same/net/g/d;->c:Ljava/lang/String;

    invoke-static {v4}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Lorg/json/JSONArray;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v5, v4}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 937
    :cond_1a
    new-instance v4, Lorg/json/JSONArray;

    invoke-direct {v4}, Lorg/json/JSONArray;-><init>()V

    .line 938
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v5

    invoke-virtual {v5}, Lcom/mbridge/msdk/foundation/controller/a;->i()Ljava/util/List;

    move-result-object v5

    if-eqz v5, :cond_1b

    .line 939
    invoke-interface {v5}, Ljava/util/List;->size()I

    move-result v6

    if-lez v6, :cond_1b

    .line 940
    invoke-interface {v5}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v5

    :goto_3
    invoke-interface {v5}, Ljava/util/Iterator;->hasNext()Z

    move-result v6

    if-eqz v6, :cond_1b

    invoke-interface {v5}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Ljava/lang/Long;

    invoke-virtual {v6}, Ljava/lang/Long;->longValue()J

    move-result-wide v6

    .line 941
    invoke-virtual {v4, v6, v7}, Lorg/json/JSONArray;->put(J)Lorg/json/JSONArray;

    goto :goto_3

    .line 944
    :cond_1b
    invoke-virtual {v4}, Lorg/json/JSONArray;->length()I

    move-result v5

    if-lez v5, :cond_1c

    const-string v5, "install_ids"

    .line 945
    invoke-static {v4}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Lorg/json/JSONArray;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v5, v4}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 948
    :cond_1c
    invoke-static {}, Lcom/mbridge/msdk/mbnative/controller/b;->b()Ljava/util/Map;

    move-result-object v4

    iget-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->j:Ljava/lang/String;

    invoke-interface {v4, v5}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_1e

    .line 949
    invoke-static {}, Lcom/mbridge/msdk/mbnative/controller/b;->b()Ljava/util/Map;

    move-result-object v4

    iget-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->j:Ljava/lang/String;

    invoke-interface {v4, v5}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/Boolean;

    invoke-virtual {v4}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v4

    if-eqz v4, :cond_1e

    .line 950
    invoke-static {}, Lcom/mbridge/msdk/mbnative/controller/b;->c()Ljava/util/Map;

    move-result-object v4

    iget-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->j:Ljava/lang/String;

    invoke-interface {v4, v5}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    if-eqz v4, :cond_1e

    .line 951
    invoke-static {}, Lcom/mbridge/msdk/mbnative/controller/b;->c()Ljava/util/Map;

    move-result-object v4

    iget-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->j:Ljava/lang/String;

    invoke-interface {v4, v5}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/mbridge/msdk/foundation/entity/m;

    if-eqz v4, :cond_1e

    if-ne p1, v0, :cond_1d

    .line 954
    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/m;->b()I

    move-result v4

    iput v4, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->v:I

    goto :goto_4

    :cond_1d
    const/4 v5, 0x2

    if-ne p1, v5, :cond_1e

    .line 956
    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/m;->a()I

    move-result v4

    iput v4, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->v:I

    :cond_1e
    :goto_4
    const-string v4, "offset"

    .line 961
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    iget v6, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->v:I

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v6, ""

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v2, v4, v5}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string v4, "ad_type"

    const-string v5, "42"

    .line 962
    invoke-virtual {v2, v4, v5}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string v4, "ad_source_id"

    .line 963
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v6, ""

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v2, v4, v5}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 964
    iget-object v4, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->q:Ljava/lang/String;

    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_1f

    .line 965
    sget-object v4, Lcom/mbridge/msdk/foundation/same/net/g/d;->a:Ljava/lang/String;

    iget-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->q:Ljava/lang/String;

    invoke-virtual {v2, v4, v5}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 968
    :cond_1f
    new-instance v9, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;

    invoke-direct {v9, p0}, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;-><init>(Lcom/mbridge/msdk/mbnative/controller/NativeController;)V

    .line 970
    iget-object v4, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->d:Ljava/util/Map;

    invoke-static {v4}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->b(Ljava/util/Map;)Ljava/util/List;

    move-result-object v4

    .line 971
    invoke-virtual {v9, v4}, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->a(Ljava/util/List;)V

    .line 972
    iget-object v4, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->j:Ljava/lang/String;

    invoke-virtual {v9, v4}, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->setUnitId(Ljava/lang/String;)V

    .line 973
    iget-object v4, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->k:Ljava/lang/String;

    invoke-virtual {v9, v4}, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->setPlacementId(Ljava/lang/String;)V

    const/16 v4, 0x2a

    .line 974
    invoke-virtual {v9, v4}, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->setAdType(I)V

    if-ne p1, v0, :cond_21

    .line 976
    iget-boolean p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->x:Z

    if-eqz p1, :cond_20

    goto :goto_5

    .line 979
    :cond_20
    iput-object v9, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->Q:Lcom/mbridge/msdk/mbnative/controller/NativeController$a;

    .line 980
    invoke-virtual {v9, v3}, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->b(Z)V

    goto :goto_6

    .line 977
    :cond_21
    :goto_5
    invoke-virtual {v9, v0}, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->b(Z)V

    .line 983
    :goto_6
    new-instance p1, Lcom/mbridge/msdk/mbnative/controller/NativeController$c;

    const/4 v5, 0x1

    move-object v3, p1

    move-object v4, p0

    move-object v6, v9

    move v7, p4

    move-object v8, p5

    invoke-direct/range {v3 .. v8}, Lcom/mbridge/msdk/mbnative/controller/NativeController$c;-><init>(Lcom/mbridge/msdk/mbnative/controller/NativeController;ILcom/mbridge/msdk/foundation/same/e/d;ILjava/lang/String;)V

    .line 984
    invoke-virtual {v9, p1}, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->a(Ljava/lang/Runnable;)V

    .line 985
    invoke-virtual {v9, p4}, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->e(I)V

    .line 986
    invoke-virtual {v9, p5}, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->a(Ljava/lang/String;)V

    if-nez p4, :cond_23

    .line 989
    invoke-static {p5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_22

    const-string v3, "token"

    .line 990
    invoke-virtual {v2, v3, p5}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 992
    :cond_22
    invoke-virtual {v1, v0, v2, v9, p5}, Lcom/mbridge/msdk/mbnative/e/a/a;->choiceV3OrV5BySetting(ILcom/mbridge/msdk/foundation/same/net/g/d;Lcom/mbridge/msdk/foundation/same/net/e;Ljava/lang/String;)V

    :cond_23
    if-ne p4, v0, :cond_24

    .line 997
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/net/f/d;->a()Lcom/mbridge/msdk/foundation/same/net/f/d;

    move-result-object p4

    iget-object p4, p4, Lcom/mbridge/msdk/foundation/same/net/f/d;->n:Ljava/lang/String;

    invoke-virtual {v1, v0, p4, v2, v9}, Lcom/mbridge/msdk/mbnative/e/a/a;->getLoadOrSetting(ILjava/lang/String;Lcom/mbridge/msdk/foundation/same/net/g/d;Lcom/mbridge/msdk/foundation/same/net/e;)V

    .line 1001
    :cond_24
    iget-object p4, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->o:Lcom/mbridge/msdk/mbnative/controller/NativeController$e;

    invoke-virtual {p4, p1, p2, p3}, Lcom/mbridge/msdk/mbnative/controller/NativeController$e;->postDelayed(Ljava/lang/Runnable;J)Z
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_0
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    goto :goto_7

    :catchall_0
    move-exception p1

    goto :goto_8

    :catch_0
    move-exception p1

    .line 1004
    :try_start_4
    sget-object p2, Lcom/mbridge/msdk/mbnative/controller/NativeController;->e:Ljava/lang/String;

    invoke-static {p1}, Lcom/mbridge/msdk/mbnative/b/a;->a(Ljava/lang/Exception;)Ljava/lang/String;

    move-result-object p3

    invoke-static {p2, p3}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1005
    sget-object p2, Lcom/mbridge/msdk/mbnative/controller/NativeController;->e:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    .line 1007
    :goto_7
    monitor-exit p0

    return-void

    :goto_8
    monitor-exit p0

    throw p1
.end method

.method public final a(ILjava/lang/String;)V
    .locals 10

    const/4 v0, 0x0

    .line 400
    iput-boolean v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->y:Z

    .line 401
    iput-boolean v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->z:Z

    .line 402
    iput-boolean v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->A:Z

    .line 403
    iput-boolean v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->aa:Z

    .line 404
    iput-boolean v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->x:Z

    .line 405
    iput-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->V:Ljava/lang/String;

    .line 406
    iget-object v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->g:Lcom/mbridge/msdk/mbnative/c/a;

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    const/4 v2, 0x1

    xor-int/2addr p2, v2

    invoke-virtual {v1, p2}, Lcom/mbridge/msdk/mbnative/c/a;->a(Z)V

    const/4 p2, 0x0

    .line 407
    iput-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->Q:Lcom/mbridge/msdk/mbnative/controller/NativeController$a;

    .line 409
    sget-object v1, Lcom/mbridge/msdk/mbnative/controller/NativeController;->c:Ljava/util/Map;

    if-eqz v1, :cond_0

    invoke-interface {v1}, Ljava/util/Map;->size()I

    move-result v1

    if-lez v1, :cond_0

    .line 410
    sget-object v1, Lcom/mbridge/msdk/mbnative/controller/NativeController;->c:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map;->clear()V

    .line 414
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/mbnative/controller/b;->b()Ljava/util/Map;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 415
    invoke-static {}, Lcom/mbridge/msdk/mbnative/controller/b;->b()Ljava/util/Map;

    move-result-object v1

    iget-object v3, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->j:Ljava/lang/String;

    invoke-interface {v1, v3}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 416
    invoke-static {}, Lcom/mbridge/msdk/mbnative/controller/b;->b()Ljava/util/Map;

    move-result-object v1

    iget-object v3, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->j:Ljava/lang/String;

    invoke-interface {v1, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Boolean;

    invoke-virtual {v1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v1

    goto :goto_0

    :cond_1
    move v1, v0

    :goto_0
    if-eqz v1, :cond_2

    if-ne p1, v2, :cond_2

    .line 3427
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a(I)Z

    move-result v1

    if-eqz v1, :cond_2

    goto/16 :goto_a

    .line 3433
    :cond_2
    iget-object v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->d:Ljava/util/Map;

    const-string v3, "app_id"

    invoke-interface {v1, v3}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_3

    iget-object v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->d:Ljava/util/Map;

    const-string v4, "app_key"

    invoke-interface {v1, v4}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_3

    iget-object v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->d:Ljava/util/Map;

    const-string v5, "key_word"

    .line 3434
    invoke-interface {v1, v5}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_3

    .line 3435
    iget-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->d:Ljava/util/Map;

    invoke-interface {p2, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Ljava/lang/String;

    .line 3436
    iget-object v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->d:Ljava/util/Map;

    invoke-interface {v1, v4}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    goto :goto_1

    :cond_3
    move-object v1, p2

    .line 4393
    :goto_1
    iget-object v3, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->f:Lcom/mbridge/msdk/c/c;

    iget-object v4, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->i:Landroid/content/Context;

    iget-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->j:Ljava/lang/String;

    invoke-virtual {v3, v4, p2, v1, v5}, Lcom/mbridge/msdk/c/c;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 3440
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v1

    iget-object v3, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->j:Ljava/lang/String;

    invoke-virtual {v1, p2, v3}, Lcom/mbridge/msdk/c/b;->e(Ljava/lang/String;Ljava/lang/String;)Lcom/mbridge/msdk/c/d;

    move-result-object p2

    iput-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->W:Lcom/mbridge/msdk/c/d;

    if-nez p2, :cond_4

    .line 3443
    iget-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->j:Ljava/lang/String;

    invoke-static {p2}, Lcom/mbridge/msdk/c/d;->d(Ljava/lang/String;)Lcom/mbridge/msdk/c/d;

    move-result-object p2

    iput-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->W:Lcom/mbridge/msdk/c/d;

    .line 3446
    :cond_4
    iget-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->W:Lcom/mbridge/msdk/c/d;

    invoke-virtual {p2}, Lcom/mbridge/msdk/c/d;->v()I

    move-result p2

    iget v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->t:I

    mul-int/2addr p2, v1

    .line 3447
    invoke-static {}, Lcom/mbridge/msdk/mbnative/controller/b;->e()Ljava/util/Map;

    move-result-object v1

    iget-object v3, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->j:Ljava/lang/String;

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    invoke-interface {v1, v3, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 3448
    iget-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->W:Lcom/mbridge/msdk/c/d;

    invoke-virtual {p2}, Lcom/mbridge/msdk/c/d;->r()Ljava/util/List;

    move-result-object p2

    iput-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a:Ljava/util/List;

    .line 3449
    iget-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->W:Lcom/mbridge/msdk/c/d;

    invoke-virtual {p2}, Lcom/mbridge/msdk/c/d;->s()Ljava/util/List;

    move-result-object p2

    iput-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->b:Ljava/util/List;

    .line 3451
    iget-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->W:Lcom/mbridge/msdk/c/d;

    invoke-virtual {p2}, Lcom/mbridge/msdk/c/d;->p()I

    move-result p2

    iput p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->Z:I

    .line 3452
    iget-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->W:Lcom/mbridge/msdk/c/d;

    invoke-virtual {p2}, Lcom/mbridge/msdk/c/d;->q()I

    move-result p2

    iput p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->Y:I

    .line 3453
    iget p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->s:I

    iput p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->t:I

    .line 3455
    iget-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a:Ljava/util/List;

    if-eqz p2, :cond_17

    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result p2

    if-nez p2, :cond_5

    goto/16 :goto_9

    .line 3466
    :cond_5
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p2

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object p2

    invoke-static {p2}, Lcom/mbridge/msdk/mbjscommon/webEnvCheck/a;->a(Landroid/content/Context;)Z

    move-result p2
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_2

    :catch_0
    move p2, v0

    :goto_2
    if-nez p2, :cond_6

    .line 3472
    iget-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->g:Lcom/mbridge/msdk/mbnative/c/a;

    if-eqz p1, :cond_18

    const-string p2, "webview is not available"

    .line 3473
    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/mbnative/c/a;->onAdLoadError(Ljava/lang/String;)V

    goto/16 :goto_a

    .line 3477
    :cond_6
    iget-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->d:Ljava/util/Map;

    const-string v1, "native_info"

    invoke-interface {p2, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result p2

    const/4 v3, 0x2

    if-eqz p2, :cond_b

    .line 3478
    iget-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->n:Ljava/lang/String;

    if-nez p2, :cond_b

    .line 3479
    iget-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->d:Ljava/util/Map;

    invoke-interface {p2, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Ljava/lang/String;

    iput-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->n:Ljava/lang/String;

    if-nez p2, :cond_7

    goto :goto_5

    .line 4937
    :cond_7
    :try_start_1
    new-instance p2, Lorg/json/JSONArray;

    iget-object v4, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->n:Ljava/lang/String;

    invoke-direct {p2, v4}, Lorg/json/JSONArray;-><init>(Ljava/lang/String;)V

    .line 4938
    invoke-virtual {p2}, Lorg/json/JSONArray;->length()I

    move-result v4

    if-lez v4, :cond_a

    move v4, v0

    .line 4939
    :goto_3
    invoke-virtual {p2}, Lorg/json/JSONArray;->length()I

    move-result v5

    if-ge v4, v5, :cond_a

    .line 4940
    invoke-virtual {p2, v4}, Lorg/json/JSONArray;->opt(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lorg/json/JSONObject;

    const-string v6, "id"

    .line 4941
    invoke-virtual {v5, v6, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v6
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_1

    const-string v7, "ad_num"

    if-ne v3, v6, :cond_8

    .line 4943
    :try_start_2
    invoke-virtual {v5, v7}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v6

    iput v6, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->ab:I

    .line 4944
    iget v6, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->Z:I

    if-lez v6, :cond_9

    .line 4945
    invoke-virtual {v5, v7}, Lorg/json/JSONObject;->remove(Ljava/lang/String;)Ljava/lang/Object;

    .line 4946
    iget v6, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->Z:I

    invoke-virtual {v5, v7, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    goto :goto_4

    :cond_8
    const/4 v8, 0x3

    if-ne v8, v6, :cond_9

    .line 4949
    invoke-virtual {v5, v7}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v6

    iput v6, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->ac:I

    .line 4950
    iget v6, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->Z:I

    if-lez v6, :cond_9

    .line 4951
    invoke-virtual {v5, v7}, Lorg/json/JSONObject;->remove(Ljava/lang/String;)Ljava/lang/Object;

    .line 4952
    iget v6, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->Z:I

    invoke-virtual {v5, v7, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    :cond_9
    :goto_4
    add-int/lit8 v4, v4, 0x1

    goto :goto_3

    .line 4957
    :cond_a
    iget v4, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->ab:I

    iget v5, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->ac:I

    invoke-static {v4, v5}, Ljava/lang/Math;->max(II)I

    move-result v4

    iput v4, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->M:I

    .line 4958
    invoke-virtual {p2}, Lorg/json/JSONArray;->toString()Ljava/lang/String;

    move-result-object p2

    iput-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->n:Ljava/lang/String;
    :try_end_2
    .catch Lorg/json/JSONException; {:try_start_2 .. :try_end_2} :catch_1

    goto :goto_5

    :catch_1
    move-exception p2

    .line 4961
    sget-object v4, Lcom/mbridge/msdk/mbnative/controller/NativeController;->e:Ljava/lang/String;

    invoke-static {p2}, Lcom/mbridge/msdk/mbnative/b/a;->a(Ljava/lang/Exception;)Ljava/lang/String;

    move-result-object p2

    invoke-static {v4, p2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 3485
    :cond_b
    :goto_5
    iget-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a:Ljava/util/List;

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-interface {p2, v4}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_c

    iget-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a:Ljava/util/List;

    invoke-interface {p2, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Ljava/lang/Integer;

    invoke-virtual {p2}, Ljava/lang/Integer;->intValue()I

    move-result p2

    if-ne p2, v2, :cond_d

    :cond_c
    if-nez p1, :cond_d

    .line 3487
    iget-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->j:Ljava/lang/String;

    iget v4, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->t:I

    iget-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->V:Ljava/lang/String;

    invoke-virtual {p0, p2, v4, v5}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->b(Ljava/lang/String;ILjava/lang/String;)Ljava/util/List;

    move-result-object p2

    .line 3488
    invoke-direct {p0, p2}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a(Ljava/util/List;)Z

    move-result p2

    if-eqz p2, :cond_d

    goto/16 :goto_a

    .line 3492
    :cond_d
    iput-boolean v2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->ad:Z

    .line 3493
    iget-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a:Ljava/util/List;

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-interface {p2, v4}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_10

    if-nez p1, :cond_10

    iget-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a:Ljava/util/List;

    .line 3494
    invoke-interface {p2, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Ljava/lang/Integer;

    invoke-virtual {p2}, Ljava/lang/Integer;->intValue()I

    move-result p2

    if-eq p2, v2, :cond_10

    .line 3495
    iget-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a:Ljava/util/List;

    invoke-interface {p2, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Ljava/lang/Integer;

    invoke-virtual {p2}, Ljava/lang/Integer;->intValue()I

    move-result p2

    .line 3496
    invoke-static {p2}, Lcom/mbridge/msdk/mbnative/a/f;->a(I)Lcom/mbridge/msdk/mbnative/a/b;

    move-result-object v4

    if-ne p2, v3, :cond_e

    .line 3498
    iget-object v3, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->d:Ljava/util/Map;

    invoke-interface {v3, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_e

    .line 3499
    iget v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->M:I

    iput v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->t:I

    goto :goto_6

    .line 3501
    :cond_e
    iget v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->s:I

    iput v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->t:I

    :goto_6
    if-eqz v4, :cond_f

    .line 3504
    iget-object v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->j:Ljava/lang/String;

    iget v3, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->t:I

    invoke-virtual {v4, v1, v3}, Lcom/mbridge/msdk/mbnative/a/b;->b(Ljava/lang/Object;I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/List;

    .line 3505
    invoke-direct {p0, v1}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->d(Ljava/util/List;)Ljava/util/List;

    move-result-object v1

    invoke-direct {p0, p2, v1}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a(ILjava/util/List;)Ljava/util/List;

    move-result-object p2

    invoke-direct {p0, p2}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a(Ljava/util/List;)Z

    move-result p2

    if-eqz p2, :cond_f

    goto/16 :goto_a

    .line 3509
    :cond_f
    iput-boolean v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->x:Z

    .line 3510
    iput-boolean v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->ad:Z

    .line 3513
    :try_start_3
    iget-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->b:Ljava/util/List;

    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a:Ljava/util/List;

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/List;->indexOf(Ljava/lang/Object;)I

    move-result v0

    invoke-interface {p2, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Ljava/lang/Integer;

    invoke-virtual {p2}, Ljava/lang/Integer;->intValue()I

    move-result p2

    mul-int/lit16 p2, p2, 0x3e8

    int-to-long v4, p2

    const/4 v7, 0x0

    .line 3514
    iget-object v8, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->j:Ljava/lang/String;

    iget-object v9, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->V:Ljava/lang/String;

    move-object v3, p0

    move v6, p1

    invoke-direct/range {v3 .. v9}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a(JIZLjava/lang/String;Ljava/lang/String;)V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_2

    .line 3520
    :catch_2
    :cond_10
    iget-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->o:Lcom/mbridge/msdk/mbnative/controller/NativeController$e;

    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->W:Lcom/mbridge/msdk/c/d;

    invoke-virtual {v0}, Lcom/mbridge/msdk/c/d;->m()I

    move-result v0

    mul-int/lit16 v0, v0, 0x3e8

    int-to-long v0, v0

    invoke-virtual {p2, v2, v0, v1}, Lcom/mbridge/msdk/mbnative/controller/NativeController$e;->sendEmptyMessageDelayed(IJ)Z

    .line 5744
    iget-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a:Ljava/util/List;

    if-eqz p2, :cond_13

    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result p2

    if-lez p2, :cond_13

    .line 5745
    iget-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->l:Ljava/util/Queue;

    if-eqz p2, :cond_11

    invoke-interface {p2}, Ljava/util/Queue;->size()I

    move-result p2

    if-lez p2, :cond_11

    .line 5746
    sget-object p2, Lcom/mbridge/msdk/mbnative/controller/NativeController;->e:Ljava/lang/String;

    const-string v0, "setRequestQueue clear requestqueue"

    invoke-static {p2, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 5747
    iget-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->l:Ljava/util/Queue;

    invoke-interface {p2}, Ljava/util/Queue;->clear()V

    .line 5749
    :cond_11
    iget-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a:Ljava/util/List;

    invoke-interface {p2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p2

    :cond_12
    :goto_7
    invoke-interface {p2}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_13

    invoke-interface {p2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    .line 5750
    iget-object v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->l:Ljava/util/Queue;

    if-eqz v1, :cond_12

    .line 5751
    invoke-interface {v1, v0}, Ljava/util/Queue;->add(Ljava/lang/Object;)Z

    goto :goto_7

    .line 5755
    :cond_13
    iget-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->b:Ljava/util/List;

    if-eqz p2, :cond_16

    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result p2

    if-lez p2, :cond_16

    .line 5756
    iget-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->m:Ljava/util/Queue;

    if-eqz p2, :cond_14

    invoke-interface {p2}, Ljava/util/Queue;->size()I

    move-result p2

    if-lez p2, :cond_14

    .line 5757
    iget-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->m:Ljava/util/Queue;

    invoke-interface {p2}, Ljava/util/Queue;->clear()V

    .line 5759
    :cond_14
    iget-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->b:Ljava/util/List;

    invoke-interface {p2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p2

    :cond_15
    :goto_8
    invoke-interface {p2}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_16

    invoke-interface {p2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    .line 5760
    iget-object v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->m:Ljava/util/Queue;

    if-eqz v1, :cond_15

    .line 5761
    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    mul-int/lit16 v0, v0, 0x3e8

    int-to-long v2, v0

    invoke-static {v2, v3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v0

    invoke-interface {v1, v0}, Ljava/util/Queue;->add(Ljava/lang/Object;)Z

    goto :goto_8

    .line 3525
    :cond_16
    iget-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->V:Ljava/lang/String;

    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->b(ILjava/lang/String;)V

    goto :goto_a

    .line 3456
    :cond_17
    :goto_9
    iget-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->g:Lcom/mbridge/msdk/mbnative/c/a;

    if-eqz p1, :cond_18

    .line 3458
    iput-boolean v2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->y:Z

    const-string p2, "don\'t have sorceList"

    .line 3459
    invoke-interface {p1, p2}, Lcom/mbridge/msdk/out/NativeListener$NativeAdListener;->onAdLoadError(Ljava/lang/String;)V

    :cond_18
    :goto_a
    return-void
.end method

.method public final a(Lcom/mbridge/msdk/out/Campaign;Landroid/view/View;)V
    .locals 3

    .line 1122
    :try_start_0
    invoke-virtual {p1}, Lcom/mbridge/msdk/out/Campaign;->getType()I

    move-result v0

    const/4 v1, 0x3

    if-ne v0, v1, :cond_0

    goto :goto_1

    .line 1124
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->h:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    if-eqz v0, :cond_1

    .line 1125
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->r:Lcom/mbridge/msdk/click/b;

    iget-object v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->h:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;)V

    .line 1127
    :cond_1
    invoke-virtual {p1}, Lcom/mbridge/msdk/out/Campaign;->getType()I

    move-result v0

    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/a/f;->a(I)Lcom/mbridge/msdk/mbnative/a/b;

    move-result-object v0

    .line 1128
    iget-object v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->j:Ljava/lang/String;

    iget-object v2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->V:Ljava/lang/String;

    invoke-virtual {v0, v1, p1, v2}, Lcom/mbridge/msdk/mbnative/a/b;->a(Ljava/lang/String;Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V

    .line 1129
    check-cast p1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 1131
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->j:Ljava/lang/String;

    const-string v1, "native"

    invoke-static {v0, p1, v1}, Lcom/mbridge/msdk/foundation/same/a/d;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;)V

    if-eqz p1, :cond_2

    .line 1135
    new-instance v0, Lcom/mbridge/msdk/mbnative/controller/NativeController$10;

    invoke-direct {v0, p0, p1}, Lcom/mbridge/msdk/mbnative/controller/NativeController$10;-><init>(Lcom/mbridge/msdk/mbnative/controller/NativeController;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :try_start_1
    const-string v1, "com.mbridge.msdk.nativex.view.MBMediaView"

    .line 1144
    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    .line 1145
    invoke-direct {p0, p2, v0, v1}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a(Landroid/view/View;Landroid/view/View$OnClickListener;Ljava/lang/Class;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    const/4 v1, 0x0

    .line 1147
    :try_start_2
    invoke-direct {p0, p2, v0, v1}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a(Landroid/view/View;Landroid/view/View$OnClickListener;Ljava/lang/Class;)V

    .line 1151
    :goto_0
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isReport()Z

    move-result v0

    if-nez v0, :cond_2

    .line 1152
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 1153
    invoke-interface {v0, p2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 1154
    invoke-direct {p0, p1, p2, v0}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/view/View;Ljava/util/List;)V

    .line 1155
    sget-object p2, Lcom/mbridge/msdk/mbnative/controller/NativeController;->e:Ljava/lang/String;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "sendImpression"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    goto :goto_1

    .line 1162
    :catch_0
    sget-object p1, Lcom/mbridge/msdk/mbnative/controller/NativeController;->e:Ljava/lang/String;

    const-string p2, "registerview exception!"

    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    :goto_1
    return-void
.end method

.method public final a(Lcom/mbridge/msdk/out/Campaign;Landroid/view/View;Ljava/util/List;)V
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/mbridge/msdk/out/Campaign;",
            "Landroid/view/View;",
            "Ljava/util/List<",
            "Landroid/view/View;",
            ">;)V"
        }
    .end annotation

    .line 1011
    :try_start_0
    invoke-virtual {p1}, Lcom/mbridge/msdk/out/Campaign;->getType()I

    move-result v0

    const/4 v1, 0x3

    if-ne v0, v1, :cond_0

    goto/16 :goto_3

    .line 1013
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->h:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    if-eqz v0, :cond_1

    .line 1014
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->r:Lcom/mbridge/msdk/click/b;

    iget-object v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->h:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;)V

    .line 1016
    :cond_1
    invoke-virtual {p1}, Lcom/mbridge/msdk/out/Campaign;->getType()I

    move-result v0

    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/a/f;->a(I)Lcom/mbridge/msdk/mbnative/a/b;

    move-result-object v0

    .line 1017
    iget-object v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->j:Ljava/lang/String;

    iget-object v2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->V:Ljava/lang/String;

    invoke-virtual {v0, v1, p1, v2}, Lcom/mbridge/msdk/mbnative/a/b;->a(Ljava/lang/String;Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V

    .line 1018
    check-cast p1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const/4 v0, 0x0

    :try_start_1
    const-string v1, "com.mbridge.msdk.nativex.view.MBMediaView"

    .line 1022
    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    :try_start_2
    const-string v1, ""

    const-string v2, "MBMediaView can\'t found"

    .line 1024
    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1027
    :goto_0
    iget-object v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->j:Ljava/lang/String;

    const-string v2, "native"

    invoke-static {v1, p1, v2}, Lcom/mbridge/msdk/foundation/same/a/d;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;)V

    if-eqz p1, :cond_6

    if-eqz p2, :cond_3

    if-eqz v0, :cond_2

    .line 1030
    invoke-virtual {v0, p2}, Ljava/lang/Class;->isInstance(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    return-void

    .line 1033
    :cond_2
    new-instance v1, Lcom/mbridge/msdk/mbnative/controller/NativeController$1;

    invoke-direct {v1, p0, p1}, Lcom/mbridge/msdk/mbnative/controller/NativeController$1;-><init>(Lcom/mbridge/msdk/mbnative/controller/NativeController;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    invoke-virtual {p2, v1}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    :cond_3
    if-eqz p3, :cond_5

    .line 1040
    invoke-interface {p3}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_5

    .line 1041
    invoke-interface {p3}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_1
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_5

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Landroid/view/View;

    if-eqz v0, :cond_4

    .line 1042
    invoke-virtual {v0, v2}, Ljava/lang/Class;->isInstance(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_4

    goto :goto_2

    .line 1045
    :cond_4
    new-instance v3, Lcom/mbridge/msdk/mbnative/controller/NativeController$8;

    invoke-direct {v3, p0, p1}, Lcom/mbridge/msdk/mbnative/controller/NativeController$8;-><init>(Lcom/mbridge/msdk/mbnative/controller/NativeController;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    invoke-virtual {v2, v3}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    goto :goto_1

    .line 1054
    :cond_5
    :goto_2
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isReport()Z

    move-result v0

    if-nez v0, :cond_6

    .line 1055
    invoke-direct {p0, p1, p2, p3}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/view/View;Ljava/util/List;)V

    .line 1056
    sget-object p2, Lcom/mbridge/msdk/mbnative/controller/NativeController;->e:Ljava/lang/String;

    new-instance p3, Ljava/lang/StringBuilder;

    invoke-direct {p3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "sendImpression"

    invoke-virtual {p3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p2, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    goto :goto_3

    .line 1063
    :catch_0
    sget-object p1, Lcom/mbridge/msdk/mbnative/controller/NativeController;->e:Ljava/lang/String;

    const-string p2, "registerview exception!"

    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_6
    :goto_3
    return-void
.end method

.method public final a(Ljava/lang/String;ILjava/lang/String;)V
    .locals 3

    .line 769
    sget-object v0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->e:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "request error msg = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 770
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->l:Ljava/util/Queue;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Ljava/util/Queue;->size()I

    move-result v0

    if-lez v0, :cond_1

    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->l:Ljava/util/Queue;

    if-nez v0, :cond_2

    .line 771
    :cond_1
    iget-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->g:Lcom/mbridge/msdk/mbnative/c/a;

    if-eqz p2, :cond_3

    iget-boolean p3, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->y:Z

    if-nez p3, :cond_3

    const/4 p3, 0x1

    .line 772
    iput-boolean p3, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->y:Z

    .line 773
    invoke-virtual {p2, p1}, Lcom/mbridge/msdk/mbnative/c/a;->onAdLoadError(Ljava/lang/String;)V

    .line 774
    sget-object p1, Lcom/mbridge/msdk/mbnative/controller/NativeController;->e:Ljava/lang/String;

    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string p3, "requestError return listener isReturn = "

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean p3, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->y:Z

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 778
    :cond_2
    sget-object p1, Lcom/mbridge/msdk/mbnative/controller/NativeController;->e:Ljava/lang/String;

    const-string v0, "request queue in request error"

    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 779
    invoke-direct {p0, p2, p3}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->b(ILjava/lang/String;)V

    :cond_3
    :goto_0
    return-void
.end method

.method public final b()Ljava/lang/String;
    .locals 1

    .line 2595
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->T:Ljava/lang/String;

    return-object v0
.end method

.method public final b(Ljava/lang/String;ILjava/lang/String;)Ljava/util/List;
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "I",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/out/Campaign;",
            ">;"
        }
    .end annotation

    .line 1755
    iget-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a:Ljava/util/List;

    const/4 p3, 0x0

    if-eqz p2, :cond_7

    .line 1756
    new-instance p2, Ljava/util/ArrayList;

    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a:Ljava/util/List;

    invoke-direct {p2, v0}, Ljava/util/ArrayList;-><init>(Ljava/util/Collection;)V

    const/4 v0, 0x0

    move v1, v0

    .line 1757
    :goto_0
    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result v2

    const/4 v3, 0x2

    const-string v4, "native_info"

    const/4 v5, 0x1

    if-ge v1, v2, :cond_3

    .line 1759
    invoke-interface {p2, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/Integer;

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    invoke-static {v2}, Lcom/mbridge/msdk/mbnative/a/f;->a(I)Lcom/mbridge/msdk/mbnative/a/b;

    move-result-object v2

    if-eqz v2, :cond_2

    .line 1761
    invoke-interface {p2, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p3

    check-cast p3, Ljava/lang/Integer;

    invoke-virtual {p3}, Ljava/lang/Integer;->intValue()I

    move-result p3

    if-eq p3, v5, :cond_0

    invoke-interface {p2, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p3

    check-cast p3, Ljava/lang/Integer;

    invoke-virtual {p3}, Ljava/lang/Integer;->intValue()I

    move-result p3

    if-ne p3, v3, :cond_1

    :cond_0
    iget-object p3, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->d:Ljava/util/Map;

    .line 1762
    invoke-interface {p3, v4}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result p3

    if-eqz p3, :cond_1

    .line 1763
    iget p3, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->M:I

    goto :goto_1

    .line 1765
    :cond_1
    iget p3, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->s:I

    .line 1767
    :goto_1
    invoke-virtual {v2, p1, p3}, Lcom/mbridge/msdk/mbnative/a/b;->b(Ljava/lang/Object;I)Ljava/lang/Object;

    move-result-object p3

    check-cast p3, Ljava/util/List;

    .line 1768
    invoke-interface {p2, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/Integer;

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    invoke-direct {p0, v2, p3}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a(ILjava/util/List;)Ljava/util/List;

    move-result-object p3

    if-eqz p3, :cond_2

    goto :goto_2

    :cond_2
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_3
    :goto_2
    if-nez p3, :cond_7

    .line 1775
    :goto_3
    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result v1

    if-ge v0, v1, :cond_7

    .line 1777
    invoke-interface {p2, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p3

    check-cast p3, Ljava/lang/Integer;

    invoke-virtual {p3}, Ljava/lang/Integer;->intValue()I

    move-result p3

    invoke-static {p3}, Lcom/mbridge/msdk/mbnative/a/f;->a(I)Lcom/mbridge/msdk/mbnative/a/b;

    move-result-object p3

    .line 1778
    invoke-interface {p2, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Integer;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    if-eq v1, v5, :cond_4

    invoke-interface {p2, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Integer;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    if-ne v1, v3, :cond_5

    :cond_4
    iget-object v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->d:Ljava/util/Map;

    .line 1779
    invoke-interface {v1, v4}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_5

    .line 1780
    iget v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->M:I

    goto :goto_4

    .line 1782
    :cond_5
    iget v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController;->s:I

    .line 1784
    :goto_4
    invoke-virtual {p3, p1, v1}, Lcom/mbridge/msdk/mbnative/a/b;->a(Ljava/lang/Object;I)Ljava/lang/Object;

    move-result-object p3

    check-cast p3, Ljava/util/List;

    .line 1785
    invoke-interface {p2, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Integer;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    invoke-direct {p0, v1, p3}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a(ILjava/util/List;)Ljava/util/List;

    move-result-object p3

    if-eqz p3, :cond_6

    goto :goto_5

    :cond_6
    add-int/lit8 v0, v0, 0x1

    goto :goto_3

    .line 1792
    :cond_7
    :goto_5
    invoke-direct {p0, p3}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->d(Ljava/util/List;)Ljava/util/List;

    move-result-object p1

    return-object p1
.end method

.method public final b(Lcom/mbridge/msdk/out/Campaign;Landroid/view/View;)V
    .locals 1

    const/4 v0, 0x0

    .line 1334
    invoke-virtual {p0, p1, p2, v0}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->b(Lcom/mbridge/msdk/out/Campaign;Landroid/view/View;Ljava/util/List;)V

    return-void
.end method

.method public final b(Lcom/mbridge/msdk/out/Campaign;Landroid/view/View;Ljava/util/List;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/mbridge/msdk/out/Campaign;",
            "Landroid/view/View;",
            "Ljava/util/List<",
            "Landroid/view/View;",
            ">;)V"
        }
    .end annotation

    if-eqz p1, :cond_2

    .line 1339
    invoke-virtual {p1}, Lcom/mbridge/msdk/out/Campaign;->getType()I

    move-result p1

    const/4 v0, 0x1

    if-eq p1, v0, :cond_0

    const/4 v0, 0x2

    if-eq p1, v0, :cond_0

    goto :goto_1

    :cond_0
    const/4 p1, 0x0

    :try_start_0
    const-string v0, "com.mbridge.msdk.nativex.view.MBMediaView"

    .line 1344
    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    if-eqz p3, :cond_1

    .line 1347
    invoke-interface {p3}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_1

    .line 1348
    invoke-interface {p3}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p2

    :goto_0
    invoke-interface {p2}, Ljava/util/Iterator;->hasNext()Z

    move-result p3

    if-eqz p3, :cond_2

    invoke-interface {p2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object p3

    check-cast p3, Landroid/view/View;

    .line 1349
    invoke-direct {p0, p3, p1}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a(Landroid/view/View;Ljava/lang/Class;)V

    goto :goto_0

    :cond_1
    if-eqz p2, :cond_2

    .line 1353
    invoke-direct {p0, p2, p1}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a(Landroid/view/View;Ljava/lang/Class;)V

    :cond_2
    :goto_1
    return-void
.end method
