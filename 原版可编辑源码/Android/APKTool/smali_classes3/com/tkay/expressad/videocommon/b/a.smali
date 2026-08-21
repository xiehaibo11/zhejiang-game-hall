.class public Lcom/tkay/expressad/videocommon/b/a;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/io/Serializable;


# static fields
.field public static final a:Ljava/lang/String; = "2000077"

.field protected static final b:Ljava/lang/String; = "CampaignDownLoadTask"

.field private static final d:J = -0x7162a4aae459272L

.field private static final e:I = 0x1

.field private static final f:I = 0x7d0

.field private static final h:I = 0x1

.field private static final i:I = 0x2

.field private static final j:I = 0x3

.field private static final k:I = 0x4

.field private static final l:I = 0x5

.field private static final m:Ljava/lang/String; = "errorMsg"

.field private static final p:I = 0x271a


# instance fields
.field private A:Ljava/lang/Object;

.field private B:Ljava/lang/Class;

.field private C:Ljava/lang/Object;

.field private D:Lcom/tkay/expressad/foundation/d/c;

.field private E:Ljava/lang/String;

.field private F:Z

.field private G:Landroid/content/Context;

.field private H:J

.field private I:Ljava/lang/String;

.field private J:J

.field private K:I

.field private L:Ljava/lang/String;

.field private M:Z

.field private N:Z

.field private O:J

.field private P:Lcom/tkay/expressad/videocommon/d/b;

.field private Q:Lcom/tkay/expressad/videocommon/d/b;

.field private R:I

.field private S:Z

.field private T:Z

.field private U:Ljava/lang/String;

.field private V:Lcom/tkay/expressad/foundation/g/f/d/b$a;

.field private W:I

.field private X:Lcom/tkay/expressad/videocommon/b/d;

.field private Y:Landroid/os/Handler;

.field private Z:I

.field c:Lcom/tkay/expressad/videocommon/b/m;

.field private g:Z

.field private n:I

.field private o:Z

.field private q:I

.field private r:Ljava/lang/String;

.field private s:Ljava/lang/String;

.field private t:Ljava/lang/Runnable;

.field private volatile u:I

.field private v:Ljava/util/concurrent/CopyOnWriteArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/CopyOnWriteArrayList<",
            "Lcom/tkay/expressad/videocommon/b/d;",
            ">;"
        }
    .end annotation
.end field

.field private w:Lcom/tkay/expressad/videocommon/b/d;

.field private x:Ljava/util/concurrent/ExecutorService;

.field private y:Lcom/tkay/expressad/videocommon/b/o;

.field private z:Ljava/lang/Class;


# direct methods
.method public constructor <init>(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;Ljava/util/concurrent/ExecutorService;Ljava/lang/String;)V
    .locals 4

    .line 176
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 40
    iput-boolean v0, p0, Lcom/tkay/expressad/videocommon/b/a;->g:Z

    const/4 v1, 0x1

    .line 47
    iput v1, p0, Lcom/tkay/expressad/videocommon/b/a;->n:I

    .line 49
    iput-boolean v0, p0, Lcom/tkay/expressad/videocommon/b/a;->o:Z

    .line 70
    iput v0, p0, Lcom/tkay/expressad/videocommon/b/a;->u:I

    .line 72
    new-instance v2, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v2}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    iput-object v2, p0, Lcom/tkay/expressad/videocommon/b/a;->v:Ljava/util/concurrent/CopyOnWriteArrayList;

    .line 86
    iput-boolean v0, p0, Lcom/tkay/expressad/videocommon/b/a;->F:Z

    const-wide/16 v2, 0x0

    .line 96
    iput-wide v2, p0, Lcom/tkay/expressad/videocommon/b/a;->J:J

    .line 97
    iput v0, p0, Lcom/tkay/expressad/videocommon/b/a;->K:I

    .line 101
    iput-boolean v0, p0, Lcom/tkay/expressad/videocommon/b/a;->M:Z

    .line 102
    iput-boolean v0, p0, Lcom/tkay/expressad/videocommon/b/a;->N:Z

    const/16 v2, 0x64

    .line 107
    iput v2, p0, Lcom/tkay/expressad/videocommon/b/a;->R:I

    .line 108
    iput-boolean v0, p0, Lcom/tkay/expressad/videocommon/b/a;->S:Z

    .line 111
    iput-boolean v0, p0, Lcom/tkay/expressad/videocommon/b/a;->T:Z

    .line 117
    iput v1, p0, Lcom/tkay/expressad/videocommon/b/a;->W:I

    .line 123
    new-instance v1, Lcom/tkay/expressad/videocommon/b/a$1;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/videocommon/b/a$1;-><init>(Lcom/tkay/expressad/videocommon/b/a;)V

    iput-object v1, p0, Lcom/tkay/expressad/videocommon/b/a;->X:Lcom/tkay/expressad/videocommon/b/d;

    .line 133
    new-instance v1, Lcom/tkay/expressad/videocommon/b/a$2;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v2

    invoke-direct {v1, p0, v2}, Lcom/tkay/expressad/videocommon/b/a$2;-><init>(Lcom/tkay/expressad/videocommon/b/a;Landroid/os/Looper;)V

    iput-object v1, p0, Lcom/tkay/expressad/videocommon/b/a;->Y:Landroid/os/Handler;

    if-nez p1, :cond_0

    if-nez p2, :cond_0

    return-void

    .line 180
    :cond_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    iput-wide v1, p0, Lcom/tkay/expressad/videocommon/b/a;->O:J

    .line 181
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/b/b;->d()Landroid/content/Context;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/videocommon/b/a;->G:Landroid/content/Context;

    .line 182
    iput-object p2, p0, Lcom/tkay/expressad/videocommon/b/a;->D:Lcom/tkay/expressad/foundation/d/c;

    .line 183
    iput-object p4, p0, Lcom/tkay/expressad/videocommon/b/a;->E:Ljava/lang/String;

    .line 184
    iput-object p3, p0, Lcom/tkay/expressad/videocommon/b/a;->x:Ljava/util/concurrent/ExecutorService;

    if-eqz p2, :cond_1

    .line 186
    invoke-virtual {p2}, Lcom/tkay/expressad/foundation/d/c;->S()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/videocommon/b/a;->I:Ljava/lang/String;

    .line 188
    :cond_1
    iget-object p1, p0, Lcom/tkay/expressad/videocommon/b/a;->I:Ljava/lang/String;

    invoke-static {p1}, Lcom/tkay/expressad/foundation/h/m;->d(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/videocommon/b/a;->U:Ljava/lang/String;

    .line 190
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/l;->a()Lcom/tkay/expressad/videocommon/b/l;

    iget-object p1, p0, Lcom/tkay/expressad/videocommon/b/a;->I:Ljava/lang/String;

    invoke-static {p1}, Lcom/tkay/expressad/videocommon/b/l;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/videocommon/b/a;->L:Ljava/lang/String;

    .line 191
    iput-boolean v0, p0, Lcom/tkay/expressad/videocommon/b/a;->o:Z

    .line 1230
    :try_start_0
    iget-object p1, p0, Lcom/tkay/expressad/videocommon/b/a;->I:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_3

    iget p1, p0, Lcom/tkay/expressad/videocommon/b/a;->n:I

    const/4 p2, 0x3

    if-ne p1, p2, :cond_2

    goto :goto_0

    .line 1233
    :cond_2
    invoke-direct {p0}, Lcom/tkay/expressad/videocommon/b/a;->x()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_3
    :goto_0
    return-void

    :catch_0
    move-exception p1

    .line 1236
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method private A()V
    .locals 8

    .line 644
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/a;->z:Ljava/lang/Class;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string v1, "insertExcludeId"

    const/4 v2, 0x1

    const/4 v3, 0x0

    const/4 v4, 0x2

    if-eqz v0, :cond_0

    :try_start_1
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/a;->A:Ljava/lang/Object;

    if-nez v0, :cond_1

    :cond_0
    const-string v0, "com.tkay.expressad.reward.b.a"

    .line 645
    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/videocommon/b/a;->z:Ljava/lang/Class;

    .line 646
    invoke-virtual {v0}, Ljava/lang/Class;->newInstance()Ljava/lang/Object;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/videocommon/b/a;->A:Ljava/lang/Object;

    .line 647
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/a;->z:Ljava/lang/Class;

    new-array v5, v4, [Ljava/lang/Class;

    const-class v6, Ljava/lang/String;

    aput-object v6, v5, v3

    const-class v6, Lcom/tkay/expressad/foundation/d/c;

    aput-object v6, v5, v2

    invoke-virtual {v0, v1, v5}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v0

    .line 650
    iget-object v5, p0, Lcom/tkay/expressad/videocommon/b/a;->A:Ljava/lang/Object;

    new-array v6, v4, [Ljava/lang/Object;

    iget-object v7, p0, Lcom/tkay/expressad/videocommon/b/a;->E:Ljava/lang/String;

    aput-object v7, v6, v3

    iget-object v7, p0, Lcom/tkay/expressad/videocommon/b/a;->D:Lcom/tkay/expressad/foundation/d/c;

    aput-object v7, v6, v2

    invoke-virtual {v0, v5, v6}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    .line 653
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/a;->B:Ljava/lang/Class;

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/a;->C:Ljava/lang/Object;

    if-nez v0, :cond_3

    :cond_2
    const-string v0, "com.tkay.expressad.atnative.controller.NativeController"

    .line 654
    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/videocommon/b/a;->B:Ljava/lang/Class;

    .line 655
    invoke-virtual {v0}, Ljava/lang/Class;->newInstance()Ljava/lang/Object;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/videocommon/b/a;->C:Ljava/lang/Object;

    .line 656
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/a;->B:Ljava/lang/Class;

    new-array v5, v4, [Ljava/lang/Class;

    const-class v6, Ljava/lang/String;

    aput-object v6, v5, v3

    const-class v6, Lcom/tkay/expressad/foundation/d/c;

    aput-object v6, v5, v2

    invoke-virtual {v0, v1, v5}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v0

    .line 659
    iget-object v1, p0, Lcom/tkay/expressad/videocommon/b/a;->C:Ljava/lang/Object;

    new-array v4, v4, [Ljava/lang/Object;

    iget-object v5, p0, Lcom/tkay/expressad/videocommon/b/a;->E:Ljava/lang/String;

    aput-object v5, v4, v3

    iget-object v3, p0, Lcom/tkay/expressad/videocommon/b/a;->D:Lcom/tkay/expressad/foundation/d/c;

    aput-object v3, v4, v2

    invoke-virtual {v0, v1, v4}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    :cond_3
    return-void

    :catch_0
    move-exception v0

    .line 662
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method private static B()V
    .locals 0

    return-void
.end method

.method private C()V
    .locals 4

    .line 712
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    const/16 v1, 0x271a

    .line 713
    iput v1, v0, Landroid/os/Message;->what:I

    .line 2733
    iget-object v1, p0, Lcom/tkay/expressad/videocommon/b/a;->D:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/tkay/expressad/videocommon/b/a;->E:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    iget-object v1, p0, Lcom/tkay/expressad/videocommon/b/a;->D:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    iget-object v1, p0, Lcom/tkay/expressad/videocommon/b/a;->D:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->S()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    goto/16 :goto_0

    .line 2736
    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "key=2000077&unit_id="

    .line 2737
    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 2738
    iget-object v2, p0, Lcom/tkay/expressad/videocommon/b/a;->E:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "&request_id="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 2739
    iget-object v2, p0, Lcom/tkay/expressad/videocommon/b/a;->D:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "&request_id_notice="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 2740
    iget-object v2, p0, Lcom/tkay/expressad/videocommon/b/a;->D:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->aa()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "&package_name="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 2741
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/b/b;->a()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "&app_id="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 2742
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "&video_url="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 2743
    iget-object v2, p0, Lcom/tkay/expressad/videocommon/b/a;->D:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->S()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Ljava/net/URLEncoder;->encode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "&process_size="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 2744
    iget-wide v2, p0, Lcom/tkay/expressad/videocommon/b/a;->J:J

    invoke-virtual {v1, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v2, "&file_size="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 2745
    iget-wide v2, p0, Lcom/tkay/expressad/videocommon/b/a;->H:J

    invoke-virtual {v1, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v2, "&ready_rate="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 2746
    iget v2, p0, Lcom/tkay/expressad/videocommon/b/a;->R:I

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, "&cd_rate="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 2747
    iget v2, p0, Lcom/tkay/expressad/videocommon/b/a;->q:I

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, "&cid="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 2748
    iget-object v2, p0, Lcom/tkay/expressad/videocommon/b/a;->D:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "&type="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 2749
    iget v2, p0, Lcom/tkay/expressad/videocommon/b/a;->u:I

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 2750
    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    goto :goto_1

    :cond_1
    :goto_0
    const-string v1, ""

    .line 715
    :goto_1
    iput-object v1, v0, Landroid/os/Message;->obj:Ljava/lang/Object;

    .line 716
    iget-object v1, p0, Lcom/tkay/expressad/videocommon/b/a;->Y:Landroid/os/Handler;

    invoke-virtual {v1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    return-void
.end method

.method private static D()V
    .locals 1

    .line 729
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/b/b;->d()Landroid/content/Context;

    return-void
.end method

.method private E()Ljava/lang/String;
    .locals 3

    .line 733
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/a;->D:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/a;->E:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/a;->D:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/a;->D:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->S()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto/16 :goto_0

    .line 736
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "key=2000077&unit_id="

    .line 737
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 738
    iget-object v1, p0, Lcom/tkay/expressad/videocommon/b/a;->E:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "&request_id="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 739
    iget-object v1, p0, Lcom/tkay/expressad/videocommon/b/a;->D:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "&request_id_notice="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 740
    iget-object v1, p0, Lcom/tkay/expressad/videocommon/b/a;->D:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->aa()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "&package_name="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 741
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/b/b;->a()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "&app_id="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 742
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "&video_url="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 743
    iget-object v1, p0, Lcom/tkay/expressad/videocommon/b/a;->D:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->S()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/net/URLEncoder;->encode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "&process_size="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 744
    iget-wide v1, p0, Lcom/tkay/expressad/videocommon/b/a;->J:J

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v1, "&file_size="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 745
    iget-wide v1, p0, Lcom/tkay/expressad/videocommon/b/a;->H:J

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v1, "&ready_rate="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 746
    iget v1, p0, Lcom/tkay/expressad/videocommon/b/a;->R:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "&cd_rate="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 747
    iget v1, p0, Lcom/tkay/expressad/videocommon/b/a;->q:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "&cid="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 748
    iget-object v1, p0, Lcom/tkay/expressad/videocommon/b/a;->D:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "&type="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 749
    iget v1, p0, Lcom/tkay/expressad/videocommon/b/a;->u:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 750
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_1
    :goto_0
    const-string v0, ""

    return-object v0
.end method

.method private static a(DDI)D
    .locals 1

    if-ltz p4, :cond_0

    .line 299
    new-instance v0, Ljava/math/BigDecimal;

    invoke-static {p0, p1}, Ljava/lang/Double;->toString(D)Ljava/lang/String;

    move-result-object p0

    invoke-direct {v0, p0}, Ljava/math/BigDecimal;-><init>(Ljava/lang/String;)V

    .line 300
    new-instance p0, Ljava/math/BigDecimal;

    invoke-static {p2, p3}, Ljava/lang/Double;->toString(D)Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Ljava/math/BigDecimal;-><init>(Ljava/lang/String;)V

    const/4 p1, 0x4

    .line 301
    invoke-virtual {v0, p0, p4, p1}, Ljava/math/BigDecimal;->divide(Ljava/math/BigDecimal;II)Ljava/math/BigDecimal;

    move-result-object p0

    invoke-virtual {p0}, Ljava/math/BigDecimal;->doubleValue()D

    move-result-wide p0

    return-wide p0

    .line 297
    :cond_0
    new-instance p0, Ljava/lang/IllegalAccessException;

    const-string p1, "Accuracy cannot be less than 0"

    invoke-direct {p0, p1}, Ljava/lang/IllegalAccessException;-><init>(Ljava/lang/String;)V

    throw p0
.end method

.method static synthetic a(Lcom/tkay/expressad/videocommon/b/a;I)I
    .locals 0

    .line 33
    iput p1, p0, Lcom/tkay/expressad/videocommon/b/a;->u:I

    return p1
.end method

.method static synthetic a(Lcom/tkay/expressad/videocommon/b/a;J)J
    .locals 0

    .line 33
    iput-wide p1, p0, Lcom/tkay/expressad/videocommon/b/a;->H:J

    return-wide p1
.end method

.method private a(JI)V
    .locals 5

    .line 542
    iput-wide p1, p0, Lcom/tkay/expressad/videocommon/b/a;->J:J

    .line 546
    iget v0, p0, Lcom/tkay/expressad/videocommon/b/a;->R:I

    int-to-long v1, v0

    iget-wide v3, p0, Lcom/tkay/expressad/videocommon/b/a;->H:J

    mul-long/2addr v1, v3

    const-wide/16 v3, 0x64

    mul-long/2addr v3, p1

    cmp-long v1, v3, v1

    const/4 v2, 0x4

    const/4 v3, 0x5

    if-ltz v1, :cond_1

    .line 547
    iget-boolean v1, p0, Lcom/tkay/expressad/videocommon/b/a;->S:Z

    if-nez v1, :cond_1

    if-eq p3, v2, :cond_1

    const/16 v1, 0x64

    if-ne v0, v1, :cond_0

    if-eq p3, v3, :cond_0

    .line 550
    iput v3, p0, Lcom/tkay/expressad/videocommon/b/a;->u:I

    return-void

    .line 554
    :cond_0
    invoke-direct {p0}, Lcom/tkay/expressad/videocommon/b/a;->v()V

    .line 557
    :cond_1
    iget-boolean v0, p0, Lcom/tkay/expressad/videocommon/b/a;->F:Z

    if-eqz v0, :cond_5

    .line 558
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/a;->v:Ljava/util/concurrent/CopyOnWriteArrayList;

    if-eqz v0, :cond_3

    .line 559
    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_2
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_3

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/videocommon/b/d;

    if-eqz v1, :cond_2

    .line 561
    invoke-interface {v1, p1, p2, p3}, Lcom/tkay/expressad/videocommon/b/d;->a(JI)V

    goto :goto_0

    .line 565
    :cond_3
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/a;->w:Lcom/tkay/expressad/videocommon/b/d;

    if-eqz v0, :cond_5

    iget v0, p0, Lcom/tkay/expressad/videocommon/b/a;->u:I

    if-eq v0, v3, :cond_4

    iget v0, p0, Lcom/tkay/expressad/videocommon/b/a;->u:I

    if-eq v0, v2, :cond_4

    iget v0, p0, Lcom/tkay/expressad/videocommon/b/a;->u:I

    const/4 v1, 0x2

    if-eq v0, v1, :cond_4

    iget v0, p0, Lcom/tkay/expressad/videocommon/b/a;->u:I

    const/4 v1, 0x6

    if-ne v0, v1, :cond_5

    .line 567
    :cond_4
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/a;->w:Lcom/tkay/expressad/videocommon/b/d;

    invoke-interface {v0, p1, p2, p3}, Lcom/tkay/expressad/videocommon/b/d;->a(JI)V

    const/4 p1, 0x0

    .line 568
    iput-object p1, p0, Lcom/tkay/expressad/videocommon/b/a;->w:Lcom/tkay/expressad/videocommon/b/d;

    :cond_5
    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/videocommon/b/a;JI)V
    .locals 5

    .line 3542
    iput-wide p1, p0, Lcom/tkay/expressad/videocommon/b/a;->J:J

    .line 3546
    iget v0, p0, Lcom/tkay/expressad/videocommon/b/a;->R:I

    int-to-long v1, v0

    iget-wide v3, p0, Lcom/tkay/expressad/videocommon/b/a;->H:J

    mul-long/2addr v1, v3

    const-wide/16 v3, 0x64

    mul-long/2addr v3, p1

    cmp-long v1, v3, v1

    const/4 v2, 0x4

    const/4 v3, 0x5

    if-ltz v1, :cond_1

    .line 3547
    iget-boolean v1, p0, Lcom/tkay/expressad/videocommon/b/a;->S:Z

    if-nez v1, :cond_1

    if-eq p3, v2, :cond_1

    const/16 v1, 0x64

    if-ne v0, v1, :cond_0

    if-eq p3, v3, :cond_0

    .line 3550
    iput v3, p0, Lcom/tkay/expressad/videocommon/b/a;->u:I

    return-void

    .line 3554
    :cond_0
    invoke-direct {p0}, Lcom/tkay/expressad/videocommon/b/a;->v()V

    .line 3557
    :cond_1
    iget-boolean v0, p0, Lcom/tkay/expressad/videocommon/b/a;->F:Z

    if-eqz v0, :cond_5

    .line 3558
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/a;->v:Ljava/util/concurrent/CopyOnWriteArrayList;

    if-eqz v0, :cond_3

    .line 3559
    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_2
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_3

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/videocommon/b/d;

    if-eqz v1, :cond_2

    .line 3561
    invoke-interface {v1, p1, p2, p3}, Lcom/tkay/expressad/videocommon/b/d;->a(JI)V

    goto :goto_0

    .line 3565
    :cond_3
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/a;->w:Lcom/tkay/expressad/videocommon/b/d;

    if-eqz v0, :cond_5

    iget v0, p0, Lcom/tkay/expressad/videocommon/b/a;->u:I

    if-eq v0, v3, :cond_4

    iget v0, p0, Lcom/tkay/expressad/videocommon/b/a;->u:I

    if-eq v0, v2, :cond_4

    iget v0, p0, Lcom/tkay/expressad/videocommon/b/a;->u:I

    const/4 v1, 0x2

    if-eq v0, v1, :cond_4

    iget v0, p0, Lcom/tkay/expressad/videocommon/b/a;->u:I

    const/4 v1, 0x6

    if-ne v0, v1, :cond_5

    .line 3567
    :cond_4
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/a;->w:Lcom/tkay/expressad/videocommon/b/d;

    invoke-interface {v0, p1, p2, p3}, Lcom/tkay/expressad/videocommon/b/d;->a(JI)V

    const/4 p1, 0x0

    .line 3568
    iput-object p1, p0, Lcom/tkay/expressad/videocommon/b/a;->w:Lcom/tkay/expressad/videocommon/b/d;

    :cond_5
    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/videocommon/b/a;Ljava/lang/String;)V
    .locals 4

    .line 4613
    iget v0, p0, Lcom/tkay/expressad/videocommon/b/a;->K:I

    const/4 v1, 0x1

    add-int/2addr v0, v1

    iput v0, p0, Lcom/tkay/expressad/videocommon/b/a;->K:I

    .line 4615
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/a;->G:Landroid/content/Context;

    if-eqz v0, :cond_1

    .line 4616
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/a;->G:Landroid/content/Context;

    const-string v2, "connectivity"

    invoke-virtual {v0, v2}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    const/4 v2, 0x0

    .line 4618
    instance-of v3, v0, Landroid/net/ConnectivityManager;

    if-eqz v3, :cond_0

    .line 4619
    move-object v2, v0

    check-cast v2, Landroid/net/ConnectivityManager;

    :cond_0
    if-eqz v2, :cond_1

    .line 4622
    invoke-virtual {v2}, Landroid/net/ConnectivityManager;->getActiveNetworkInfo()Landroid/net/NetworkInfo;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 4623
    invoke-virtual {v2}, Landroid/net/ConnectivityManager;->getActiveNetworkInfo()Landroid/net/NetworkInfo;

    move-result-object v0

    invoke-virtual {v0}, Landroid/net/NetworkInfo;->isAvailable()Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v0, :cond_1

    return-void

    :catchall_0
    move-exception v0

    .line 4630
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 4633
    :cond_1
    iget v0, p0, Lcom/tkay/expressad/videocommon/b/a;->K:I

    if-gt v0, v1, :cond_2

    .line 4635
    iget-object p0, p0, Lcom/tkay/expressad/videocommon/b/a;->Y:Landroid/os/Handler;

    const/4 p1, 0x5

    const-wide/16 v0, 0x7d0

    invoke-virtual {p0, p1, v0, v1}, Landroid/os/Handler;->sendEmptyMessageDelayed(IJ)Z

    return-void

    .line 4637
    :cond_2
    invoke-direct {p0}, Lcom/tkay/expressad/videocommon/b/a;->A()V

    .line 5312
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/a;->P:Lcom/tkay/expressad/videocommon/d/b;

    if-eqz v0, :cond_3

    .line 5314
    iget-object v1, p0, Lcom/tkay/expressad/videocommon/b/a;->I:Ljava/lang/String;

    invoke-interface {v0, p1, v1}, Lcom/tkay/expressad/videocommon/d/b;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 5317
    :cond_3
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/a;->Q:Lcom/tkay/expressad/videocommon/d/b;

    if-eqz v0, :cond_4

    .line 5318
    iget-object v1, p0, Lcom/tkay/expressad/videocommon/b/a;->I:Ljava/lang/String;

    invoke-interface {v0, p1, v1}, Lcom/tkay/expressad/videocommon/d/b;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_4
    const/4 p1, 0x4

    .line 5320
    iput p1, p0, Lcom/tkay/expressad/videocommon/b/a;->u:I

    .line 5321
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object p1

    const/4 v0, 0x3

    .line 5322
    iput v0, p1, Landroid/os/Message;->what:I

    .line 5323
    iget-object p0, p0, Lcom/tkay/expressad/videocommon/b/a;->Y:Landroid/os/Handler;

    invoke-virtual {p0, p1}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/videocommon/b/a;)Z
    .locals 0

    .line 33
    iget-boolean p0, p0, Lcom/tkay/expressad/videocommon/b/a;->F:Z

    return p0
.end method

.method static synthetic b(Lcom/tkay/expressad/videocommon/b/a;)J
    .locals 2

    .line 33
    iget-wide v0, p0, Lcom/tkay/expressad/videocommon/b/a;->J:J

    return-wide v0
.end method

.method private b(Lcom/tkay/expressad/videocommon/b/d;)V
    .locals 1

    .line 532
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/a;->v:Ljava/util/concurrent/CopyOnWriteArrayList;

    if-eqz v0, :cond_0

    .line 533
    invoke-virtual {v0, p1}, Ljava/util/concurrent/CopyOnWriteArrayList;->add(Ljava/lang/Object;)Z

    :cond_0
    return-void
.end method

.method private b(Lcom/tkay/expressad/videocommon/d/b;)V
    .locals 0

    .line 523
    iput-object p1, p0, Lcom/tkay/expressad/videocommon/b/a;->Q:Lcom/tkay/expressad/videocommon/d/b;

    return-void
.end method

.method private b(Ljava/lang/String;)V
    .locals 2

    .line 312
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/a;->P:Lcom/tkay/expressad/videocommon/d/b;

    if-eqz v0, :cond_0

    .line 314
    iget-object v1, p0, Lcom/tkay/expressad/videocommon/b/a;->I:Ljava/lang/String;

    invoke-interface {v0, p1, v1}, Lcom/tkay/expressad/videocommon/d/b;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 317
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/a;->Q:Lcom/tkay/expressad/videocommon/d/b;

    if-eqz v0, :cond_1

    .line 318
    iget-object v1, p0, Lcom/tkay/expressad/videocommon/b/a;->I:Ljava/lang/String;

    invoke-interface {v0, p1, v1}, Lcom/tkay/expressad/videocommon/d/b;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    const/4 p1, 0x4

    .line 320
    iput p1, p0, Lcom/tkay/expressad/videocommon/b/a;->u:I

    .line 321
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object p1

    const/4 v0, 0x3

    .line 322
    iput v0, p1, Landroid/os/Message;->what:I

    .line 323
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/a;->Y:Landroid/os/Handler;

    invoke-virtual {v0, p1}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    return-void
.end method

.method static synthetic c(Lcom/tkay/expressad/videocommon/b/a;)I
    .locals 0

    .line 33
    iget p0, p0, Lcom/tkay/expressad/videocommon/b/a;->u:I

    return p0
.end method

.method private c(Ljava/lang/String;)V
    .locals 4

    .line 613
    iget v0, p0, Lcom/tkay/expressad/videocommon/b/a;->K:I

    const/4 v1, 0x1

    add-int/2addr v0, v1

    iput v0, p0, Lcom/tkay/expressad/videocommon/b/a;->K:I

    .line 615
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/a;->G:Landroid/content/Context;

    if-eqz v0, :cond_1

    .line 616
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/a;->G:Landroid/content/Context;

    const-string v2, "connectivity"

    invoke-virtual {v0, v2}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    const/4 v2, 0x0

    .line 618
    instance-of v3, v0, Landroid/net/ConnectivityManager;

    if-eqz v3, :cond_0

    .line 619
    move-object v2, v0

    check-cast v2, Landroid/net/ConnectivityManager;

    :cond_0
    if-eqz v2, :cond_1

    .line 622
    invoke-virtual {v2}, Landroid/net/ConnectivityManager;->getActiveNetworkInfo()Landroid/net/NetworkInfo;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 623
    invoke-virtual {v2}, Landroid/net/ConnectivityManager;->getActiveNetworkInfo()Landroid/net/NetworkInfo;

    move-result-object v0

    invoke-virtual {v0}, Landroid/net/NetworkInfo;->isAvailable()Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v0, :cond_1

    return-void

    :catchall_0
    move-exception v0

    .line 630
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 633
    :cond_1
    iget v0, p0, Lcom/tkay/expressad/videocommon/b/a;->K:I

    if-gt v0, v1, :cond_2

    .line 635
    iget-object p1, p0, Lcom/tkay/expressad/videocommon/b/a;->Y:Landroid/os/Handler;

    const/4 v0, 0x5

    const-wide/16 v1, 0x7d0

    invoke-virtual {p1, v0, v1, v2}, Landroid/os/Handler;->sendEmptyMessageDelayed(IJ)Z

    return-void

    .line 637
    :cond_2
    invoke-direct {p0}, Lcom/tkay/expressad/videocommon/b/a;->A()V

    .line 1312
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/a;->P:Lcom/tkay/expressad/videocommon/d/b;

    if-eqz v0, :cond_3

    .line 1314
    iget-object v1, p0, Lcom/tkay/expressad/videocommon/b/a;->I:Ljava/lang/String;

    invoke-interface {v0, p1, v1}, Lcom/tkay/expressad/videocommon/d/b;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 1317
    :cond_3
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/a;->Q:Lcom/tkay/expressad/videocommon/d/b;

    if-eqz v0, :cond_4

    .line 1318
    iget-object v1, p0, Lcom/tkay/expressad/videocommon/b/a;->I:Ljava/lang/String;

    invoke-interface {v0, p1, v1}, Lcom/tkay/expressad/videocommon/d/b;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_4
    const/4 p1, 0x4

    .line 1320
    iput p1, p0, Lcom/tkay/expressad/videocommon/b/a;->u:I

    .line 1321
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object p1

    const/4 v0, 0x3

    .line 1322
    iput v0, p1, Landroid/os/Message;->what:I

    .line 1323
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/a;->Y:Landroid/os/Handler;

    invoke-virtual {v0, p1}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    return-void
.end method

.method static synthetic d(Lcom/tkay/expressad/videocommon/b/a;)Z
    .locals 1

    const/4 v0, 0x0

    .line 33
    iput-boolean v0, p0, Lcom/tkay/expressad/videocommon/b/a;->g:Z

    return v0
.end method

.method static synthetic e(Lcom/tkay/expressad/videocommon/b/a;)J
    .locals 2

    .line 33
    iget-wide v0, p0, Lcom/tkay/expressad/videocommon/b/a;->H:J

    return-wide v0
.end method

.method static synthetic f(Lcom/tkay/expressad/videocommon/b/a;)I
    .locals 0

    .line 33
    iget p0, p0, Lcom/tkay/expressad/videocommon/b/a;->R:I

    return p0
.end method

.method static synthetic g(Lcom/tkay/expressad/videocommon/b/a;)Landroid/os/Handler;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/expressad/videocommon/b/a;->Y:Landroid/os/Handler;

    return-object p0
.end method

.method static synthetic s()V
    .locals 1

    .line 3729
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/b/b;->d()Landroid/content/Context;

    return-void
.end method

.method private t()V
    .locals 2

    .line 230
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/a;->I:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    iget v0, p0, Lcom/tkay/expressad/videocommon/b/a;->n:I

    const/4 v1, 0x3

    if-ne v0, v1, :cond_0

    goto :goto_0

    .line 233
    :cond_0
    invoke-direct {p0}, Lcom/tkay/expressad/videocommon/b/a;->x()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_1
    :goto_0
    return-void

    :catch_0
    move-exception v0

    .line 236
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method private u()V
    .locals 4

    .line 245
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/a;->c:Lcom/tkay/expressad/videocommon/b/m;

    if-nez v0, :cond_0

    .line 246
    new-instance v0, Lcom/tkay/expressad/videocommon/b/m;

    iget-object v1, p0, Lcom/tkay/expressad/videocommon/b/a;->I:Ljava/lang/String;

    iget v2, p0, Lcom/tkay/expressad/videocommon/b/a;->R:I

    iget v3, p0, Lcom/tkay/expressad/videocommon/b/a;->W:I

    invoke-direct {v0, v1, v2, v3}, Lcom/tkay/expressad/videocommon/b/m;-><init>(Ljava/lang/String;II)V

    iput-object v0, p0, Lcom/tkay/expressad/videocommon/b/a;->c:Lcom/tkay/expressad/videocommon/b/m;

    .line 247
    new-instance v1, Lcom/tkay/expressad/videocommon/b/a$3;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/videocommon/b/a$3;-><init>(Lcom/tkay/expressad/videocommon/b/a;)V

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/videocommon/b/m;->a(Lcom/tkay/core/common/res/a/a$a;)V

    :cond_0
    return-void
.end method

.method private v()V
    .locals 2

    .line 284
    iget-boolean v0, p0, Lcom/tkay/expressad/videocommon/b/a;->S:Z

    if-nez v0, :cond_1

    const/4 v0, 0x1

    .line 285
    iput-boolean v0, p0, Lcom/tkay/expressad/videocommon/b/a;->S:Z

    .line 286
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/a;->P:Lcom/tkay/expressad/videocommon/d/b;

    if-eqz v0, :cond_0

    .line 287
    iget-object v1, p0, Lcom/tkay/expressad/videocommon/b/a;->I:Ljava/lang/String;

    invoke-interface {v0, v1}, Lcom/tkay/expressad/videocommon/d/b;->a(Ljava/lang/String;)V

    .line 289
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/a;->Q:Lcom/tkay/expressad/videocommon/d/b;

    if-eqz v0, :cond_1

    .line 290
    iget-object v1, p0, Lcom/tkay/expressad/videocommon/b/a;->I:Ljava/lang/String;

    invoke-interface {v0, v1}, Lcom/tkay/expressad/videocommon/d/b;->a(Ljava/lang/String;)V

    :cond_1
    return-void
.end method

.method private w()Z
    .locals 1

    .line 368
    iget-boolean v0, p0, Lcom/tkay/expressad/videocommon/b/a;->F:Z

    return v0
.end method

.method private x()V
    .locals 5

    .line 503
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/l;->a()Lcom/tkay/expressad/videocommon/b/l;

    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/a;->I:Ljava/lang/String;

    invoke-static {v0}, Lcom/tkay/expressad/videocommon/b/l;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/videocommon/b/a;->L:Ljava/lang/String;

    .line 504
    new-instance v0, Ljava/io/File;

    iget-object v1, p0, Lcom/tkay/expressad/videocommon/b/a;->L:Ljava/lang/String;

    invoke-direct {v0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 505
    invoke-virtual {v0}, Ljava/io/File;->length()J

    move-result-wide v1

    const-wide/16 v3, 0x0

    cmp-long v1, v1, v3

    if-lez v1, :cond_0

    .line 506
    invoke-virtual {v0}, Ljava/io/File;->length()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/tkay/expressad/videocommon/b/a;->J:J

    goto :goto_0

    .line 508
    :cond_0
    iput-wide v3, p0, Lcom/tkay/expressad/videocommon/b/a;->J:J

    .line 510
    :goto_0
    iget-wide v0, p0, Lcom/tkay/expressad/videocommon/b/a;->H:J

    cmp-long v0, v0, v3

    if-nez v0, :cond_1

    .line 511
    invoke-static {}, Lcom/tkay/core/common/a/j;->a()Lcom/tkay/core/common/a/j;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/videocommon/b/a;->I:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/a/j;->a(Ljava/lang/String;)Lcom/tkay/core/common/a/i;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 513
    invoke-virtual {v0}, Lcom/tkay/core/common/a/i;->d()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/tkay/expressad/videocommon/b/a;->H:J

    :cond_1
    return-void
.end method

.method private y()Lcom/tkay/expressad/videocommon/b/d;
    .locals 1

    .line 589
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/a;->X:Lcom/tkay/expressad/videocommon/b/d;

    return-object v0
.end method

.method private static z()V
    .locals 0

    return-void
.end method


# virtual methods
.method public final a()Ljava/lang/String;
    .locals 1

    .line 120
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/a;->I:Ljava/lang/String;

    return-object v0
.end method

.method public final a(I)V
    .locals 0

    .line 56
    iput p1, p0, Lcom/tkay/expressad/videocommon/b/a;->n:I

    return-void
.end method

.method public final a(Lcom/tkay/expressad/foundation/d/c;)V
    .locals 0

    .line 499
    iput-object p1, p0, Lcom/tkay/expressad/videocommon/b/a;->D:Lcom/tkay/expressad/foundation/d/c;

    return-void
.end method

.method public final a(Lcom/tkay/expressad/videocommon/b/d;)V
    .locals 0

    .line 538
    iput-object p1, p0, Lcom/tkay/expressad/videocommon/b/a;->w:Lcom/tkay/expressad/videocommon/b/d;

    return-void
.end method

.method public final a(Lcom/tkay/expressad/videocommon/d/b;)V
    .locals 0

    .line 519
    iput-object p1, p0, Lcom/tkay/expressad/videocommon/b/a;->P:Lcom/tkay/expressad/videocommon/d/b;

    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 0

    .line 721
    iput-object p1, p0, Lcom/tkay/expressad/videocommon/b/a;->r:Ljava/lang/String;

    return-void
.end method

.method public final a(Z)V
    .locals 1

    if-nez p1, :cond_0

    const/4 v0, 0x0

    .line 202
    iput-boolean v0, p0, Lcom/tkay/expressad/videocommon/b/a;->o:Z

    .line 204
    :cond_0
    iput-boolean p1, p0, Lcom/tkay/expressad/videocommon/b/a;->T:Z

    return-void
.end method

.method public final b(I)V
    .locals 0

    .line 60
    iput p1, p0, Lcom/tkay/expressad/videocommon/b/a;->q:I

    return-void
.end method

.method public final b(Z)V
    .locals 0

    .line 213
    iput-boolean p1, p0, Lcom/tkay/expressad/videocommon/b/a;->N:Z

    return-void
.end method

.method public final b()Z
    .locals 1

    .line 197
    iget-boolean v0, p0, Lcom/tkay/expressad/videocommon/b/a;->T:Z

    return v0
.end method

.method public final c()J
    .locals 2

    .line 209
    iget-wide v0, p0, Lcom/tkay/expressad/videocommon/b/a;->O:J

    return-wide v0
.end method

.method public final c(I)V
    .locals 1

    .line 64
    iput p1, p0, Lcom/tkay/expressad/videocommon/b/a;->W:I

    .line 65
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "mVideoCtnType:"

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget v0, p0, Lcom/tkay/expressad/videocommon/b/a;->W:I

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    return-void
.end method

.method public final d(I)V
    .locals 1

    .line 527
    iput p1, p0, Lcom/tkay/expressad/videocommon/b/a;->R:I

    .line 528
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "mReadyRate:"

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget v0, p0, Lcom/tkay/expressad/videocommon/b/a;->R:I

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    return-void
.end method

.method public final d()Z
    .locals 1

    .line 217
    iget-boolean v0, p0, Lcom/tkay/expressad/videocommon/b/a;->N:Z

    return v0
.end method

.method public final e()Ljava/lang/String;
    .locals 1

    .line 221
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/a;->L:Ljava/lang/String;

    return-object v0
.end method

.method public final e(I)V
    .locals 0

    .line 669
    iput p1, p0, Lcom/tkay/expressad/videocommon/b/a;->Z:I

    return-void
.end method

.method public final f()J
    .locals 2

    .line 225
    iget-wide v0, p0, Lcom/tkay/expressad/videocommon/b/a;->H:J

    return-wide v0
.end method

.method public final g()V
    .locals 2

    .line 305
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    const/4 v1, 0x5

    .line 306
    iput v1, p0, Lcom/tkay/expressad/videocommon/b/a;->u:I

    const/4 v1, 0x4

    .line 307
    iput v1, v0, Landroid/os/Message;->what:I

    .line 308
    iget-object v1, p0, Lcom/tkay/expressad/videocommon/b/a;->Y:Landroid/os/Handler;

    invoke-virtual {v1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    return-void
.end method

.method public final h()V
    .locals 2

    .line 327
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/a;->I:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 331
    :cond_0
    iget v0, p0, Lcom/tkay/expressad/videocommon/b/a;->u:I

    const/4 v1, 0x5

    if-ne v0, v1, :cond_1

    .line 332
    invoke-direct {p0}, Lcom/tkay/expressad/videocommon/b/a;->v()V

    return-void

    .line 336
    :cond_1
    iget v0, p0, Lcom/tkay/expressad/videocommon/b/a;->n:I

    const/4 v1, 0x3

    if-ne v0, v1, :cond_2

    .line 337
    invoke-virtual {p0}, Lcom/tkay/expressad/videocommon/b/a;->g()V

    return-void

    .line 341
    :cond_2
    iget v0, p0, Lcom/tkay/expressad/videocommon/b/a;->R:I

    if-nez v0, :cond_3

    .line 342
    invoke-virtual {p0}, Lcom/tkay/expressad/videocommon/b/a;->g()V

    return-void

    .line 346
    :cond_3
    invoke-direct {p0}, Lcom/tkay/expressad/videocommon/b/a;->x()V

    .line 348
    invoke-direct {p0}, Lcom/tkay/expressad/videocommon/b/a;->u()V

    .line 350
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/a;->c:Lcom/tkay/expressad/videocommon/b/m;

    if-eqz v0, :cond_4

    const/4 v0, 0x1

    .line 351
    iput v0, p0, Lcom/tkay/expressad/videocommon/b/a;->u:I

    .line 352
    iput-boolean v0, p0, Lcom/tkay/expressad/videocommon/b/a;->F:Z

    .line 353
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/a;->c:Lcom/tkay/expressad/videocommon/b/m;

    invoke-virtual {v0}, Lcom/tkay/expressad/videocommon/b/m;->a()V

    :cond_4
    return-void
.end method

.method public final i()V
    .locals 1

    .line 358
    invoke-direct {p0}, Lcom/tkay/expressad/videocommon/b/a;->x()V

    .line 359
    invoke-direct {p0}, Lcom/tkay/expressad/videocommon/b/a;->u()V

    .line 360
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/a;->c:Lcom/tkay/expressad/videocommon/b/m;

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    .line 361
    iput v0, p0, Lcom/tkay/expressad/videocommon/b/a;->u:I

    .line 362
    iput-boolean v0, p0, Lcom/tkay/expressad/videocommon/b/a;->F:Z

    .line 363
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/a;->c:Lcom/tkay/expressad/videocommon/b/m;

    invoke-virtual {v0}, Lcom/tkay/expressad/videocommon/b/m;->b()V

    :cond_0
    return-void
.end method

.method public final j()V
    .locals 1

    .line 372
    invoke-direct {p0}, Lcom/tkay/expressad/videocommon/b/a;->A()V

    const/4 v0, 0x4

    .line 373
    iput v0, p0, Lcom/tkay/expressad/videocommon/b/a;->u:I

    return-void
.end method

.method public final k()I
    .locals 1

    .line 377
    iget v0, p0, Lcom/tkay/expressad/videocommon/b/a;->u:I

    return v0
.end method

.method public final l()V
    .locals 1

    const/4 v0, 0x0

    .line 381
    iput v0, p0, Lcom/tkay/expressad/videocommon/b/a;->u:I

    return-void
.end method

.method public final m()Ljava/lang/String;
    .locals 6

    .line 389
    iget v0, p0, Lcom/tkay/expressad/videocommon/b/a;->n:I

    const-string v1, ""

    const/4 v2, 0x3

    if-ne v0, v2, :cond_0

    return-object v1

    .line 393
    :cond_0
    new-instance v0, Ljava/io/File;

    iget-object v2, p0, Lcom/tkay/expressad/videocommon/b/a;->L:Ljava/lang/String;

    invoke-direct {v0, v2}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 396
    :try_start_0
    invoke-virtual {v0}, Ljava/io/File;->length()J

    move-result-wide v2

    const-wide/16 v4, 0x0

    cmp-long v2, v2, v4

    if-lez v2, :cond_3

    .line 397
    invoke-virtual {v0}, Ljava/io/File;->canRead()Z

    move-result v2

    if-eqz v2, :cond_2

    .line 398
    invoke-virtual {v0}, Ljava/io/File;->length()J

    move-result-wide v2

    cmp-long v0, v2, v4

    if-lez v0, :cond_1

    goto :goto_0

    :cond_1
    const-string v1, "file length is 0 "

    goto :goto_0

    :cond_2
    const-string v1, "file can not read "

    goto :goto_0

    :cond_3
    const-string v1, "file is not exist "
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 410
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    .line 411
    sget-boolean v2, Lcom/tkay/expressad/b;->a:Z

    if-eqz v2, :cond_4

    .line 412
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_4
    :goto_0
    return-object v1
.end method

.method public final n()Lcom/tkay/expressad/foundation/d/c;
    .locals 1

    .line 495
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/a;->D:Lcom/tkay/expressad/foundation/d/c;

    return-object v0
.end method

.method public final o()V
    .locals 1

    .line 575
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/a;->v:Ljava/util/concurrent/CopyOnWriteArrayList;

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    .line 576
    iput-object v0, p0, Lcom/tkay/expressad/videocommon/b/a;->v:Ljava/util/concurrent/CopyOnWriteArrayList;

    :cond_0
    return-void
.end method

.method public final p()J
    .locals 2

    .line 585
    iget-wide v0, p0, Lcom/tkay/expressad/videocommon/b/a;->J:J

    return-wide v0
.end method

.method public final q()V
    .locals 4

    .line 1712
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    const/16 v1, 0x271a

    .line 1713
    iput v1, v0, Landroid/os/Message;->what:I

    .line 1733
    iget-object v1, p0, Lcom/tkay/expressad/videocommon/b/a;->D:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/tkay/expressad/videocommon/b/a;->E:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    iget-object v1, p0, Lcom/tkay/expressad/videocommon/b/a;->D:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    iget-object v1, p0, Lcom/tkay/expressad/videocommon/b/a;->D:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->S()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    goto/16 :goto_0

    .line 1736
    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "key=2000077&unit_id="

    .line 1737
    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1738
    iget-object v2, p0, Lcom/tkay/expressad/videocommon/b/a;->E:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "&request_id="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1739
    iget-object v2, p0, Lcom/tkay/expressad/videocommon/b/a;->D:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "&request_id_notice="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1740
    iget-object v2, p0, Lcom/tkay/expressad/videocommon/b/a;->D:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->aa()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "&package_name="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1741
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/b/b;->a()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "&app_id="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1742
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "&video_url="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1743
    iget-object v2, p0, Lcom/tkay/expressad/videocommon/b/a;->D:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->S()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Ljava/net/URLEncoder;->encode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "&process_size="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1744
    iget-wide v2, p0, Lcom/tkay/expressad/videocommon/b/a;->J:J

    invoke-virtual {v1, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v2, "&file_size="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1745
    iget-wide v2, p0, Lcom/tkay/expressad/videocommon/b/a;->H:J

    invoke-virtual {v1, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v2, "&ready_rate="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1746
    iget v2, p0, Lcom/tkay/expressad/videocommon/b/a;->R:I

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, "&cd_rate="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1747
    iget v2, p0, Lcom/tkay/expressad/videocommon/b/a;->q:I

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, "&cid="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1748
    iget-object v2, p0, Lcom/tkay/expressad/videocommon/b/a;->D:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "&type="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1749
    iget v2, p0, Lcom/tkay/expressad/videocommon/b/a;->u:I

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 1750
    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    goto :goto_1

    :cond_1
    :goto_0
    const-string v1, ""

    .line 1715
    :goto_1
    iput-object v1, v0, Landroid/os/Message;->obj:Ljava/lang/Object;

    .line 1716
    iget-object v1, p0, Lcom/tkay/expressad/videocommon/b/a;->Y:Landroid/os/Handler;

    invoke-virtual {v1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    return-void
.end method

.method public final r()Ljava/lang/String;
    .locals 1

    .line 725
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/a;->r:Ljava/lang/String;

    return-object v0
.end method
