.class public final Lcom/tkay/expressad/exoplayer/b/l;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/exoplayer/b/h;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/exoplayer/b/l$e;,
        Lcom/tkay/expressad/exoplayer/b/l$d;,
        Lcom/tkay/expressad/exoplayer/b/l$f;,
        Lcom/tkay/expressad/exoplayer/b/l$b;,
        Lcom/tkay/expressad/exoplayer/b/l$a;,
        Lcom/tkay/expressad/exoplayer/b/l$c;
    }
.end annotation


# static fields
.field public static b:Z = false

.field public static c:Z = false

.field private static final d:J = 0x3d090L

.field private static final e:J = 0xb71b0L

.field private static final f:J = 0x3d090L

.field private static final g:I = 0x4

.field private static final h:I = -0x2

.field private static final i:I = 0x0

.field private static final j:I = 0x1

.field private static final k:I = 0x1

.field private static final l:I = 0x1

.field private static final m:Ljava/lang/String; = "AudioTrack"

.field private static final n:I = 0x0

.field private static final o:I = 0x1

.field private static final p:I = 0x2


# instance fields
.field private A:Lcom/tkay/expressad/exoplayer/b/h$c;

.field private B:Landroid/media/AudioTrack;

.field private C:Landroid/media/AudioTrack;

.field private D:Z

.field private E:Z

.field private F:I

.field private G:I

.field private H:I

.field private I:I

.field private J:Lcom/tkay/expressad/exoplayer/b/b;

.field private K:Z

.field private L:Z

.field private M:I

.field private N:Lcom/tkay/expressad/exoplayer/v;

.field private O:Lcom/tkay/expressad/exoplayer/v;

.field private P:J

.field private Q:J

.field private R:Ljava/nio/ByteBuffer;

.field private S:I

.field private T:I

.field private U:J

.field private V:J

.field private W:I

.field private X:J

.field private Y:J

.field private Z:I

.field private aa:I

.field private ab:J

.field private ac:F

.field private ad:[Lcom/tkay/expressad/exoplayer/b/f;

.field private ae:[Ljava/nio/ByteBuffer;

.field private af:Ljava/nio/ByteBuffer;

.field private ag:Ljava/nio/ByteBuffer;

.field private ah:[B

.field private ai:I

.field private aj:I

.field private ak:Z

.field private al:Z

.field private am:I

.field private an:Z

.field private ao:J

.field private final q:Lcom/tkay/expressad/exoplayer/b/c;

.field private final r:Lcom/tkay/expressad/exoplayer/b/l$a;

.field private final s:Z

.field private final t:Lcom/tkay/expressad/exoplayer/b/k;

.field private final u:Lcom/tkay/expressad/exoplayer/b/u;

.field private final v:[Lcom/tkay/expressad/exoplayer/b/f;

.field private final w:[Lcom/tkay/expressad/exoplayer/b/f;

.field private final x:Landroid/os/ConditionVariable;

.field private final y:Lcom/tkay/expressad/exoplayer/b/j;

.field private final z:Ljava/util/ArrayDeque;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayDeque<",
            "Lcom/tkay/expressad/exoplayer/b/l$d;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method private constructor <init>(Lcom/tkay/expressad/exoplayer/b/c;Lcom/tkay/expressad/exoplayer/b/l$a;)V
    .locals 5

    .line 339
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 340
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/b/l;->q:Lcom/tkay/expressad/exoplayer/b/c;

    .line 341
    invoke-static {p2}, Lcom/tkay/expressad/exoplayer/k/a;->a(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/exoplayer/b/l$a;

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/b/l;->r:Lcom/tkay/expressad/exoplayer/b/l$a;

    const/4 p1, 0x0

    .line 342
    iput-boolean p1, p0, Lcom/tkay/expressad/exoplayer/b/l;->s:Z

    .line 343
    new-instance v0, Landroid/os/ConditionVariable;

    const/4 v1, 0x1

    invoke-direct {v0, v1}, Landroid/os/ConditionVariable;-><init>(Z)V

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->x:Landroid/os/ConditionVariable;

    .line 344
    new-instance v0, Lcom/tkay/expressad/exoplayer/b/j;

    new-instance v2, Lcom/tkay/expressad/exoplayer/b/l$e;

    invoke-direct {v2, p0, p1}, Lcom/tkay/expressad/exoplayer/b/l$e;-><init>(Lcom/tkay/expressad/exoplayer/b/l;B)V

    invoke-direct {v0, v2}, Lcom/tkay/expressad/exoplayer/b/j;-><init>(Lcom/tkay/expressad/exoplayer/b/j$a;)V

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->y:Lcom/tkay/expressad/exoplayer/b/j;

    .line 345
    new-instance v0, Lcom/tkay/expressad/exoplayer/b/k;

    invoke-direct {v0}, Lcom/tkay/expressad/exoplayer/b/k;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->t:Lcom/tkay/expressad/exoplayer/b/k;

    .line 346
    new-instance v0, Lcom/tkay/expressad/exoplayer/b/u;

    invoke-direct {v0}, Lcom/tkay/expressad/exoplayer/b/u;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->u:Lcom/tkay/expressad/exoplayer/b/u;

    .line 347
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    const/4 v2, 0x3

    new-array v2, v2, [Lcom/tkay/expressad/exoplayer/b/f;

    .line 348
    new-instance v3, Lcom/tkay/expressad/exoplayer/b/p;

    invoke-direct {v3}, Lcom/tkay/expressad/exoplayer/b/p;-><init>()V

    aput-object v3, v2, p1

    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/b/l;->t:Lcom/tkay/expressad/exoplayer/b/k;

    aput-object v3, v2, v1

    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/b/l;->u:Lcom/tkay/expressad/exoplayer/b/u;

    const/4 v4, 0x2

    aput-object v3, v2, v4

    invoke-static {v0, v2}, Ljava/util/Collections;->addAll(Ljava/util/Collection;[Ljava/lang/Object;)Z

    .line 353
    invoke-interface {p2}, Lcom/tkay/expressad/exoplayer/b/l$a;->a()[Lcom/tkay/expressad/exoplayer/b/f;

    move-result-object p2

    invoke-static {v0, p2}, Ljava/util/Collections;->addAll(Ljava/util/Collection;[Ljava/lang/Object;)Z

    .line 355
    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result p2

    new-array p2, p2, [Lcom/tkay/expressad/exoplayer/b/f;

    invoke-virtual {v0, p2}, Ljava/util/ArrayList;->toArray([Ljava/lang/Object;)[Ljava/lang/Object;

    move-result-object p2

    check-cast p2, [Lcom/tkay/expressad/exoplayer/b/f;

    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/b/l;->v:[Lcom/tkay/expressad/exoplayer/b/f;

    new-array p2, v1, [Lcom/tkay/expressad/exoplayer/b/f;

    .line 356
    new-instance v0, Lcom/tkay/expressad/exoplayer/b/n;

    invoke-direct {v0}, Lcom/tkay/expressad/exoplayer/b/n;-><init>()V

    aput-object v0, p2, p1

    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/b/l;->w:[Lcom/tkay/expressad/exoplayer/b/f;

    const/high16 p2, 0x3f800000    # 1.0f

    .line 357
    iput p2, p0, Lcom/tkay/expressad/exoplayer/b/l;->ac:F

    .line 358
    iput p1, p0, Lcom/tkay/expressad/exoplayer/b/l;->aa:I

    .line 359
    sget-object p2, Lcom/tkay/expressad/exoplayer/b/b;->a:Lcom/tkay/expressad/exoplayer/b/b;

    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/b/l;->J:Lcom/tkay/expressad/exoplayer/b/b;

    .line 360
    iput p1, p0, Lcom/tkay/expressad/exoplayer/b/l;->am:I

    .line 361
    sget-object p2, Lcom/tkay/expressad/exoplayer/v;->a:Lcom/tkay/expressad/exoplayer/v;

    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/b/l;->O:Lcom/tkay/expressad/exoplayer/v;

    const/4 p2, -0x1

    .line 362
    iput p2, p0, Lcom/tkay/expressad/exoplayer/b/l;->aj:I

    new-array p2, p1, [Lcom/tkay/expressad/exoplayer/b/f;

    .line 363
    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/b/l;->ad:[Lcom/tkay/expressad/exoplayer/b/f;

    new-array p1, p1, [Ljava/nio/ByteBuffer;

    .line 364
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/b/l;->ae:[Ljava/nio/ByteBuffer;

    .line 365
    new-instance p1, Ljava/util/ArrayDeque;

    invoke-direct {p1}, Ljava/util/ArrayDeque;-><init>()V

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/b/l;->z:Ljava/util/ArrayDeque;

    return-void
.end method

.method public constructor <init>(Lcom/tkay/expressad/exoplayer/b/c;[Lcom/tkay/expressad/exoplayer/b/f;)V
    .locals 1

    const/4 v0, 0x0

    .line 298
    invoke-direct {p0, p1, p2, v0}, Lcom/tkay/expressad/exoplayer/b/l;-><init>(Lcom/tkay/expressad/exoplayer/b/c;[Lcom/tkay/expressad/exoplayer/b/f;B)V

    return-void
.end method

.method private constructor <init>(Lcom/tkay/expressad/exoplayer/b/c;[Lcom/tkay/expressad/exoplayer/b/f;B)V
    .locals 0

    .line 317
    new-instance p3, Lcom/tkay/expressad/exoplayer/b/l$b;

    invoke-direct {p3, p2}, Lcom/tkay/expressad/exoplayer/b/l$b;-><init>([Lcom/tkay/expressad/exoplayer/b/f;)V

    invoke-direct {p0, p1, p3}, Lcom/tkay/expressad/exoplayer/b/l;-><init>(Lcom/tkay/expressad/exoplayer/b/c;Lcom/tkay/expressad/exoplayer/b/l$a;)V

    return-void
.end method

.method private static a(ILjava/nio/ByteBuffer;)I
    .locals 1

    const/4 v0, 0x7

    if-eq p0, v0, :cond_5

    const/16 v0, 0x8

    if-ne p0, v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x5

    if-ne p0, v0, :cond_1

    .line 1180
    invoke-static {}, Lcom/tkay/expressad/exoplayer/b/a;->a()I

    move-result p0

    return p0

    :cond_1
    const/4 v0, 0x6

    if-ne p0, v0, :cond_2

    .line 1182
    invoke-static {p1}, Lcom/tkay/expressad/exoplayer/b/a;->a(Ljava/nio/ByteBuffer;)I

    move-result p0

    return p0

    :cond_2
    const/16 v0, 0xe

    if-ne p0, v0, :cond_4

    .line 1184
    invoke-static {p1}, Lcom/tkay/expressad/exoplayer/b/a;->b(Ljava/nio/ByteBuffer;)I

    move-result p0

    const/4 v0, -0x1

    if-ne p0, v0, :cond_3

    const/4 p0, 0x0

    return p0

    .line 1187
    :cond_3
    invoke-static {p1, p0}, Lcom/tkay/expressad/exoplayer/b/a;->a(Ljava/nio/ByteBuffer;I)I

    move-result p0

    mul-int/lit8 p0, p0, 0x10

    return p0

    .line 1190
    :cond_4
    new-instance p1, Ljava/lang/IllegalStateException;

    invoke-static {p0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p0

    const-string v0, "Unexpected audio encoding: "

    invoke-virtual {v0, p0}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-direct {p1, p0}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw p1

    .line 1178
    :cond_5
    :goto_0
    invoke-static {p1}, Lcom/tkay/expressad/exoplayer/b/m;->a(Ljava/nio/ByteBuffer;)I

    move-result p0

    return p0
.end method

.method private static a(Landroid/media/AudioTrack;Ljava/nio/ByteBuffer;I)I
    .locals 1

    const/4 v0, 0x1

    .line 1196
    invoke-virtual {p0, p1, p2, v0}, Landroid/media/AudioTrack;->write(Ljava/nio/ByteBuffer;II)I

    move-result p0

    return p0
.end method

.method private a(Landroid/media/AudioTrack;Ljava/nio/ByteBuffer;IJ)I
    .locals 5

    .line 1207
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->R:Ljava/nio/ByteBuffer;

    if-nez v0, :cond_0

    const/16 v0, 0x10

    .line 1208
    invoke-static {v0}, Ljava/nio/ByteBuffer;->allocate(I)Ljava/nio/ByteBuffer;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->R:Ljava/nio/ByteBuffer;

    .line 1209
    sget-object v1, Ljava/nio/ByteOrder;->BIG_ENDIAN:Ljava/nio/ByteOrder;

    invoke-virtual {v0, v1}, Ljava/nio/ByteBuffer;->order(Ljava/nio/ByteOrder;)Ljava/nio/ByteBuffer;

    .line 1210
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->R:Ljava/nio/ByteBuffer;

    const v1, 0x55550001

    invoke-virtual {v0, v1}, Ljava/nio/ByteBuffer;->putInt(I)Ljava/nio/ByteBuffer;

    .line 1212
    :cond_0
    iget v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->S:I

    const/4 v1, 0x0

    if-nez v0, :cond_1

    .line 1213
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->R:Ljava/nio/ByteBuffer;

    const/4 v2, 0x4

    invoke-virtual {v0, v2, p3}, Ljava/nio/ByteBuffer;->putInt(II)Ljava/nio/ByteBuffer;

    .line 1214
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->R:Ljava/nio/ByteBuffer;

    const/16 v2, 0x8

    const-wide/16 v3, 0x3e8

    mul-long/2addr p4, v3

    invoke-virtual {v0, v2, p4, p5}, Ljava/nio/ByteBuffer;->putLong(IJ)Ljava/nio/ByteBuffer;

    .line 1215
    iget-object p4, p0, Lcom/tkay/expressad/exoplayer/b/l;->R:Ljava/nio/ByteBuffer;

    invoke-virtual {p4, v1}, Ljava/nio/ByteBuffer;->position(I)Ljava/nio/Buffer;

    .line 1216
    iput p3, p0, Lcom/tkay/expressad/exoplayer/b/l;->S:I

    .line 1218
    :cond_1
    iget-object p4, p0, Lcom/tkay/expressad/exoplayer/b/l;->R:Ljava/nio/ByteBuffer;

    invoke-virtual {p4}, Ljava/nio/ByteBuffer;->remaining()I

    move-result p4

    const/4 p5, 0x1

    if-lez p4, :cond_3

    .line 1220
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->R:Ljava/nio/ByteBuffer;

    invoke-virtual {p1, v0, p4, p5}, Landroid/media/AudioTrack;->write(Ljava/nio/ByteBuffer;II)I

    move-result v0

    if-gez v0, :cond_2

    .line 1222
    iput v1, p0, Lcom/tkay/expressad/exoplayer/b/l;->S:I

    return v0

    :cond_2
    if-ge v0, p4, :cond_3

    return v1

    .line 5196
    :cond_3
    invoke-virtual {p1, p2, p3, p5}, Landroid/media/AudioTrack;->write(Ljava/nio/ByteBuffer;II)I

    move-result p1

    if-gez p1, :cond_4

    .line 1231
    iput v1, p0, Lcom/tkay/expressad/exoplayer/b/l;->S:I

    return p1

    .line 1234
    :cond_4
    iget p2, p0, Lcom/tkay/expressad/exoplayer/b/l;->S:I

    sub-int/2addr p2, p1

    iput p2, p0, Lcom/tkay/expressad/exoplayer/b/l;->S:I

    return p1
.end method

.method static synthetic a(Lcom/tkay/expressad/exoplayer/b/l;)Landroid/os/ConditionVariable;
    .locals 0

    .line 53
    iget-object p0, p0, Lcom/tkay/expressad/exoplayer/b/l;->x:Landroid/os/ConditionVariable;

    return-object p0
.end method

.method private a(J)V
    .locals 5

    .line 721
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->ad:[Lcom/tkay/expressad/exoplayer/b/f;

    array-length v0, v0

    move v1, v0

    :goto_0
    if-ltz v1, :cond_5

    if-lez v1, :cond_0

    .line 724
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/b/l;->ae:[Ljava/nio/ByteBuffer;

    add-int/lit8 v3, v1, -0x1

    aget-object v2, v2, v3

    goto :goto_1

    .line 725
    :cond_0
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/b/l;->af:Ljava/nio/ByteBuffer;

    if-eqz v2, :cond_1

    goto :goto_1

    :cond_1
    sget-object v2, Lcom/tkay/expressad/exoplayer/b/f;->a:Ljava/nio/ByteBuffer;

    :goto_1
    if-ne v1, v0, :cond_2

    .line 727
    invoke-direct {p0, v2, p1, p2}, Lcom/tkay/expressad/exoplayer/b/l;->b(Ljava/nio/ByteBuffer;J)V

    goto :goto_2

    .line 729
    :cond_2
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/b/l;->ad:[Lcom/tkay/expressad/exoplayer/b/f;

    aget-object v3, v3, v1

    .line 730
    invoke-interface {v3, v2}, Lcom/tkay/expressad/exoplayer/b/f;->a(Ljava/nio/ByteBuffer;)V

    .line 731
    invoke-interface {v3}, Lcom/tkay/expressad/exoplayer/b/f;->f()Ljava/nio/ByteBuffer;

    move-result-object v3

    .line 732
    iget-object v4, p0, Lcom/tkay/expressad/exoplayer/b/l;->ae:[Ljava/nio/ByteBuffer;

    aput-object v3, v4, v1

    .line 733
    invoke-virtual {v3}, Ljava/nio/ByteBuffer;->hasRemaining()Z

    move-result v3

    if-eqz v3, :cond_3

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 740
    :cond_3
    :goto_2
    invoke-virtual {v2}, Ljava/nio/ByteBuffer;->hasRemaining()Z

    move-result v2

    if-eqz v2, :cond_4

    return-void

    :cond_4
    add-int/lit8 v1, v1, -0x1

    goto :goto_0

    :cond_5
    return-void
.end method

.method private static a(Landroid/media/AudioTrack;F)V
    .locals 0

    .line 1240
    invoke-virtual {p0, p1}, Landroid/media/AudioTrack;->setVolume(F)I

    return-void
.end method

.method private b(J)J
    .locals 5

    const/4 v0, 0x0

    .line 1042
    :goto_0
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/b/l;->z:Ljava/util/ArrayDeque;

    invoke-virtual {v1}, Ljava/util/ArrayDeque;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_0

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/b/l;->z:Ljava/util/ArrayDeque;

    .line 1043
    invoke-virtual {v1}, Ljava/util/ArrayDeque;->getFirst()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/exoplayer/b/l$d;

    invoke-static {v1}, Lcom/tkay/expressad/exoplayer/b/l$d;->b(Lcom/tkay/expressad/exoplayer/b/l$d;)J

    move-result-wide v1

    cmp-long v1, p1, v1

    if-ltz v1, :cond_0

    .line 1044
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->z:Ljava/util/ArrayDeque;

    invoke-virtual {v0}, Ljava/util/ArrayDeque;->remove()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/exoplayer/b/l$d;

    goto :goto_0

    :cond_0
    if-eqz v0, :cond_1

    .line 1048
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/b/l$d;->a(Lcom/tkay/expressad/exoplayer/b/l$d;)Lcom/tkay/expressad/exoplayer/v;

    move-result-object v1

    iput-object v1, p0, Lcom/tkay/expressad/exoplayer/b/l;->O:Lcom/tkay/expressad/exoplayer/v;

    .line 1049
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/b/l$d;->b(Lcom/tkay/expressad/exoplayer/b/l$d;)J

    move-result-wide v1

    iput-wide v1, p0, Lcom/tkay/expressad/exoplayer/b/l;->Q:J

    .line 1050
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/b/l$d;->c(Lcom/tkay/expressad/exoplayer/b/l$d;)J

    move-result-wide v0

    iget-wide v2, p0, Lcom/tkay/expressad/exoplayer/b/l;->ab:J

    sub-long/2addr v0, v2

    iput-wide v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->P:J

    .line 1053
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->O:Lcom/tkay/expressad/exoplayer/v;

    iget v0, v0, Lcom/tkay/expressad/exoplayer/v;->b:F

    const/high16 v1, 0x3f800000    # 1.0f

    cmpl-float v0, v0, v1

    if-nez v0, :cond_2

    .line 1054
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->P:J

    add-long/2addr p1, v0

    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->Q:J

    sub-long/2addr p1, v0

    return-wide p1

    .line 1057
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->z:Ljava/util/ArrayDeque;

    invoke-virtual {v0}, Ljava/util/ArrayDeque;->isEmpty()Z

    move-result v0

    if-eqz v0, :cond_3

    .line 1058
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->P:J

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/b/l;->r:Lcom/tkay/expressad/exoplayer/b/l$a;

    iget-wide v3, p0, Lcom/tkay/expressad/exoplayer/b/l;->Q:J

    sub-long/2addr p1, v3

    .line 1059
    invoke-interface {v2, p1, p2}, Lcom/tkay/expressad/exoplayer/b/l$a;->a(J)J

    move-result-wide p1

    :goto_1
    add-long/2addr v0, p1

    return-wide v0

    .line 1063
    :cond_3
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->P:J

    iget-wide v2, p0, Lcom/tkay/expressad/exoplayer/b/l;->Q:J

    sub-long/2addr p1, v2

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/b/l;->O:Lcom/tkay/expressad/exoplayer/v;

    iget v2, v2, Lcom/tkay/expressad/exoplayer/v;->b:F

    .line 1064
    invoke-static {p1, p2, v2}, Lcom/tkay/expressad/exoplayer/k/af;->a(JF)J

    move-result-wide p1

    goto :goto_1
.end method

.method static synthetic b(Lcom/tkay/expressad/exoplayer/b/l;)J
    .locals 2

    .line 53
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/b/l;->r()J

    move-result-wide v0

    return-wide v0
.end method

.method private static b(Landroid/media/AudioTrack;F)V
    .locals 0

    .line 1245
    invoke-virtual {p0, p1, p1}, Landroid/media/AudioTrack;->setStereoVolume(FF)I

    return-void
.end method

.method private b(Ljava/nio/ByteBuffer;J)V
    .locals 12

    .line 752
    invoke-virtual {p1}, Ljava/nio/ByteBuffer;->hasRemaining()Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    .line 755
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->ag:Ljava/nio/ByteBuffer;

    const/16 v1, 0x15

    const/4 v2, 0x1

    const/4 v3, 0x0

    if-eqz v0, :cond_2

    if-ne v0, p1, :cond_1

    move v0, v2

    goto :goto_0

    :cond_1
    move v0, v3

    .line 756
    :goto_0
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/a;->a(Z)V

    goto :goto_1

    .line 758
    :cond_2
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/b/l;->ag:Ljava/nio/ByteBuffer;

    .line 759
    sget v0, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    if-ge v0, v1, :cond_5

    .line 760
    invoke-virtual {p1}, Ljava/nio/ByteBuffer;->remaining()I

    move-result v0

    .line 761
    iget-object v4, p0, Lcom/tkay/expressad/exoplayer/b/l;->ah:[B

    if-eqz v4, :cond_3

    array-length v4, v4

    if-ge v4, v0, :cond_4

    .line 762
    :cond_3
    new-array v4, v0, [B

    iput-object v4, p0, Lcom/tkay/expressad/exoplayer/b/l;->ah:[B

    .line 764
    :cond_4
    invoke-virtual {p1}, Ljava/nio/ByteBuffer;->position()I

    move-result v4

    .line 765
    iget-object v5, p0, Lcom/tkay/expressad/exoplayer/b/l;->ah:[B

    invoke-virtual {p1, v5, v3, v0}, Ljava/nio/ByteBuffer;->get([BII)Ljava/nio/ByteBuffer;

    .line 766
    invoke-virtual {p1, v4}, Ljava/nio/ByteBuffer;->position(I)Ljava/nio/Buffer;

    .line 767
    iput v3, p0, Lcom/tkay/expressad/exoplayer/b/l;->ai:I

    .line 770
    :cond_5
    :goto_1
    invoke-virtual {p1}, Ljava/nio/ByteBuffer;->remaining()I

    move-result v0

    .line 772
    sget v4, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    if-ge v4, v1, :cond_6

    .line 774
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/b/l;->y:Lcom/tkay/expressad/exoplayer/b/j;

    iget-wide v1, p0, Lcom/tkay/expressad/exoplayer/b/l;->X:J

    invoke-virtual {p2, v1, v2}, Lcom/tkay/expressad/exoplayer/b/j;->b(J)I

    move-result p2

    if-lez p2, :cond_9

    .line 776
    invoke-static {v0, p2}, Ljava/lang/Math;->min(II)I

    move-result p2

    .line 777
    iget-object p3, p0, Lcom/tkay/expressad/exoplayer/b/l;->C:Landroid/media/AudioTrack;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/b/l;->ah:[B

    iget v2, p0, Lcom/tkay/expressad/exoplayer/b/l;->ai:I

    invoke-virtual {p3, v1, v2, p2}, Landroid/media/AudioTrack;->write([BII)I

    move-result v3

    if-lez v3, :cond_9

    .line 779
    iget p2, p0, Lcom/tkay/expressad/exoplayer/b/l;->ai:I

    add-int/2addr p2, v3

    iput p2, p0, Lcom/tkay/expressad/exoplayer/b/l;->ai:I

    .line 780
    invoke-virtual {p1}, Ljava/nio/ByteBuffer;->position()I

    move-result p2

    add-int/2addr p2, v3

    invoke-virtual {p1, p2}, Ljava/nio/ByteBuffer;->position(I)Ljava/nio/Buffer;

    goto :goto_3

    .line 783
    :cond_6
    iget-boolean v1, p0, Lcom/tkay/expressad/exoplayer/b/l;->an:Z

    if-eqz v1, :cond_8

    const-wide v4, -0x7fffffffffffffffL    # -4.9E-324

    cmp-long v1, p2, v4

    if-eqz v1, :cond_7

    goto :goto_2

    :cond_7
    move v2, v3

    .line 784
    :goto_2
    invoke-static {v2}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    .line 785
    iget-object v7, p0, Lcom/tkay/expressad/exoplayer/b/l;->C:Landroid/media/AudioTrack;

    move-object v6, p0

    move-object v8, p1

    move v9, v0

    move-wide v10, p2

    invoke-direct/range {v6 .. v11}, Lcom/tkay/expressad/exoplayer/b/l;->a(Landroid/media/AudioTrack;Ljava/nio/ByteBuffer;IJ)I

    move-result v3

    goto :goto_3

    .line 788
    :cond_8
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/b/l;->C:Landroid/media/AudioTrack;

    .line 4196
    invoke-virtual {p2, p1, v0, v2}, Landroid/media/AudioTrack;->write(Ljava/nio/ByteBuffer;II)I

    move-result v3

    .line 791
    :cond_9
    :goto_3
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide p1

    iput-wide p1, p0, Lcom/tkay/expressad/exoplayer/b/l;->ao:J

    if-ltz v3, :cond_d

    .line 797
    iget-boolean p1, p0, Lcom/tkay/expressad/exoplayer/b/l;->D:Z

    if-eqz p1, :cond_a

    .line 798
    iget-wide p1, p0, Lcom/tkay/expressad/exoplayer/b/l;->X:J

    int-to-long v1, v3

    add-long/2addr p1, v1

    iput-wide p1, p0, Lcom/tkay/expressad/exoplayer/b/l;->X:J

    :cond_a
    if-ne v3, v0, :cond_c

    .line 801
    iget-boolean p1, p0, Lcom/tkay/expressad/exoplayer/b/l;->D:Z

    if-nez p1, :cond_b

    .line 802
    iget-wide p1, p0, Lcom/tkay/expressad/exoplayer/b/l;->Y:J

    iget p3, p0, Lcom/tkay/expressad/exoplayer/b/l;->Z:I

    int-to-long v0, p3

    add-long/2addr p1, v0

    iput-wide p1, p0, Lcom/tkay/expressad/exoplayer/b/l;->Y:J

    :cond_b
    const/4 p1, 0x0

    .line 804
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/b/l;->ag:Ljava/nio/ByteBuffer;

    :cond_c
    return-void

    .line 794
    :cond_d
    new-instance p1, Lcom/tkay/expressad/exoplayer/b/h$d;

    invoke-direct {p1, v3}, Lcom/tkay/expressad/exoplayer/b/h$d;-><init>(I)V

    throw p1
.end method

.method private c(J)J
    .locals 2

    .line 1069
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->r:Lcom/tkay/expressad/exoplayer/b/l$a;

    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/b/l$a;->b()J

    move-result-wide v0

    invoke-direct {p0, v0, v1}, Lcom/tkay/expressad/exoplayer/b/l;->e(J)J

    move-result-wide v0

    add-long/2addr p1, v0

    return-wide p1
.end method

.method static synthetic c(Lcom/tkay/expressad/exoplayer/b/l;)J
    .locals 2

    .line 53
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/b/l;->s()J

    move-result-wide v0

    return-wide v0
.end method

.method private d(J)J
    .locals 2

    const-wide/32 v0, 0xf4240

    mul-long/2addr p1, v0

    .line 1077
    iget v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->F:I

    int-to-long v0, v0

    div-long/2addr p1, v0

    return-wide p1
.end method

.method private static d(I)Landroid/media/AudioTrack;
    .locals 9

    .line 1166
    new-instance v8, Landroid/media/AudioTrack;

    const/4 v1, 0x3

    const/16 v2, 0xfa0

    const/4 v3, 0x4

    const/4 v4, 0x2

    const/4 v5, 0x2

    const/4 v6, 0x0

    move-object v0, v8

    move v7, p0

    invoke-direct/range {v0 .. v7}, Landroid/media/AudioTrack;-><init>(IIIIIII)V

    return-object v8
.end method

.method static synthetic d(Lcom/tkay/expressad/exoplayer/b/l;)Lcom/tkay/expressad/exoplayer/b/h$c;
    .locals 0

    .line 53
    iget-object p0, p0, Lcom/tkay/expressad/exoplayer/b/l;->A:Lcom/tkay/expressad/exoplayer/b/h$c;

    return-object p0
.end method

.method private e(J)J
    .locals 2

    const-wide/32 v0, 0xf4240

    mul-long/2addr p1, v0

    .line 1081
    iget v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->G:I

    int-to-long v0, v0

    div-long/2addr p1, v0

    return-wide p1
.end method

.method static synthetic e(Lcom/tkay/expressad/exoplayer/b/l;)J
    .locals 2

    .line 53
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->ao:J

    return-wide v0
.end method

.method private f(J)J
    .locals 2

    .line 1085
    iget v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->G:I

    int-to-long v0, v0

    mul-long/2addr p1, v0

    const-wide/32 v0, 0xf4240

    div-long/2addr p1, v0

    return-wide p1
.end method

.method private k()V
    .locals 6

    .line 534
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 535
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/b/l;->v()[Lcom/tkay/expressad/exoplayer/b/f;

    move-result-object v1

    array-length v2, v1

    const/4 v3, 0x0

    :goto_0
    if-ge v3, v2, :cond_1

    aget-object v4, v1, v3

    .line 536
    invoke-interface {v4}, Lcom/tkay/expressad/exoplayer/b/f;->a()Z

    move-result v5

    if-eqz v5, :cond_0

    .line 537
    invoke-virtual {v0, v4}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_1

    .line 539
    :cond_0
    invoke-interface {v4}, Lcom/tkay/expressad/exoplayer/b/f;->h()V

    :goto_1
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 542
    :cond_1
    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v1

    .line 543
    new-array v2, v1, [Lcom/tkay/expressad/exoplayer/b/f;

    invoke-virtual {v0, v2}, Ljava/util/ArrayList;->toArray([Ljava/lang/Object;)[Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/tkay/expressad/exoplayer/b/f;

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->ad:[Lcom/tkay/expressad/exoplayer/b/f;

    .line 544
    new-array v0, v1, [Ljava/nio/ByteBuffer;

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->ae:[Ljava/nio/ByteBuffer;

    .line 545
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/b/l;->l()V

    return-void
.end method

.method private l()V
    .locals 3

    const/4 v0, 0x0

    .line 549
    :goto_0
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/b/l;->ad:[Lcom/tkay/expressad/exoplayer/b/f;

    array-length v2, v1

    if-ge v0, v2, :cond_0

    .line 550
    aget-object v1, v1, v0

    .line 551
    invoke-interface {v1}, Lcom/tkay/expressad/exoplayer/b/f;->h()V

    .line 552
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/b/l;->ae:[Ljava/nio/ByteBuffer;

    invoke-interface {v1}, Lcom/tkay/expressad/exoplayer/b/f;->f()Ljava/nio/ByteBuffer;

    move-result-object v1

    aput-object v1, v2, v0

    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_0
    return-void
.end method

.method private m()V
    .locals 10

    .line 562
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->x:Landroid/os/ConditionVariable;

    invoke-virtual {v0}, Landroid/os/ConditionVariable;->block()V

    .line 564
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/b/l;->t()Landroid/media/AudioTrack;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->C:Landroid/media/AudioTrack;

    .line 565
    invoke-virtual {v0}, Landroid/media/AudioTrack;->getAudioSessionId()I

    move-result v0

    .line 566
    sget-boolean v1, Lcom/tkay/expressad/exoplayer/b/l;->b:Z

    if-eqz v1, :cond_1

    .line 567
    sget v1, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 v2, 0x15

    if-ge v1, v2, :cond_1

    .line 570
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/b/l;->B:Landroid/media/AudioTrack;

    if-eqz v1, :cond_0

    .line 571
    invoke-virtual {v1}, Landroid/media/AudioTrack;->getAudioSessionId()I

    move-result v1

    if-eq v0, v1, :cond_0

    .line 572
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/b/l;->p()V

    .line 574
    :cond_0
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/b/l;->B:Landroid/media/AudioTrack;

    if-nez v1, :cond_1

    .line 2166
    new-instance v9, Landroid/media/AudioTrack;

    const/4 v2, 0x3

    const/16 v3, 0xfa0

    const/4 v4, 0x4

    const/4 v5, 0x2

    const/4 v6, 0x2

    const/4 v7, 0x0

    move-object v1, v9

    move v8, v0

    invoke-direct/range {v1 .. v8}, Landroid/media/AudioTrack;-><init>(IIIIIII)V

    .line 575
    iput-object v9, p0, Lcom/tkay/expressad/exoplayer/b/l;->B:Landroid/media/AudioTrack;

    .line 579
    :cond_1
    iget v1, p0, Lcom/tkay/expressad/exoplayer/b/l;->am:I

    if-eq v1, v0, :cond_2

    .line 580
    iput v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->am:I

    .line 581
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/b/l;->A:Lcom/tkay/expressad/exoplayer/b/h$c;

    if-eqz v1, :cond_2

    .line 582
    invoke-interface {v1, v0}, Lcom/tkay/expressad/exoplayer/b/h$c;->a(I)V

    .line 587
    :cond_2
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->L:Z

    if-eqz v0, :cond_3

    .line 588
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->r:Lcom/tkay/expressad/exoplayer/b/l$a;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/b/l;->O:Lcom/tkay/expressad/exoplayer/v;

    invoke-interface {v0, v1}, Lcom/tkay/expressad/exoplayer/b/l$a;->a(Lcom/tkay/expressad/exoplayer/v;)Lcom/tkay/expressad/exoplayer/v;

    move-result-object v0

    goto :goto_0

    .line 589
    :cond_3
    sget-object v0, Lcom/tkay/expressad/exoplayer/v;->a:Lcom/tkay/expressad/exoplayer/v;

    :goto_0
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->O:Lcom/tkay/expressad/exoplayer/v;

    .line 590
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/b/l;->k()V

    .line 592
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->y:Lcom/tkay/expressad/exoplayer/b/j;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/b/l;->C:Landroid/media/AudioTrack;

    iget v2, p0, Lcom/tkay/expressad/exoplayer/b/l;->I:I

    iget v3, p0, Lcom/tkay/expressad/exoplayer/b/l;->W:I

    iget v4, p0, Lcom/tkay/expressad/exoplayer/b/l;->M:I

    invoke-virtual {v0, v1, v2, v3, v4}, Lcom/tkay/expressad/exoplayer/b/j;->a(Landroid/media/AudioTrack;III)V

    .line 594
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/b/l;->o()V

    return-void
.end method

.method private n()Z
    .locals 9

    .line 825
    iget v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->aj:I

    const/4 v1, -0x1

    const/4 v2, 0x1

    const/4 v3, 0x0

    if-ne v0, v1, :cond_1

    .line 826
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->K:Z

    if-eqz v0, :cond_0

    move v0, v3

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->ad:[Lcom/tkay/expressad/exoplayer/b/f;

    array-length v0, v0

    :goto_0
    iput v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->aj:I

    :goto_1
    move v0, v2

    goto :goto_2

    :cond_1
    move v0, v3

    .line 829
    :goto_2
    iget v4, p0, Lcom/tkay/expressad/exoplayer/b/l;->aj:I

    iget-object v5, p0, Lcom/tkay/expressad/exoplayer/b/l;->ad:[Lcom/tkay/expressad/exoplayer/b/f;

    array-length v6, v5

    const-wide v7, -0x7fffffffffffffffL    # -4.9E-324

    if-ge v4, v6, :cond_4

    .line 830
    aget-object v4, v5, v4

    if-eqz v0, :cond_2

    .line 832
    invoke-interface {v4}, Lcom/tkay/expressad/exoplayer/b/f;->e()V

    .line 834
    :cond_2
    invoke-direct {p0, v7, v8}, Lcom/tkay/expressad/exoplayer/b/l;->a(J)V

    .line 835
    invoke-interface {v4}, Lcom/tkay/expressad/exoplayer/b/f;->g()Z

    move-result v0

    if-nez v0, :cond_3

    return v3

    .line 839
    :cond_3
    iget v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->aj:I

    add-int/2addr v0, v2

    iput v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->aj:I

    goto :goto_1

    .line 843
    :cond_4
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->ag:Ljava/nio/ByteBuffer;

    if-eqz v0, :cond_5

    .line 844
    invoke-direct {p0, v0, v7, v8}, Lcom/tkay/expressad/exoplayer/b/l;->b(Ljava/nio/ByteBuffer;J)V

    .line 845
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->ag:Ljava/nio/ByteBuffer;

    if-eqz v0, :cond_5

    return v3

    .line 849
    :cond_5
    iput v1, p0, Lcom/tkay/expressad/exoplayer/b/l;->aj:I

    return v2
.end method

.method private o()V
    .locals 2

    .line 943
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/b/l;->q()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 945
    sget v0, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 v1, 0x15

    if-lt v0, v1, :cond_0

    .line 946
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->C:Landroid/media/AudioTrack;

    iget v1, p0, Lcom/tkay/expressad/exoplayer/b/l;->ac:F

    .line 4240
    invoke-virtual {v0, v1}, Landroid/media/AudioTrack;->setVolume(F)I

    return-void

    .line 948
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->C:Landroid/media/AudioTrack;

    iget v1, p0, Lcom/tkay/expressad/exoplayer/b/l;->ac:F

    .line 4245
    invoke-virtual {v0, v1, v1}, Landroid/media/AudioTrack;->setStereoVolume(FF)I

    :cond_1
    return-void
.end method

.method private p()V
    .locals 2

    .line 1025
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->B:Landroid/media/AudioTrack;

    if-nez v0, :cond_0

    return-void

    :cond_0
    const/4 v1, 0x0

    .line 1031
    iput-object v1, p0, Lcom/tkay/expressad/exoplayer/b/l;->B:Landroid/media/AudioTrack;

    .line 1032
    new-instance v1, Lcom/tkay/expressad/exoplayer/b/l$2;

    invoke-direct {v1, p0, v0}, Lcom/tkay/expressad/exoplayer/b/l$2;-><init>(Lcom/tkay/expressad/exoplayer/b/l;Landroid/media/AudioTrack;)V

    .line 1037
    invoke-virtual {v1}, Lcom/tkay/expressad/exoplayer/b/l$2;->start()V

    return-void
.end method

.method private q()Z
    .locals 1

    .line 1073
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->C:Landroid/media/AudioTrack;

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method private r()J
    .locals 4

    .line 1089
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->D:Z

    if-eqz v0, :cond_0

    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->U:J

    iget v2, p0, Lcom/tkay/expressad/exoplayer/b/l;->T:I

    int-to-long v2, v2

    div-long/2addr v0, v2

    return-wide v0

    :cond_0
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->V:J

    return-wide v0
.end method

.method private s()J
    .locals 4

    .line 1093
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->D:Z

    if-eqz v0, :cond_0

    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->X:J

    iget v2, p0, Lcom/tkay/expressad/exoplayer/b/l;->W:I

    int-to-long v2, v2

    div-long/2addr v0, v2

    return-wide v0

    :cond_0
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->Y:J

    return-wide v0
.end method

.method private t()Landroid/media/AudioTrack;
    .locals 10

    .line 1098
    sget v0, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/4 v1, 0x1

    const/16 v2, 0x15

    if-lt v0, v2, :cond_2

    .line 5141
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->an:Z

    if-eqz v0, :cond_0

    .line 5142
    new-instance v0, Landroid/media/AudioAttributes$Builder;

    invoke-direct {v0}, Landroid/media/AudioAttributes$Builder;-><init>()V

    const/4 v2, 0x3

    .line 5143
    invoke-virtual {v0, v2}, Landroid/media/AudioAttributes$Builder;->setContentType(I)Landroid/media/AudioAttributes$Builder;

    move-result-object v0

    const/16 v2, 0x10

    .line 5144
    invoke-virtual {v0, v2}, Landroid/media/AudioAttributes$Builder;->setFlags(I)Landroid/media/AudioAttributes$Builder;

    move-result-object v0

    .line 5145
    invoke-virtual {v0, v1}, Landroid/media/AudioAttributes$Builder;->setUsage(I)Landroid/media/AudioAttributes$Builder;

    move-result-object v0

    .line 5146
    invoke-virtual {v0}, Landroid/media/AudioAttributes$Builder;->build()Landroid/media/AudioAttributes;

    move-result-object v0

    goto :goto_0

    .line 5148
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->J:Lcom/tkay/expressad/exoplayer/b/b;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/b/b;->a()Landroid/media/AudioAttributes;

    move-result-object v0

    :goto_0
    move-object v3, v0

    .line 5150
    new-instance v0, Landroid/media/AudioFormat$Builder;

    invoke-direct {v0}, Landroid/media/AudioFormat$Builder;-><init>()V

    iget v2, p0, Lcom/tkay/expressad/exoplayer/b/l;->H:I

    .line 5152
    invoke-virtual {v0, v2}, Landroid/media/AudioFormat$Builder;->setChannelMask(I)Landroid/media/AudioFormat$Builder;

    move-result-object v0

    iget v2, p0, Lcom/tkay/expressad/exoplayer/b/l;->I:I

    .line 5153
    invoke-virtual {v0, v2}, Landroid/media/AudioFormat$Builder;->setEncoding(I)Landroid/media/AudioFormat$Builder;

    move-result-object v0

    iget v2, p0, Lcom/tkay/expressad/exoplayer/b/l;->G:I

    .line 5154
    invoke-virtual {v0, v2}, Landroid/media/AudioFormat$Builder;->setSampleRate(I)Landroid/media/AudioFormat$Builder;

    move-result-object v0

    .line 5155
    invoke-virtual {v0}, Landroid/media/AudioFormat$Builder;->build()Landroid/media/AudioFormat;

    move-result-object v4

    .line 5156
    iget v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->am:I

    if-eqz v0, :cond_1

    goto :goto_1

    :cond_1
    const/4 v0, 0x0

    :goto_1
    move v7, v0

    .line 5158
    new-instance v0, Landroid/media/AudioTrack;

    iget v5, p0, Lcom/tkay/expressad/exoplayer/b/l;->M:I

    const/4 v6, 0x1

    move-object v2, v0

    invoke-direct/range {v2 .. v7}, Landroid/media/AudioTrack;-><init>(Landroid/media/AudioAttributes;Landroid/media/AudioFormat;III)V

    goto :goto_2

    .line 1101
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->J:Lcom/tkay/expressad/exoplayer/b/b;

    iget v0, v0, Lcom/tkay/expressad/exoplayer/b/b;->d:I

    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/af;->f(I)I

    move-result v3

    .line 1102
    iget v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->am:I

    if-nez v0, :cond_3

    .line 1103
    new-instance v0, Landroid/media/AudioTrack;

    iget v4, p0, Lcom/tkay/expressad/exoplayer/b/l;->G:I

    iget v5, p0, Lcom/tkay/expressad/exoplayer/b/l;->H:I

    iget v6, p0, Lcom/tkay/expressad/exoplayer/b/l;->I:I

    iget v7, p0, Lcom/tkay/expressad/exoplayer/b/l;->M:I

    const/4 v8, 0x1

    move-object v2, v0

    invoke-direct/range {v2 .. v8}, Landroid/media/AudioTrack;-><init>(IIIIII)V

    goto :goto_2

    .line 1113
    :cond_3
    new-instance v0, Landroid/media/AudioTrack;

    iget v4, p0, Lcom/tkay/expressad/exoplayer/b/l;->G:I

    iget v5, p0, Lcom/tkay/expressad/exoplayer/b/l;->H:I

    iget v6, p0, Lcom/tkay/expressad/exoplayer/b/l;->I:I

    iget v7, p0, Lcom/tkay/expressad/exoplayer/b/l;->M:I

    const/4 v8, 0x1

    iget v9, p0, Lcom/tkay/expressad/exoplayer/b/l;->am:I

    move-object v2, v0

    invoke-direct/range {v2 .. v9}, Landroid/media/AudioTrack;-><init>(IIIIIII)V

    .line 1125
    :goto_2
    invoke-virtual {v0}, Landroid/media/AudioTrack;->getState()I

    move-result v2

    if-ne v2, v1, :cond_4

    return-object v0

    .line 1128
    :cond_4
    :try_start_0
    invoke-virtual {v0}, Landroid/media/AudioTrack;->release()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 1133
    :catch_0
    new-instance v0, Lcom/tkay/expressad/exoplayer/b/h$b;

    iget v1, p0, Lcom/tkay/expressad/exoplayer/b/l;->G:I

    iget v3, p0, Lcom/tkay/expressad/exoplayer/b/l;->H:I

    iget v4, p0, Lcom/tkay/expressad/exoplayer/b/l;->M:I

    invoke-direct {v0, v2, v1, v3, v4}, Lcom/tkay/expressad/exoplayer/b/h$b;-><init>(IIII)V

    throw v0
.end method

.method private u()Landroid/media/AudioTrack;
    .locals 7

    .line 1141
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->an:Z

    if-eqz v0, :cond_0

    .line 1142
    new-instance v0, Landroid/media/AudioAttributes$Builder;

    invoke-direct {v0}, Landroid/media/AudioAttributes$Builder;-><init>()V

    const/4 v1, 0x3

    .line 1143
    invoke-virtual {v0, v1}, Landroid/media/AudioAttributes$Builder;->setContentType(I)Landroid/media/AudioAttributes$Builder;

    move-result-object v0

    const/16 v1, 0x10

    .line 1144
    invoke-virtual {v0, v1}, Landroid/media/AudioAttributes$Builder;->setFlags(I)Landroid/media/AudioAttributes$Builder;

    move-result-object v0

    const/4 v1, 0x1

    .line 1145
    invoke-virtual {v0, v1}, Landroid/media/AudioAttributes$Builder;->setUsage(I)Landroid/media/AudioAttributes$Builder;

    move-result-object v0

    .line 1146
    invoke-virtual {v0}, Landroid/media/AudioAttributes$Builder;->build()Landroid/media/AudioAttributes;

    move-result-object v0

    goto :goto_0

    .line 1148
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->J:Lcom/tkay/expressad/exoplayer/b/b;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/b/b;->a()Landroid/media/AudioAttributes;

    move-result-object v0

    :goto_0
    move-object v2, v0

    .line 1150
    new-instance v0, Landroid/media/AudioFormat$Builder;

    invoke-direct {v0}, Landroid/media/AudioFormat$Builder;-><init>()V

    iget v1, p0, Lcom/tkay/expressad/exoplayer/b/l;->H:I

    .line 1152
    invoke-virtual {v0, v1}, Landroid/media/AudioFormat$Builder;->setChannelMask(I)Landroid/media/AudioFormat$Builder;

    move-result-object v0

    iget v1, p0, Lcom/tkay/expressad/exoplayer/b/l;->I:I

    .line 1153
    invoke-virtual {v0, v1}, Landroid/media/AudioFormat$Builder;->setEncoding(I)Landroid/media/AudioFormat$Builder;

    move-result-object v0

    iget v1, p0, Lcom/tkay/expressad/exoplayer/b/l;->G:I

    .line 1154
    invoke-virtual {v0, v1}, Landroid/media/AudioFormat$Builder;->setSampleRate(I)Landroid/media/AudioFormat$Builder;

    move-result-object v0

    .line 1155
    invoke-virtual {v0}, Landroid/media/AudioFormat$Builder;->build()Landroid/media/AudioFormat;

    move-result-object v3

    .line 1156
    iget v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->am:I

    if-eqz v0, :cond_1

    goto :goto_1

    :cond_1
    const/4 v0, 0x0

    :goto_1
    move v6, v0

    .line 1158
    new-instance v0, Landroid/media/AudioTrack;

    iget v4, p0, Lcom/tkay/expressad/exoplayer/b/l;->M:I

    const/4 v5, 0x1

    move-object v1, v0

    invoke-direct/range {v1 .. v6}, Landroid/media/AudioTrack;-><init>(Landroid/media/AudioAttributes;Landroid/media/AudioFormat;III)V

    return-object v0
.end method

.method private v()[Lcom/tkay/expressad/exoplayer/b/f;
    .locals 1

    .line 1171
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->E:Z

    if-eqz v0, :cond_0

    .line 1172
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->w:[Lcom/tkay/expressad/exoplayer/b/f;

    return-object v0

    .line 1173
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->v:[Lcom/tkay/expressad/exoplayer/b/f;

    return-object v0
.end method


# virtual methods
.method public final a(Z)J
    .locals 8

    .line 389
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/b/l;->q()Z

    move-result v0

    if-eqz v0, :cond_5

    iget v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->aa:I

    if-nez v0, :cond_0

    goto/16 :goto_3

    .line 392
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->y:Lcom/tkay/expressad/exoplayer/b/j;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/exoplayer/b/j;->a(Z)J

    move-result-wide v0

    .line 393
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/b/l;->s()J

    move-result-wide v2

    invoke-direct {p0, v2, v3}, Lcom/tkay/expressad/exoplayer/b/l;->e(J)J

    move-result-wide v2

    invoke-static {v0, v1, v2, v3}, Ljava/lang/Math;->min(JJ)J

    move-result-wide v0

    .line 394
    iget-wide v2, p0, Lcom/tkay/expressad/exoplayer/b/l;->ab:J

    const/4 p1, 0x0

    .line 2042
    :goto_0
    iget-object v4, p0, Lcom/tkay/expressad/exoplayer/b/l;->z:Ljava/util/ArrayDeque;

    invoke-virtual {v4}, Ljava/util/ArrayDeque;->isEmpty()Z

    move-result v4

    if-nez v4, :cond_1

    iget-object v4, p0, Lcom/tkay/expressad/exoplayer/b/l;->z:Ljava/util/ArrayDeque;

    .line 2043
    invoke-virtual {v4}, Ljava/util/ArrayDeque;->getFirst()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/tkay/expressad/exoplayer/b/l$d;

    invoke-static {v4}, Lcom/tkay/expressad/exoplayer/b/l$d;->b(Lcom/tkay/expressad/exoplayer/b/l$d;)J

    move-result-wide v4

    cmp-long v4, v0, v4

    if-ltz v4, :cond_1

    .line 2044
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/b/l;->z:Ljava/util/ArrayDeque;

    invoke-virtual {p1}, Ljava/util/ArrayDeque;->remove()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/exoplayer/b/l$d;

    goto :goto_0

    :cond_1
    if-eqz p1, :cond_2

    .line 2048
    invoke-static {p1}, Lcom/tkay/expressad/exoplayer/b/l$d;->a(Lcom/tkay/expressad/exoplayer/b/l$d;)Lcom/tkay/expressad/exoplayer/v;

    move-result-object v4

    iput-object v4, p0, Lcom/tkay/expressad/exoplayer/b/l;->O:Lcom/tkay/expressad/exoplayer/v;

    .line 2049
    invoke-static {p1}, Lcom/tkay/expressad/exoplayer/b/l$d;->b(Lcom/tkay/expressad/exoplayer/b/l$d;)J

    move-result-wide v4

    iput-wide v4, p0, Lcom/tkay/expressad/exoplayer/b/l;->Q:J

    .line 2050
    invoke-static {p1}, Lcom/tkay/expressad/exoplayer/b/l$d;->c(Lcom/tkay/expressad/exoplayer/b/l$d;)J

    move-result-wide v4

    iget-wide v6, p0, Lcom/tkay/expressad/exoplayer/b/l;->ab:J

    sub-long/2addr v4, v6

    iput-wide v4, p0, Lcom/tkay/expressad/exoplayer/b/l;->P:J

    .line 2053
    :cond_2
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/b/l;->O:Lcom/tkay/expressad/exoplayer/v;

    iget p1, p1, Lcom/tkay/expressad/exoplayer/v;->b:F

    const/high16 v4, 0x3f800000    # 1.0f

    cmpl-float p1, p1, v4

    if-nez p1, :cond_3

    .line 2054
    iget-wide v4, p0, Lcom/tkay/expressad/exoplayer/b/l;->P:J

    add-long/2addr v0, v4

    iget-wide v4, p0, Lcom/tkay/expressad/exoplayer/b/l;->Q:J

    sub-long/2addr v0, v4

    goto :goto_2

    .line 2057
    :cond_3
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/b/l;->z:Ljava/util/ArrayDeque;

    invoke-virtual {p1}, Ljava/util/ArrayDeque;->isEmpty()Z

    move-result p1

    if-eqz p1, :cond_4

    .line 2058
    iget-wide v4, p0, Lcom/tkay/expressad/exoplayer/b/l;->P:J

    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/b/l;->r:Lcom/tkay/expressad/exoplayer/b/l$a;

    iget-wide v6, p0, Lcom/tkay/expressad/exoplayer/b/l;->Q:J

    sub-long/2addr v0, v6

    .line 2059
    invoke-interface {p1, v0, v1}, Lcom/tkay/expressad/exoplayer/b/l$a;->a(J)J

    move-result-wide v0

    goto :goto_1

    .line 2063
    :cond_4
    iget-wide v4, p0, Lcom/tkay/expressad/exoplayer/b/l;->P:J

    iget-wide v6, p0, Lcom/tkay/expressad/exoplayer/b/l;->Q:J

    sub-long/2addr v0, v6

    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/b/l;->O:Lcom/tkay/expressad/exoplayer/v;

    iget p1, p1, Lcom/tkay/expressad/exoplayer/v;->b:F

    .line 2064
    invoke-static {v0, v1, p1}, Lcom/tkay/expressad/exoplayer/k/af;->a(JF)J

    move-result-wide v0

    :goto_1
    add-long/2addr v0, v4

    .line 2069
    :goto_2
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/b/l;->r:Lcom/tkay/expressad/exoplayer/b/l$a;

    invoke-interface {p1}, Lcom/tkay/expressad/exoplayer/b/l$a;->b()J

    move-result-wide v4

    invoke-direct {p0, v4, v5}, Lcom/tkay/expressad/exoplayer/b/l;->e(J)J

    move-result-wide v4

    add-long/2addr v0, v4

    add-long/2addr v2, v0

    return-wide v2

    :cond_5
    :goto_3
    const-wide/high16 v0, -0x8000000000000000L

    return-wide v0
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/v;)Lcom/tkay/expressad/exoplayer/v;
    .locals 1

    .line 865
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/b/l;->q()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->L:Z

    if-nez v0, :cond_0

    .line 866
    sget-object p1, Lcom/tkay/expressad/exoplayer/v;->a:Lcom/tkay/expressad/exoplayer/v;

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/b/l;->O:Lcom/tkay/expressad/exoplayer/v;

    return-object p1

    .line 870
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->N:Lcom/tkay/expressad/exoplayer/v;

    if-eqz v0, :cond_1

    goto :goto_0

    .line 872
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->z:Ljava/util/ArrayDeque;

    invoke-virtual {v0}, Ljava/util/ArrayDeque;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_2

    .line 873
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->z:Ljava/util/ArrayDeque;

    invoke-virtual {v0}, Ljava/util/ArrayDeque;->getLast()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/exoplayer/b/l$d;

    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/b/l$d;->a(Lcom/tkay/expressad/exoplayer/b/l$d;)Lcom/tkay/expressad/exoplayer/v;

    move-result-object v0

    goto :goto_0

    .line 874
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->O:Lcom/tkay/expressad/exoplayer/v;

    .line 875
    :goto_0
    invoke-virtual {p1, v0}, Lcom/tkay/expressad/exoplayer/v;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_4

    .line 876
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/b/l;->q()Z

    move-result v0

    if-eqz v0, :cond_3

    .line 879
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/b/l;->N:Lcom/tkay/expressad/exoplayer/v;

    goto :goto_1

    .line 882
    :cond_3
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->r:Lcom/tkay/expressad/exoplayer/b/l$a;

    invoke-interface {v0, p1}, Lcom/tkay/expressad/exoplayer/b/l$a;->a(Lcom/tkay/expressad/exoplayer/v;)Lcom/tkay/expressad/exoplayer/v;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/b/l;->O:Lcom/tkay/expressad/exoplayer/v;

    .line 885
    :cond_4
    :goto_1
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/b/l;->O:Lcom/tkay/expressad/exoplayer/v;

    return-object p1
.end method

.method public final a()V
    .locals 1

    const/4 v0, 0x1

    .line 599
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->al:Z

    .line 600
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/b/l;->q()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 601
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->y:Lcom/tkay/expressad/exoplayer/b/j;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/b/j;->a()V

    .line 602
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->C:Landroid/media/AudioTrack;

    invoke-virtual {v0}, Landroid/media/AudioTrack;->play()V

    :cond_0
    return-void
.end method

.method public final a(F)V
    .locals 1

    .line 936
    iget v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->ac:F

    cmpl-float v0, v0, p1

    if-eqz v0, :cond_0

    .line 937
    iput p1, p0, Lcom/tkay/expressad/exoplayer/b/l;->ac:F

    .line 938
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/b/l;->o()V

    :cond_0
    return-void
.end method

.method public final a(III[III)V
    .locals 9

    .line 408
    iput p3, p0, Lcom/tkay/expressad/exoplayer/b/l;->F:I

    .line 411
    invoke-static {p1}, Lcom/tkay/expressad/exoplayer/k/af;->b(I)Z

    move-result v0

    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->D:Z

    .line 412
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->s:Z

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-eqz v0, :cond_0

    const/high16 v0, 0x40000000    # 2.0f

    .line 414
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/b/l;->a(I)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 415
    invoke-static {p1}, Lcom/tkay/expressad/exoplayer/k/af;->c(I)Z

    move-result v0

    if-eqz v0, :cond_0

    move v0, v1

    goto :goto_0

    :cond_0
    move v0, v2

    :goto_0
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->E:Z

    .line 416
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->D:Z

    if-eqz v0, :cond_1

    .line 417
    invoke-static {p1, p2}, Lcom/tkay/expressad/exoplayer/k/af;->b(II)I

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->T:I

    .line 420
    :cond_1
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->D:Z

    const/4 v3, 0x4

    if-eqz v0, :cond_2

    if-eq p1, v3, :cond_2

    move v0, v1

    goto :goto_1

    :cond_2
    move v0, v2

    :goto_1
    if-eqz v0, :cond_3

    .line 421
    iget-boolean v4, p0, Lcom/tkay/expressad/exoplayer/b/l;->E:Z

    if-nez v4, :cond_3

    move v4, v1

    goto :goto_2

    :cond_3
    move v4, v2

    :goto_2
    iput-boolean v4, p0, Lcom/tkay/expressad/exoplayer/b/l;->L:Z

    if-eqz v0, :cond_5

    .line 423
    iget-object v4, p0, Lcom/tkay/expressad/exoplayer/b/l;->u:Lcom/tkay/expressad/exoplayer/b/u;

    invoke-virtual {v4, p5, p6}, Lcom/tkay/expressad/exoplayer/b/u;->a(II)V

    .line 424
    iget-object p5, p0, Lcom/tkay/expressad/exoplayer/b/l;->t:Lcom/tkay/expressad/exoplayer/b/k;

    invoke-virtual {p5, p4}, Lcom/tkay/expressad/exoplayer/b/k;->a([I)V

    .line 425
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/b/l;->v()[Lcom/tkay/expressad/exoplayer/b/f;

    move-result-object p4

    array-length p5, p4

    move p6, v2

    move v4, p6

    :goto_3
    if-ge p6, p5, :cond_6

    aget-object v5, p4, p6

    .line 427
    :try_start_0
    invoke-interface {v5, p3, p2, p1}, Lcom/tkay/expressad/exoplayer/b/f;->a(III)Z

    move-result v6
    :try_end_0
    .catch Lcom/tkay/expressad/exoplayer/b/f$a; {:try_start_0 .. :try_end_0} :catch_0

    or-int/2addr v4, v6

    .line 431
    invoke-interface {v5}, Lcom/tkay/expressad/exoplayer/b/f;->a()Z

    move-result v6

    if-eqz v6, :cond_4

    .line 432
    invoke-interface {v5}, Lcom/tkay/expressad/exoplayer/b/f;->b()I

    move-result p2

    .line 433
    invoke-interface {v5}, Lcom/tkay/expressad/exoplayer/b/f;->d()I

    move-result p1

    .line 434
    invoke-interface {v5}, Lcom/tkay/expressad/exoplayer/b/f;->c()I

    move-result p3

    move v8, p3

    move p3, p1

    move p1, v8

    :cond_4
    add-int/lit8 p6, p6, 0x1

    goto :goto_3

    :catch_0
    move-exception p1

    .line 429
    new-instance p2, Lcom/tkay/expressad/exoplayer/b/h$a;

    invoke-direct {p2, p1}, Lcom/tkay/expressad/exoplayer/b/h$a;-><init>(Ljava/lang/Throwable;)V

    throw p2

    :cond_5
    move v4, v2

    :cond_6
    const/16 p4, 0xfc

    const/16 p5, 0xc

    packed-switch p2, :pswitch_data_0

    .line 466
    new-instance p1, Lcom/tkay/expressad/exoplayer/b/h$a;

    invoke-static {p2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p2

    const-string p3, "Unsupported channel count: "

    invoke-virtual {p3, p2}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    invoke-direct {p1, p2}, Lcom/tkay/expressad/exoplayer/b/h$a;-><init>(Ljava/lang/String;)V

    throw p1

    .line 463
    :pswitch_0
    sget v3, Lcom/tkay/expressad/exoplayer/b;->C:I

    goto :goto_4

    :pswitch_1
    const/16 v3, 0x4fc

    goto :goto_4

    :pswitch_2
    move v3, p4

    goto :goto_4

    :pswitch_3
    const/16 v3, 0xdc

    goto :goto_4

    :pswitch_4
    const/16 v3, 0xcc

    goto :goto_4

    :pswitch_5
    const/16 v3, 0x1c

    goto :goto_4

    :pswitch_6
    move v3, p5

    .line 470
    :goto_4
    :pswitch_7
    sget p6, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 v5, 0x17

    const/4 v6, 0x7

    const/4 v7, 0x5

    if-gt p6, v5, :cond_8

    sget-object p6, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    const-string v5, "foster"

    invoke-virtual {v5, p6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p6

    if-eqz p6, :cond_8

    sget-object p6, Lcom/tkay/expressad/exoplayer/k/af;->c:Ljava/lang/String;

    const-string v5, "NVIDIA"

    invoke-virtual {v5, p6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p6

    if-eqz p6, :cond_8

    const/4 p6, 0x3

    if-eq p2, p6, :cond_9

    if-eq p2, v7, :cond_9

    if-eq p2, v6, :cond_7

    goto :goto_5

    .line 473
    :cond_7
    sget p4, Lcom/tkay/expressad/exoplayer/b;->C:I

    goto :goto_6

    :cond_8
    :goto_5
    move p4, v3

    .line 486
    :cond_9
    :goto_6
    sget p6, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 v3, 0x19

    if-gt p6, v3, :cond_a

    sget-object p6, Lcom/tkay/expressad/exoplayer/k/af;->b:Ljava/lang/String;

    const-string v3, "fugu"

    invoke-virtual {v3, p6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p6

    if-eqz p6, :cond_a

    iget-boolean p6, p0, Lcom/tkay/expressad/exoplayer/b/l;->D:Z

    if-nez p6, :cond_a

    if-ne p2, v1, :cond_a

    goto :goto_7

    :cond_a
    move p5, p4

    :goto_7
    if-nez v4, :cond_b

    .line 491
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/b/l;->q()Z

    move-result p4

    if-eqz p4, :cond_b

    iget p4, p0, Lcom/tkay/expressad/exoplayer/b/l;->I:I

    if-ne p4, p1, :cond_b

    iget p4, p0, Lcom/tkay/expressad/exoplayer/b/l;->G:I

    if-ne p4, p3, :cond_b

    iget p4, p0, Lcom/tkay/expressad/exoplayer/b/l;->H:I

    if-ne p4, p5, :cond_b

    return-void

    .line 499
    :cond_b
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/b/l;->i()V

    .line 501
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->K:Z

    .line 502
    iput p3, p0, Lcom/tkay/expressad/exoplayer/b/l;->G:I

    .line 503
    iput p5, p0, Lcom/tkay/expressad/exoplayer/b/l;->H:I

    .line 504
    iput p1, p0, Lcom/tkay/expressad/exoplayer/b/l;->I:I

    .line 506
    iget-boolean p4, p0, Lcom/tkay/expressad/exoplayer/b/l;->D:Z

    if-eqz p4, :cond_c

    invoke-static {p1, p2}, Lcom/tkay/expressad/exoplayer/k/af;->b(II)I

    move-result p1

    goto :goto_8

    :cond_c
    const/4 p1, -0x1

    :goto_8
    iput p1, p0, Lcom/tkay/expressad/exoplayer/b/l;->W:I

    .line 509
    iget-boolean p1, p0, Lcom/tkay/expressad/exoplayer/b/l;->D:Z

    if-eqz p1, :cond_e

    .line 510
    iget p1, p0, Lcom/tkay/expressad/exoplayer/b/l;->I:I

    invoke-static {p3, p5, p1}, Landroid/media/AudioTrack;->getMinBufferSize(III)I

    move-result p1

    const/4 p2, -0x2

    if-eq p1, p2, :cond_d

    goto :goto_9

    :cond_d
    move v1, v2

    .line 511
    :goto_9
    invoke-static {v1}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    mul-int/lit8 p2, p1, 0x4

    const-wide/32 p3, 0x3d090

    .line 513
    invoke-direct {p0, p3, p4}, Lcom/tkay/expressad/exoplayer/b/l;->f(J)J

    move-result-wide p3

    long-to-int p3, p3

    iget p4, p0, Lcom/tkay/expressad/exoplayer/b/l;->W:I

    mul-int/2addr p3, p4

    int-to-long p4, p1

    const-wide/32 v0, 0xb71b0

    .line 515
    invoke-direct {p0, v0, v1}, Lcom/tkay/expressad/exoplayer/b/l;->f(J)J

    move-result-wide v0

    iget p1, p0, Lcom/tkay/expressad/exoplayer/b/l;->W:I

    int-to-long v2, p1

    mul-long/2addr v0, v2

    .line 514
    invoke-static {p4, p5, v0, v1}, Ljava/lang/Math;->max(JJ)J

    move-result-wide p4

    long-to-int p1, p4

    .line 516
    invoke-static {p2, p3, p1}, Lcom/tkay/expressad/exoplayer/k/af;->a(III)I

    move-result p1

    iput p1, p0, Lcom/tkay/expressad/exoplayer/b/l;->M:I

    return-void

    .line 520
    :cond_e
    iget p1, p0, Lcom/tkay/expressad/exoplayer/b/l;->I:I

    if-eq p1, v7, :cond_11

    const/4 p2, 0x6

    if-ne p1, p2, :cond_f

    goto :goto_a

    :cond_f
    if-ne p1, v6, :cond_10

    const p1, 0xc000

    .line 525
    iput p1, p0, Lcom/tkay/expressad/exoplayer/b/l;->M:I

    return-void

    :cond_10
    const p1, 0x48000

    .line 528
    iput p1, p0, Lcom/tkay/expressad/exoplayer/b/l;->M:I

    return-void

    :cond_11
    :goto_a
    const/16 p1, 0x5000

    .line 522
    iput p1, p0, Lcom/tkay/expressad/exoplayer/b/l;->M:I

    return-void

    nop

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_7
        :pswitch_6
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/b/b;)V
    .locals 1

    .line 895
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->J:Lcom/tkay/expressad/exoplayer/b/b;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/exoplayer/b/b;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 898
    :cond_0
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/b/l;->J:Lcom/tkay/expressad/exoplayer/b/b;

    .line 899
    iget-boolean p1, p0, Lcom/tkay/expressad/exoplayer/b/l;->an:Z

    if-eqz p1, :cond_1

    return-void

    .line 903
    :cond_1
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/b/l;->i()V

    const/4 p1, 0x0

    .line 904
    iput p1, p0, Lcom/tkay/expressad/exoplayer/b/l;->am:I

    return-void
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/b/h$c;)V
    .locals 0

    .line 372
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/b/l;->A:Lcom/tkay/expressad/exoplayer/b/h$c;

    return-void
.end method

.method public final a(I)Z
    .locals 3

    .line 377
    invoke-static {p1}, Lcom/tkay/expressad/exoplayer/k/af;->b(I)Z

    move-result v0

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-eqz v0, :cond_2

    const/4 v0, 0x4

    if-ne p1, v0, :cond_1

    .line 381
    sget p1, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 v0, 0x15

    if-lt p1, v0, :cond_0

    goto :goto_0

    :cond_0
    return v2

    :cond_1
    :goto_0
    return v1

    .line 383
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->q:Lcom/tkay/expressad/exoplayer/b/c;

    if-eqz v0, :cond_3

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/exoplayer/b/c;->a(I)Z

    move-result p1

    if-eqz p1, :cond_3

    return v1

    :cond_3
    return v2
.end method

.method public final a(Ljava/nio/ByteBuffer;J)Z
    .locals 19

    move-object/from16 v0, p0

    move-object/from16 v1, p1

    move-wide/from16 v2, p2

    .line 618
    iget-object v4, v0, Lcom/tkay/expressad/exoplayer/b/l;->af:Ljava/nio/ByteBuffer;

    const/4 v5, 0x0

    const/4 v6, 0x1

    if-eqz v4, :cond_1

    if-ne v1, v4, :cond_0

    goto :goto_0

    :cond_0
    move v4, v5

    goto :goto_1

    :cond_1
    :goto_0
    move v4, v6

    :goto_1
    invoke-static {v4}, Lcom/tkay/expressad/exoplayer/k/a;->a(Z)V

    .line 619
    invoke-direct/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/b/l;->q()Z

    move-result v4

    if-nez v4, :cond_6

    .line 2562
    iget-object v4, v0, Lcom/tkay/expressad/exoplayer/b/l;->x:Landroid/os/ConditionVariable;

    invoke-virtual {v4}, Landroid/os/ConditionVariable;->block()V

    .line 2564
    invoke-direct/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/b/l;->t()Landroid/media/AudioTrack;

    move-result-object v4

    iput-object v4, v0, Lcom/tkay/expressad/exoplayer/b/l;->C:Landroid/media/AudioTrack;

    .line 2565
    invoke-virtual {v4}, Landroid/media/AudioTrack;->getAudioSessionId()I

    move-result v4

    .line 2566
    sget-boolean v7, Lcom/tkay/expressad/exoplayer/b/l;->b:Z

    if-eqz v7, :cond_3

    .line 2567
    sget v7, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 v8, 0x15

    if-ge v7, v8, :cond_3

    .line 2570
    iget-object v7, v0, Lcom/tkay/expressad/exoplayer/b/l;->B:Landroid/media/AudioTrack;

    if-eqz v7, :cond_2

    .line 2571
    invoke-virtual {v7}, Landroid/media/AudioTrack;->getAudioSessionId()I

    move-result v7

    if-eq v4, v7, :cond_2

    .line 2572
    invoke-direct/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/b/l;->p()V

    .line 2574
    :cond_2
    iget-object v7, v0, Lcom/tkay/expressad/exoplayer/b/l;->B:Landroid/media/AudioTrack;

    if-nez v7, :cond_3

    .line 3166
    new-instance v15, Landroid/media/AudioTrack;

    const/4 v8, 0x3

    const/16 v9, 0xfa0

    const/4 v10, 0x4

    const/4 v11, 0x2

    const/4 v12, 0x2

    const/4 v13, 0x0

    move-object v7, v15

    move v14, v4

    invoke-direct/range {v7 .. v14}, Landroid/media/AudioTrack;-><init>(IIIIIII)V

    .line 2575
    iput-object v15, v0, Lcom/tkay/expressad/exoplayer/b/l;->B:Landroid/media/AudioTrack;

    .line 2579
    :cond_3
    iget v7, v0, Lcom/tkay/expressad/exoplayer/b/l;->am:I

    if-eq v7, v4, :cond_4

    .line 2580
    iput v4, v0, Lcom/tkay/expressad/exoplayer/b/l;->am:I

    .line 2581
    iget-object v7, v0, Lcom/tkay/expressad/exoplayer/b/l;->A:Lcom/tkay/expressad/exoplayer/b/h$c;

    if-eqz v7, :cond_4

    .line 2582
    invoke-interface {v7, v4}, Lcom/tkay/expressad/exoplayer/b/h$c;->a(I)V

    .line 2587
    :cond_4
    iget-boolean v4, v0, Lcom/tkay/expressad/exoplayer/b/l;->L:Z

    if-eqz v4, :cond_5

    .line 2588
    iget-object v4, v0, Lcom/tkay/expressad/exoplayer/b/l;->r:Lcom/tkay/expressad/exoplayer/b/l$a;

    iget-object v7, v0, Lcom/tkay/expressad/exoplayer/b/l;->O:Lcom/tkay/expressad/exoplayer/v;

    invoke-interface {v4, v7}, Lcom/tkay/expressad/exoplayer/b/l$a;->a(Lcom/tkay/expressad/exoplayer/v;)Lcom/tkay/expressad/exoplayer/v;

    move-result-object v4

    goto :goto_2

    .line 2589
    :cond_5
    sget-object v4, Lcom/tkay/expressad/exoplayer/v;->a:Lcom/tkay/expressad/exoplayer/v;

    :goto_2
    iput-object v4, v0, Lcom/tkay/expressad/exoplayer/b/l;->O:Lcom/tkay/expressad/exoplayer/v;

    .line 2590
    invoke-direct/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/b/l;->k()V

    .line 2592
    iget-object v4, v0, Lcom/tkay/expressad/exoplayer/b/l;->y:Lcom/tkay/expressad/exoplayer/b/j;

    iget-object v7, v0, Lcom/tkay/expressad/exoplayer/b/l;->C:Landroid/media/AudioTrack;

    iget v8, v0, Lcom/tkay/expressad/exoplayer/b/l;->I:I

    iget v9, v0, Lcom/tkay/expressad/exoplayer/b/l;->W:I

    iget v10, v0, Lcom/tkay/expressad/exoplayer/b/l;->M:I

    invoke-virtual {v4, v7, v8, v9, v10}, Lcom/tkay/expressad/exoplayer/b/j;->a(Landroid/media/AudioTrack;III)V

    .line 2594
    invoke-direct/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/b/l;->o()V

    .line 621
    iget-boolean v4, v0, Lcom/tkay/expressad/exoplayer/b/l;->al:Z

    if-eqz v4, :cond_6

    .line 622
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/b/l;->a()V

    .line 626
    :cond_6
    iget-object v4, v0, Lcom/tkay/expressad/exoplayer/b/l;->y:Lcom/tkay/expressad/exoplayer/b/j;

    invoke-direct/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/b/l;->s()J

    move-result-wide v7

    invoke-virtual {v4, v7, v8}, Lcom/tkay/expressad/exoplayer/b/j;->a(J)Z

    move-result v4

    if-nez v4, :cond_7

    return v5

    .line 630
    :cond_7
    iget-object v4, v0, Lcom/tkay/expressad/exoplayer/b/l;->af:Ljava/nio/ByteBuffer;

    const-string v7, "AudioTrack"

    const/4 v8, 0x0

    if-nez v4, :cond_16

    .line 632
    invoke-virtual/range {p1 .. p1}, Ljava/nio/ByteBuffer;->hasRemaining()Z

    move-result v4

    if-nez v4, :cond_8

    return v6

    .line 637
    :cond_8
    iget-boolean v4, v0, Lcom/tkay/expressad/exoplayer/b/l;->D:Z

    if-nez v4, :cond_f

    iget v4, v0, Lcom/tkay/expressad/exoplayer/b/l;->Z:I

    if-nez v4, :cond_f

    .line 639
    iget v4, v0, Lcom/tkay/expressad/exoplayer/b/l;->I:I

    const/4 v9, 0x7

    if-eq v4, v9, :cond_e

    const/16 v9, 0x8

    if-ne v4, v9, :cond_9

    goto :goto_3

    :cond_9
    const/4 v9, 0x5

    if-ne v4, v9, :cond_a

    .line 3180
    invoke-static {}, Lcom/tkay/expressad/exoplayer/b/a;->a()I

    move-result v4

    goto :goto_4

    :cond_a
    const/4 v9, 0x6

    if-ne v4, v9, :cond_b

    .line 3182
    invoke-static/range {p1 .. p1}, Lcom/tkay/expressad/exoplayer/b/a;->a(Ljava/nio/ByteBuffer;)I

    move-result v4

    goto :goto_4

    :cond_b
    const/16 v9, 0xe

    if-ne v4, v9, :cond_d

    .line 3184
    invoke-static/range {p1 .. p1}, Lcom/tkay/expressad/exoplayer/b/a;->b(Ljava/nio/ByteBuffer;)I

    move-result v4

    const/4 v9, -0x1

    if-ne v4, v9, :cond_c

    move v4, v5

    goto :goto_4

    .line 3187
    :cond_c
    invoke-static {v1, v4}, Lcom/tkay/expressad/exoplayer/b/a;->a(Ljava/nio/ByteBuffer;I)I

    move-result v4

    mul-int/lit8 v4, v4, 0x10

    goto :goto_4

    .line 3190
    :cond_d
    new-instance v1, Ljava/lang/IllegalStateException;

    invoke-static {v4}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    const-string v3, "Unexpected audio encoding: "

    invoke-virtual {v3, v2}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-direct {v1, v2}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw v1

    .line 3178
    :cond_e
    :goto_3
    invoke-static/range {p1 .. p1}, Lcom/tkay/expressad/exoplayer/b/m;->a(Ljava/nio/ByteBuffer;)I

    move-result v4

    .line 639
    :goto_4
    iput v4, v0, Lcom/tkay/expressad/exoplayer/b/l;->Z:I

    if-nez v4, :cond_f

    return v6

    .line 649
    :cond_f
    iget-object v4, v0, Lcom/tkay/expressad/exoplayer/b/l;->N:Lcom/tkay/expressad/exoplayer/v;

    const-wide/16 v9, 0x0

    if-eqz v4, :cond_11

    .line 650
    invoke-direct/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/b/l;->n()Z

    move-result v4

    if-nez v4, :cond_10

    return v5

    .line 654
    :cond_10
    iget-object v4, v0, Lcom/tkay/expressad/exoplayer/b/l;->N:Lcom/tkay/expressad/exoplayer/v;

    .line 655
    iput-object v8, v0, Lcom/tkay/expressad/exoplayer/b/l;->N:Lcom/tkay/expressad/exoplayer/v;

    .line 656
    iget-object v11, v0, Lcom/tkay/expressad/exoplayer/b/l;->r:Lcom/tkay/expressad/exoplayer/b/l$a;

    invoke-interface {v11, v4}, Lcom/tkay/expressad/exoplayer/b/l$a;->a(Lcom/tkay/expressad/exoplayer/v;)Lcom/tkay/expressad/exoplayer/v;

    move-result-object v13

    .line 658
    iget-object v4, v0, Lcom/tkay/expressad/exoplayer/b/l;->z:Ljava/util/ArrayDeque;

    new-instance v11, Lcom/tkay/expressad/exoplayer/b/l$d;

    .line 661
    invoke-static {v9, v10, v2, v3}, Ljava/lang/Math;->max(JJ)J

    move-result-wide v14

    .line 662
    invoke-direct/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/b/l;->s()J

    move-result-wide v5

    invoke-direct {v0, v5, v6}, Lcom/tkay/expressad/exoplayer/b/l;->e(J)J

    move-result-wide v16

    const/16 v18, 0x0

    move-object v12, v11

    invoke-direct/range {v12 .. v18}, Lcom/tkay/expressad/exoplayer/b/l$d;-><init>(Lcom/tkay/expressad/exoplayer/v;JJB)V

    .line 658
    invoke-virtual {v4, v11}, Ljava/util/ArrayDeque;->add(Ljava/lang/Object;)Z

    .line 664
    invoke-direct/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/b/l;->k()V

    .line 667
    :cond_11
    iget v4, v0, Lcom/tkay/expressad/exoplayer/b/l;->aa:I

    if-nez v4, :cond_12

    .line 668
    invoke-static {v9, v10, v2, v3}, Ljava/lang/Math;->max(JJ)J

    move-result-wide v4

    iput-wide v4, v0, Lcom/tkay/expressad/exoplayer/b/l;->ab:J

    const/4 v4, 0x1

    .line 669
    iput v4, v0, Lcom/tkay/expressad/exoplayer/b/l;->aa:I

    goto :goto_5

    .line 672
    :cond_12
    iget-wide v4, v0, Lcom/tkay/expressad/exoplayer/b/l;->ab:J

    .line 673
    invoke-direct/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/b/l;->r()J

    move-result-wide v9

    const-wide/32 v11, 0xf4240

    mul-long/2addr v9, v11

    .line 4077
    iget v6, v0, Lcom/tkay/expressad/exoplayer/b/l;->F:I

    int-to-long v11, v6

    div-long/2addr v9, v11

    add-long/2addr v4, v9

    .line 674
    iget v6, v0, Lcom/tkay/expressad/exoplayer/b/l;->aa:I

    const/4 v9, 0x2

    const/4 v10, 0x1

    if-ne v6, v10, :cond_13

    sub-long v10, v4, v2

    .line 675
    invoke-static {v10, v11}, Ljava/lang/Math;->abs(J)J

    move-result-wide v10

    const-wide/32 v12, 0x30d40

    cmp-long v6, v10, v12

    if-lez v6, :cond_13

    .line 676
    new-instance v6, Ljava/lang/StringBuilder;

    const-string v10, "Discontinuity detected [expected "

    invoke-direct {v6, v10}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v6, v4, v5}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v10, ", got "

    invoke-virtual {v6, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v10, "]"

    invoke-virtual {v6, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v7, v6}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 678
    iput v9, v0, Lcom/tkay/expressad/exoplayer/b/l;->aa:I

    .line 680
    :cond_13
    iget v6, v0, Lcom/tkay/expressad/exoplayer/b/l;->aa:I

    if-ne v6, v9, :cond_14

    .line 683
    iget-wide v9, v0, Lcom/tkay/expressad/exoplayer/b/l;->ab:J

    sub-long v4, v2, v4

    add-long/2addr v9, v4

    iput-wide v9, v0, Lcom/tkay/expressad/exoplayer/b/l;->ab:J

    const/4 v4, 0x1

    .line 684
    iput v4, v0, Lcom/tkay/expressad/exoplayer/b/l;->aa:I

    .line 685
    iget-object v4, v0, Lcom/tkay/expressad/exoplayer/b/l;->A:Lcom/tkay/expressad/exoplayer/b/h$c;

    if-eqz v4, :cond_14

    .line 686
    invoke-interface {v4}, Lcom/tkay/expressad/exoplayer/b/h$c;->a()V

    .line 691
    :cond_14
    :goto_5
    iget-boolean v4, v0, Lcom/tkay/expressad/exoplayer/b/l;->D:Z

    if-eqz v4, :cond_15

    .line 692
    iget-wide v4, v0, Lcom/tkay/expressad/exoplayer/b/l;->U:J

    invoke-virtual/range {p1 .. p1}, Ljava/nio/ByteBuffer;->remaining()I

    move-result v6

    int-to-long v9, v6

    add-long/2addr v4, v9

    iput-wide v4, v0, Lcom/tkay/expressad/exoplayer/b/l;->U:J

    goto :goto_6

    .line 694
    :cond_15
    iget-wide v4, v0, Lcom/tkay/expressad/exoplayer/b/l;->V:J

    iget v6, v0, Lcom/tkay/expressad/exoplayer/b/l;->Z:I

    int-to-long v9, v6

    add-long/2addr v4, v9

    iput-wide v4, v0, Lcom/tkay/expressad/exoplayer/b/l;->V:J

    .line 697
    :goto_6
    iput-object v1, v0, Lcom/tkay/expressad/exoplayer/b/l;->af:Ljava/nio/ByteBuffer;

    .line 700
    :cond_16
    iget-boolean v1, v0, Lcom/tkay/expressad/exoplayer/b/l;->K:Z

    if-eqz v1, :cond_17

    .line 701
    invoke-direct {v0, v2, v3}, Lcom/tkay/expressad/exoplayer/b/l;->a(J)V

    goto :goto_7

    .line 703
    :cond_17
    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/b/l;->af:Ljava/nio/ByteBuffer;

    invoke-direct {v0, v1, v2, v3}, Lcom/tkay/expressad/exoplayer/b/l;->b(Ljava/nio/ByteBuffer;J)V

    .line 706
    :goto_7
    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/b/l;->af:Ljava/nio/ByteBuffer;

    invoke-virtual {v1}, Ljava/nio/ByteBuffer;->hasRemaining()Z

    move-result v1

    if-nez v1, :cond_18

    .line 707
    iput-object v8, v0, Lcom/tkay/expressad/exoplayer/b/l;->af:Ljava/nio/ByteBuffer;

    const/4 v1, 0x1

    return v1

    :cond_18
    const/4 v1, 0x1

    .line 711
    iget-object v2, v0, Lcom/tkay/expressad/exoplayer/b/l;->y:Lcom/tkay/expressad/exoplayer/b/j;

    invoke-direct/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/b/l;->s()J

    move-result-wide v3

    invoke-virtual {v2, v3, v4}, Lcom/tkay/expressad/exoplayer/b/j;->c(J)Z

    move-result v2

    if-eqz v2, :cond_19

    const-string v2, "Resetting stalled audio track"

    .line 712
    invoke-static {v7, v2}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    .line 713
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/b/l;->i()V

    return v1

    :cond_19
    const/4 v1, 0x0

    return v1
.end method

.method public final b()V
    .locals 2

    .line 609
    iget v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->aa:I

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    const/4 v0, 0x2

    .line 610
    iput v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->aa:I

    :cond_0
    return-void
.end method

.method public final b(I)V
    .locals 1

    .line 909
    iget v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->am:I

    if-eq v0, p1, :cond_0

    .line 910
    iput p1, p0, Lcom/tkay/expressad/exoplayer/b/l;->am:I

    .line 911
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/b/l;->i()V

    :cond_0
    return-void
.end method

.method public final c()V
    .locals 3

    .line 810
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->ak:Z

    if-nez v0, :cond_1

    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/b/l;->q()Z

    move-result v0

    if-nez v0, :cond_0

    goto :goto_0

    .line 814
    :cond_0
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/b/l;->n()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 816
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->y:Lcom/tkay/expressad/exoplayer/b/j;

    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/b/l;->s()J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Lcom/tkay/expressad/exoplayer/b/j;->d(J)V

    .line 817
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->C:Landroid/media/AudioTrack;

    invoke-virtual {v0}, Landroid/media/AudioTrack;->stop()V

    const/4 v0, 0x0

    .line 818
    iput v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->S:I

    const/4 v0, 0x1

    .line 819
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->ak:Z

    :cond_1
    :goto_0
    return-void
.end method

.method public final c(I)V
    .locals 3

    .line 917
    sget v0, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/4 v1, 0x1

    const/16 v2, 0x15

    if-lt v0, v2, :cond_0

    move v0, v1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    .line 918
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->an:Z

    if-eqz v0, :cond_1

    iget v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->am:I

    if-eq v0, p1, :cond_2

    .line 919
    :cond_1
    iput-boolean v1, p0, Lcom/tkay/expressad/exoplayer/b/l;->an:Z

    .line 920
    iput p1, p0, Lcom/tkay/expressad/exoplayer/b/l;->am:I

    .line 921
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/b/l;->i()V

    :cond_2
    return-void
.end method

.method public final d()Z
    .locals 1

    .line 855
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/b/l;->q()Z

    move-result v0

    if-eqz v0, :cond_1

    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->ak:Z

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/b/l;->e()Z

    move-result v0

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    return v0

    :cond_1
    :goto_0
    const/4 v0, 0x1

    return v0
.end method

.method public final e()Z
    .locals 3

    .line 860
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/b/l;->q()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->y:Lcom/tkay/expressad/exoplayer/b/j;

    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/b/l;->s()J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Lcom/tkay/expressad/exoplayer/b/j;->e(J)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public final f()Lcom/tkay/expressad/exoplayer/v;
    .locals 1

    .line 890
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->O:Lcom/tkay/expressad/exoplayer/v;

    return-object v0
.end method

.method public final g()V
    .locals 1

    .line 927
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->an:Z

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    .line 928
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->an:Z

    .line 929
    iput v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->am:I

    .line 930
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/b/l;->i()V

    :cond_0
    return-void
.end method

.method public final h()V
    .locals 1

    const/4 v0, 0x0

    .line 954
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->al:Z

    .line 955
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/b/l;->q()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->y:Lcom/tkay/expressad/exoplayer/b/j;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/b/j;->c()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 956
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->C:Landroid/media/AudioTrack;

    invoke-virtual {v0}, Landroid/media/AudioTrack;->pause()V

    :cond_0
    return-void
.end method

.method public final i()V
    .locals 5

    .line 962
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/b/l;->q()Z

    move-result v0

    if-eqz v0, :cond_3

    const-wide/16 v0, 0x0

    .line 963
    iput-wide v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->U:J

    .line 964
    iput-wide v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->V:J

    .line 965
    iput-wide v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->X:J

    .line 966
    iput-wide v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->Y:J

    const/4 v2, 0x0

    .line 967
    iput v2, p0, Lcom/tkay/expressad/exoplayer/b/l;->Z:I

    .line 968
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/b/l;->N:Lcom/tkay/expressad/exoplayer/v;

    const/4 v4, 0x0

    if-eqz v3, :cond_0

    .line 969
    iput-object v3, p0, Lcom/tkay/expressad/exoplayer/b/l;->O:Lcom/tkay/expressad/exoplayer/v;

    .line 970
    iput-object v4, p0, Lcom/tkay/expressad/exoplayer/b/l;->N:Lcom/tkay/expressad/exoplayer/v;

    goto :goto_0

    .line 971
    :cond_0
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/b/l;->z:Ljava/util/ArrayDeque;

    invoke-virtual {v3}, Ljava/util/ArrayDeque;->isEmpty()Z

    move-result v3

    if-nez v3, :cond_1

    .line 972
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/b/l;->z:Ljava/util/ArrayDeque;

    invoke-virtual {v3}, Ljava/util/ArrayDeque;->getLast()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/tkay/expressad/exoplayer/b/l$d;

    invoke-static {v3}, Lcom/tkay/expressad/exoplayer/b/l$d;->a(Lcom/tkay/expressad/exoplayer/b/l$d;)Lcom/tkay/expressad/exoplayer/v;

    move-result-object v3

    iput-object v3, p0, Lcom/tkay/expressad/exoplayer/b/l;->O:Lcom/tkay/expressad/exoplayer/v;

    .line 974
    :cond_1
    :goto_0
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/b/l;->z:Ljava/util/ArrayDeque;

    invoke-virtual {v3}, Ljava/util/ArrayDeque;->clear()V

    .line 975
    iput-wide v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->P:J

    .line 976
    iput-wide v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->Q:J

    .line 977
    iput-object v4, p0, Lcom/tkay/expressad/exoplayer/b/l;->af:Ljava/nio/ByteBuffer;

    .line 978
    iput-object v4, p0, Lcom/tkay/expressad/exoplayer/b/l;->ag:Ljava/nio/ByteBuffer;

    .line 979
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/b/l;->l()V

    .line 980
    iput-boolean v2, p0, Lcom/tkay/expressad/exoplayer/b/l;->ak:Z

    const/4 v0, -0x1

    .line 981
    iput v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->aj:I

    .line 982
    iput-object v4, p0, Lcom/tkay/expressad/exoplayer/b/l;->R:Ljava/nio/ByteBuffer;

    .line 983
    iput v2, p0, Lcom/tkay/expressad/exoplayer/b/l;->S:I

    .line 984
    iput v2, p0, Lcom/tkay/expressad/exoplayer/b/l;->aa:I

    .line 985
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->y:Lcom/tkay/expressad/exoplayer/b/j;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/b/j;->b()Z

    move-result v0

    if-eqz v0, :cond_2

    .line 986
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->C:Landroid/media/AudioTrack;

    invoke-virtual {v0}, Landroid/media/AudioTrack;->pause()V

    .line 989
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->C:Landroid/media/AudioTrack;

    .line 990
    iput-object v4, p0, Lcom/tkay/expressad/exoplayer/b/l;->C:Landroid/media/AudioTrack;

    .line 991
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/b/l;->y:Lcom/tkay/expressad/exoplayer/b/j;

    invoke-virtual {v1}, Lcom/tkay/expressad/exoplayer/b/j;->d()V

    .line 992
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/b/l;->x:Landroid/os/ConditionVariable;

    invoke-virtual {v1}, Landroid/os/ConditionVariable;->close()V

    .line 993
    new-instance v1, Lcom/tkay/expressad/exoplayer/b/l$1;

    invoke-direct {v1, p0, v0}, Lcom/tkay/expressad/exoplayer/b/l$1;-><init>(Lcom/tkay/expressad/exoplayer/b/l;Landroid/media/AudioTrack;)V

    .line 1003
    invoke-virtual {v1}, Lcom/tkay/expressad/exoplayer/b/l$1;->start()V

    :cond_3
    return-void
.end method

.method public final j()V
    .locals 5

    .line 1009
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/b/l;->i()V

    .line 1010
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/b/l;->p()V

    .line 1011
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->v:[Lcom/tkay/expressad/exoplayer/b/f;

    array-length v1, v0

    const/4 v2, 0x0

    move v3, v2

    :goto_0
    if-ge v3, v1, :cond_0

    aget-object v4, v0, v3

    .line 1012
    invoke-interface {v4}, Lcom/tkay/expressad/exoplayer/b/f;->i()V

    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 1014
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/l;->w:[Lcom/tkay/expressad/exoplayer/b/f;

    array-length v1, v0

    move v3, v2

    :goto_1
    if-ge v3, v1, :cond_1

    aget-object v4, v0, v3

    .line 1015
    invoke-interface {v4}, Lcom/tkay/expressad/exoplayer/b/f;->i()V

    add-int/lit8 v3, v3, 0x1

    goto :goto_1

    .line 1017
    :cond_1
    iput v2, p0, Lcom/tkay/expressad/exoplayer/b/l;->am:I

    .line 1018
    iput-boolean v2, p0, Lcom/tkay/expressad/exoplayer/b/l;->al:Z

    return-void
.end method
