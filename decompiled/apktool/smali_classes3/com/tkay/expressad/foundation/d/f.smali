.class public final Lcom/tkay/expressad/foundation/d/f;
.super Ljava/lang/Object;


# static fields
.field public static final a:Ljava/lang/String; = "cid"

.field public static final b:Ljava/lang/String; = "click_type"

.field public static final c:Ljava/lang/String; = "network_type"

.field public static final d:Ljava/lang/String; = "network_str"

.field public static final e:Ljava/lang/String; = "click_duration"

.field public static final f:Ljava/lang/String; = "last_url"

.field public static final g:Ljava/lang/String; = "type"

.field public static final h:Ljava/lang/String; = "code"

.field public static final i:Ljava/lang/String; = "exception"

.field public static final j:Ljava/lang/String; = "header"

.field public static final k:Ljava/lang/String; = "content"

.field public static final l:Ljava/lang/String; = "network_type"

.field public static final m:Ljava/lang/String; = "rid"

.field public static final n:Ljava/lang/String; = "key"

.field public static final o:Ljava/lang/String; = "rid_n"

.field public static final p:Ljava/lang/String; = "unit_id"

.field public static final q:Ljava/lang/String; = "landing_type"

.field public static final r:Ljava/lang/String; = "link_type"

.field public static final s:Ljava/lang/String; = "click_time"

.field public static final t:Ljava/lang/String; = "market_result"

.field public static final u:Ljava/lang/String; = "2000013"

.field public static final v:Ljava/lang/String; = "2000012"


# instance fields
.field private A:Ljava/lang/String;

.field private B:I

.field private C:Ljava/lang/String;

.field private D:Ljava/lang/String;

.field private E:Ljava/lang/String;

.field private F:I

.field private G:I

.field private H:Ljava/lang/String;

.field private I:I

.field private J:I

.field private K:Ljava/lang/String;

.field private L:I

.field private M:Ljava/lang/String;

.field private N:I

.field private w:I

.field private x:Ljava/lang/String;

.field private y:Ljava/lang/String;

.field private z:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 34
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;IILjava/lang/String;IILjava/lang/String;IILjava/lang/String;)V
    .locals 2

    move-object v0, p0

    .line 43
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    move-object v1, p1

    .line 44
    iput-object v1, v0, Lcom/tkay/expressad/foundation/d/f;->x:Ljava/lang/String;

    move-object v1, p2

    .line 45
    iput-object v1, v0, Lcom/tkay/expressad/foundation/d/f;->y:Ljava/lang/String;

    move-object v1, p3

    .line 46
    iput-object v1, v0, Lcom/tkay/expressad/foundation/d/f;->z:Ljava/lang/String;

    move-object v1, p4

    .line 47
    iput-object v1, v0, Lcom/tkay/expressad/foundation/d/f;->A:Ljava/lang/String;

    move v1, p5

    .line 48
    iput v1, v0, Lcom/tkay/expressad/foundation/d/f;->B:I

    move-object v1, p6

    .line 49
    iput-object v1, v0, Lcom/tkay/expressad/foundation/d/f;->C:Ljava/lang/String;

    move-object v1, p7

    .line 50
    iput-object v1, v0, Lcom/tkay/expressad/foundation/d/f;->D:Ljava/lang/String;

    move-object v1, p8

    .line 51
    iput-object v1, v0, Lcom/tkay/expressad/foundation/d/f;->E:Ljava/lang/String;

    move v1, p9

    .line 52
    iput v1, v0, Lcom/tkay/expressad/foundation/d/f;->F:I

    move v1, p10

    .line 53
    iput v1, v0, Lcom/tkay/expressad/foundation/d/f;->G:I

    move-object v1, p11

    .line 54
    iput-object v1, v0, Lcom/tkay/expressad/foundation/d/f;->H:Ljava/lang/String;

    move v1, p12

    .line 55
    iput v1, v0, Lcom/tkay/expressad/foundation/d/f;->I:I

    move v1, p13

    .line 56
    iput v1, v0, Lcom/tkay/expressad/foundation/d/f;->J:I

    move-object/from16 v1, p14

    .line 57
    iput-object v1, v0, Lcom/tkay/expressad/foundation/d/f;->K:Ljava/lang/String;

    move/from16 v1, p15

    .line 58
    iput v1, v0, Lcom/tkay/expressad/foundation/d/f;->L:I

    move-object/from16 v1, p17

    .line 59
    iput-object v1, v0, Lcom/tkay/expressad/foundation/d/f;->M:Ljava/lang/String;

    move/from16 v1, p16

    .line 60
    iput v1, v0, Lcom/tkay/expressad/foundation/d/f;->N:I

    return-void
.end method

.method private static a(Lcom/tkay/expressad/foundation/d/f;)Ljava/lang/String;
    .locals 4

    if-eqz p0, :cond_0

    .line 256
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    .line 8188
    iget-object v1, p0, Lcom/tkay/expressad/foundation/d/f;->A:Ljava/lang/String;

    .line 258
    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "rid_n="

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    .line 8220
    iget-object v3, p0, Lcom/tkay/expressad/foundation/d/f;->x:Ljava/lang/String;

    .line 258
    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "&click_type="

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    .line 9140
    iget v3, p0, Lcom/tkay/expressad/foundation/d/f;->G:I

    .line 259
    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "&type="

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    .line 9180
    iget v3, p0, Lcom/tkay/expressad/foundation/d/f;->F:I

    .line 260
    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "&cid="

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    .line 9196
    iget-object v3, p0, Lcom/tkay/expressad/foundation/d/f;->y:Ljava/lang/String;

    .line 261
    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "&click_duration="

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    .line 9204
    iget-object v3, p0, Lcom/tkay/expressad/foundation/d/f;->z:Ljava/lang/String;

    .line 262
    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "&key=2000012"

    .line 263
    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "&unit_id="

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    .line 10108
    iget-object v3, p0, Lcom/tkay/expressad/foundation/d/f;->H:Ljava/lang/String;

    .line 263
    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "&last_url="

    invoke-virtual {v2, v1}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 264
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "&code="

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    .line 10156
    iget v2, p0, Lcom/tkay/expressad/foundation/d/f;->B:I

    .line 265
    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "&exception="

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    .line 11148
    iget-object v2, p0, Lcom/tkay/expressad/foundation/d/f;->C:Ljava/lang/String;

    .line 266
    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "&landing_type="

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    .line 12116
    iget v2, p0, Lcom/tkay/expressad/foundation/d/f;->I:I

    .line 267
    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "&link_type="

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    .line 12124
    iget v2, p0, Lcom/tkay/expressad/foundation/d/f;->J:I

    .line 268
    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "&click_time="

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    .line 12132
    iget-object p0, p0, Lcom/tkay/expressad/foundation/d/f;->K:Ljava/lang/String;

    .line 270
    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, "\n"

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    .line 269
    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 272
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_0
    const/4 p0, 0x0

    return-object p0
.end method

.method public static a(Ljava/util/List;)Ljava/lang/String;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/f;",
            ">;)",
            "Ljava/lang/String;"
        }
    .end annotation

    .line 229
    invoke-interface {p0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_1

    .line 230
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    .line 231
    invoke-interface {p0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :goto_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/foundation/d/f;

    .line 232
    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "rid_n="

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    .line 1220
    iget-object v3, v1, Lcom/tkay/expressad/foundation/d/f;->x:Ljava/lang/String;

    .line 232
    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "&cid="

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    .line 2196
    iget-object v3, v1, Lcom/tkay/expressad/foundation/d/f;->y:Ljava/lang/String;

    .line 233
    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "&click_type="

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    .line 3140
    iget v3, v1, Lcom/tkay/expressad/foundation/d/f;->G:I

    .line 234
    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "&type="

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    .line 3180
    iget v3, v1, Lcom/tkay/expressad/foundation/d/f;->F:I

    .line 235
    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "&click_duration="

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    .line 3204
    iget-object v3, v1, Lcom/tkay/expressad/foundation/d/f;->z:Ljava/lang/String;

    .line 236
    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "&key=2000013"

    .line 237
    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "&unit_id="

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    .line 4108
    iget-object v3, v1, Lcom/tkay/expressad/foundation/d/f;->H:Ljava/lang/String;

    .line 237
    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "&last_url="

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    .line 4188
    iget-object v3, v1, Lcom/tkay/expressad/foundation/d/f;->A:Ljava/lang/String;

    .line 238
    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "&content="

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    .line 5172
    iget-object v3, v1, Lcom/tkay/expressad/foundation/d/f;->E:Ljava/lang/String;

    .line 239
    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "&code="

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    .line 6156
    iget v3, v1, Lcom/tkay/expressad/foundation/d/f;->B:I

    .line 240
    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "&exception="

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    .line 7148
    iget-object v3, v1, Lcom/tkay/expressad/foundation/d/f;->C:Ljava/lang/String;

    .line 241
    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "&header="

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    .line 7164
    iget-object v3, v1, Lcom/tkay/expressad/foundation/d/f;->D:Ljava/lang/String;

    .line 242
    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "&landing_type="

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    .line 8116
    iget v3, v1, Lcom/tkay/expressad/foundation/d/f;->I:I

    .line 243
    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "&link_type="

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    .line 8124
    iget v3, v1, Lcom/tkay/expressad/foundation/d/f;->J:I

    .line 244
    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "&click_time="

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    .line 8132
    iget-object v1, v1, Lcom/tkay/expressad/foundation/d/f;->K:Ljava/lang/String;

    .line 245
    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "\n"

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto/16 :goto_0

    .line 248
    :cond_0
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_1
    const/4 p0, 0x0

    return-object p0
.end method

.method private b()I
    .locals 1

    .line 84
    iget v0, p0, Lcom/tkay/expressad/foundation/d/f;->N:I

    return v0
.end method

.method private c()I
    .locals 1

    .line 92
    iget v0, p0, Lcom/tkay/expressad/foundation/d/f;->L:I

    return v0
.end method

.method private d()Ljava/lang/String;
    .locals 1

    .line 100
    iget-object v0, p0, Lcom/tkay/expressad/foundation/d/f;->M:Ljava/lang/String;

    return-object v0
.end method

.method private e()Ljava/lang/String;
    .locals 1

    .line 108
    iget-object v0, p0, Lcom/tkay/expressad/foundation/d/f;->H:Ljava/lang/String;

    return-object v0
.end method

.method private e(I)V
    .locals 0

    .line 88
    iput p1, p0, Lcom/tkay/expressad/foundation/d/f;->N:I

    return-void
.end method

.method private f()I
    .locals 1

    .line 116
    iget v0, p0, Lcom/tkay/expressad/foundation/d/f;->I:I

    return v0
.end method

.method private f(I)V
    .locals 0

    .line 96
    iput p1, p0, Lcom/tkay/expressad/foundation/d/f;->L:I

    return-void
.end method

.method private g()I
    .locals 1

    .line 124
    iget v0, p0, Lcom/tkay/expressad/foundation/d/f;->J:I

    return v0
.end method

.method private g(I)V
    .locals 0

    .line 216
    iput p1, p0, Lcom/tkay/expressad/foundation/d/f;->w:I

    return-void
.end method

.method private h()Ljava/lang/String;
    .locals 1

    .line 132
    iget-object v0, p0, Lcom/tkay/expressad/foundation/d/f;->K:Ljava/lang/String;

    return-object v0
.end method

.method private i()I
    .locals 1

    .line 140
    iget v0, p0, Lcom/tkay/expressad/foundation/d/f;->G:I

    return v0
.end method

.method private j()Ljava/lang/String;
    .locals 1

    .line 148
    iget-object v0, p0, Lcom/tkay/expressad/foundation/d/f;->C:Ljava/lang/String;

    return-object v0
.end method

.method private j(Ljava/lang/String;)V
    .locals 0

    .line 104
    iput-object p1, p0, Lcom/tkay/expressad/foundation/d/f;->M:Ljava/lang/String;

    return-void
.end method

.method private k()I
    .locals 1

    .line 156
    iget v0, p0, Lcom/tkay/expressad/foundation/d/f;->B:I

    return v0
.end method

.method private l()Ljava/lang/String;
    .locals 1

    .line 164
    iget-object v0, p0, Lcom/tkay/expressad/foundation/d/f;->D:Ljava/lang/String;

    return-object v0
.end method

.method private m()Ljava/lang/String;
    .locals 1

    .line 172
    iget-object v0, p0, Lcom/tkay/expressad/foundation/d/f;->E:Ljava/lang/String;

    return-object v0
.end method

.method private n()I
    .locals 1

    .line 180
    iget v0, p0, Lcom/tkay/expressad/foundation/d/f;->F:I

    return v0
.end method

.method private o()Ljava/lang/String;
    .locals 1

    .line 188
    iget-object v0, p0, Lcom/tkay/expressad/foundation/d/f;->A:Ljava/lang/String;

    return-object v0
.end method

.method private p()Ljava/lang/String;
    .locals 1

    .line 196
    iget-object v0, p0, Lcom/tkay/expressad/foundation/d/f;->y:Ljava/lang/String;

    return-object v0
.end method

.method private q()Ljava/lang/String;
    .locals 1

    .line 204
    iget-object v0, p0, Lcom/tkay/expressad/foundation/d/f;->z:Ljava/lang/String;

    return-object v0
.end method

.method private r()I
    .locals 1

    .line 212
    iget v0, p0, Lcom/tkay/expressad/foundation/d/f;->w:I

    return v0
.end method

.method private s()Ljava/lang/String;
    .locals 1

    .line 220
    iget-object v0, p0, Lcom/tkay/expressad/foundation/d/f;->x:Ljava/lang/String;

    return-object v0
.end method


# virtual methods
.method public final a()V
    .locals 1

    const/4 v0, 0x1

    .line 144
    iput v0, p0, Lcom/tkay/expressad/foundation/d/f;->G:I

    return-void
.end method

.method public final a(I)V
    .locals 0

    .line 120
    iput p1, p0, Lcom/tkay/expressad/foundation/d/f;->I:I

    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 0

    .line 112
    iput-object p1, p0, Lcom/tkay/expressad/foundation/d/f;->H:Ljava/lang/String;

    return-void
.end method

.method public final b(I)V
    .locals 0

    .line 128
    iput p1, p0, Lcom/tkay/expressad/foundation/d/f;->J:I

    return-void
.end method

.method public final b(Ljava/lang/String;)V
    .locals 0

    .line 136
    iput-object p1, p0, Lcom/tkay/expressad/foundation/d/f;->K:Ljava/lang/String;

    return-void
.end method

.method public final c(I)V
    .locals 0

    .line 160
    iput p1, p0, Lcom/tkay/expressad/foundation/d/f;->B:I

    return-void
.end method

.method public final c(Ljava/lang/String;)V
    .locals 0

    .line 152
    iput-object p1, p0, Lcom/tkay/expressad/foundation/d/f;->C:Ljava/lang/String;

    return-void
.end method

.method public final d(I)V
    .locals 0

    .line 184
    iput p1, p0, Lcom/tkay/expressad/foundation/d/f;->F:I

    return-void
.end method

.method public final d(Ljava/lang/String;)V
    .locals 0

    .line 168
    iput-object p1, p0, Lcom/tkay/expressad/foundation/d/f;->D:Ljava/lang/String;

    return-void
.end method

.method public final e(Ljava/lang/String;)V
    .locals 0

    .line 176
    iput-object p1, p0, Lcom/tkay/expressad/foundation/d/f;->E:Ljava/lang/String;

    return-void
.end method

.method public final f(Ljava/lang/String;)V
    .locals 0

    .line 192
    iput-object p1, p0, Lcom/tkay/expressad/foundation/d/f;->A:Ljava/lang/String;

    return-void
.end method

.method public final g(Ljava/lang/String;)V
    .locals 0

    .line 200
    iput-object p1, p0, Lcom/tkay/expressad/foundation/d/f;->y:Ljava/lang/String;

    return-void
.end method

.method public final h(Ljava/lang/String;)V
    .locals 0

    .line 208
    iput-object p1, p0, Lcom/tkay/expressad/foundation/d/f;->z:Ljava/lang/String;

    return-void
.end method

.method public final i(Ljava/lang/String;)V
    .locals 0

    .line 224
    iput-object p1, p0, Lcom/tkay/expressad/foundation/d/f;->x:Ljava/lang/String;

    return-void
.end method

.method public final toString()Ljava/lang/String;
    .locals 2

    .line 279
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "ClickTime [campaignId="

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/tkay/expressad/foundation/d/f;->y:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ", click_duration="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/expressad/foundation/d/f;->z:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ", lastUrl="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/expressad/foundation/d/f;->A:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ", code="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/tkay/expressad/foundation/d/f;->B:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ", excepiton="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/expressad/foundation/d/f;->C:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ", header="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/expressad/foundation/d/f;->D:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ", content="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/expressad/foundation/d/f;->E:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ", type="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/tkay/expressad/foundation/d/f;->F:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ", click_type="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/tkay/expressad/foundation/d/f;->G:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "]"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
