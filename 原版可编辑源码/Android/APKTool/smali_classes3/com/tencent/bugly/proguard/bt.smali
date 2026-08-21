.class public final Lcom/tencent/bugly/proguard/bt;
.super Lcom/tencent/bugly/proguard/m;
.source "BUGLY"

# interfaces
.implements Ljava/lang/Cloneable;


# static fields
.field static m:Lcom/tencent/bugly/proguard/bs;

.field static n:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field static final synthetic o:Z


# instance fields
.field public a:Z

.field public b:Z

.field public c:Z

.field public d:Ljava/lang/String;

.field public e:Ljava/lang/String;

.field public f:Lcom/tencent/bugly/proguard/bs;

.field public g:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field public h:J

.field public i:Ljava/lang/String;

.field public j:Ljava/lang/String;

.field public k:I

.field public l:I


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 9
    const-class v0, Lcom/tencent/bugly/proguard/bt;

    invoke-virtual {v0}, Ljava/lang/Class;->desiredAssertionStatus()Z

    move-result v0

    xor-int/lit8 v0, v0, 0x1

    sput-boolean v0, Lcom/tencent/bugly/proguard/bt;->o:Z

    .line 270
    new-instance v0, Lcom/tencent/bugly/proguard/bs;

    invoke-direct {v0}, Lcom/tencent/bugly/proguard/bs;-><init>()V

    sput-object v0, Lcom/tencent/bugly/proguard/bt;->m:Lcom/tencent/bugly/proguard/bs;

    .line 274
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/tencent/bugly/proguard/bt;->n:Ljava/util/Map;

    .line 277
    sget-object v0, Lcom/tencent/bugly/proguard/bt;->n:Ljava/util/Map;

    const-string v1, ""

    invoke-interface {v0, v1, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public constructor <init>()V
    .locals 3

    .line 166
    invoke-direct {p0}, Lcom/tencent/bugly/proguard/m;-><init>()V

    const/4 v0, 0x1

    .line 21
    iput-boolean v0, p0, Lcom/tencent/bugly/proguard/bt;->a:Z

    .line 23
    iput-boolean v0, p0, Lcom/tencent/bugly/proguard/bt;->b:Z

    .line 25
    iput-boolean v0, p0, Lcom/tencent/bugly/proguard/bt;->c:Z

    const-string v0, ""

    .line 27
    iput-object v0, p0, Lcom/tencent/bugly/proguard/bt;->d:Ljava/lang/String;

    .line 29
    iput-object v0, p0, Lcom/tencent/bugly/proguard/bt;->e:Ljava/lang/String;

    const/4 v1, 0x0

    .line 31
    iput-object v1, p0, Lcom/tencent/bugly/proguard/bt;->f:Lcom/tencent/bugly/proguard/bs;

    .line 33
    iput-object v1, p0, Lcom/tencent/bugly/proguard/bt;->g:Ljava/util/Map;

    const-wide/16 v1, 0x0

    .line 35
    iput-wide v1, p0, Lcom/tencent/bugly/proguard/bt;->h:J

    .line 37
    iput-object v0, p0, Lcom/tencent/bugly/proguard/bt;->i:Ljava/lang/String;

    .line 39
    iput-object v0, p0, Lcom/tencent/bugly/proguard/bt;->j:Ljava/lang/String;

    const/4 v0, 0x0

    .line 41
    iput v0, p0, Lcom/tencent/bugly/proguard/bt;->k:I

    .line 43
    iput v0, p0, Lcom/tencent/bugly/proguard/bt;->l:I

    return-void
.end method


# virtual methods
.method public final a(Lcom/tencent/bugly/proguard/k;)V
    .locals 4

    const/4 v0, 0x1

    const/4 v1, 0x0

    .line 282
    invoke-virtual {p1, v1, v0}, Lcom/tencent/bugly/proguard/k;->a(IZ)Z

    move-result v2

    iput-boolean v2, p0, Lcom/tencent/bugly/proguard/bt;->a:Z

    .line 283
    invoke-virtual {p1, v0, v0}, Lcom/tencent/bugly/proguard/k;->a(IZ)Z

    move-result v2

    iput-boolean v2, p0, Lcom/tencent/bugly/proguard/bt;->b:Z

    const/4 v2, 0x2

    .line 284
    invoke-virtual {p1, v2, v0}, Lcom/tencent/bugly/proguard/k;->a(IZ)Z

    move-result v0

    iput-boolean v0, p0, Lcom/tencent/bugly/proguard/bt;->c:Z

    const/4 v0, 0x3

    .line 285
    invoke-virtual {p1, v0, v1}, Lcom/tencent/bugly/proguard/k;->b(IZ)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tencent/bugly/proguard/bt;->d:Ljava/lang/String;

    const/4 v0, 0x4

    .line 286
    invoke-virtual {p1, v0, v1}, Lcom/tencent/bugly/proguard/k;->b(IZ)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tencent/bugly/proguard/bt;->e:Ljava/lang/String;

    .line 287
    sget-object v0, Lcom/tencent/bugly/proguard/bt;->m:Lcom/tencent/bugly/proguard/bs;

    const/4 v2, 0x5

    invoke-virtual {p1, v0, v2, v1}, Lcom/tencent/bugly/proguard/k;->a(Lcom/tencent/bugly/proguard/m;IZ)Lcom/tencent/bugly/proguard/m;

    move-result-object v0

    check-cast v0, Lcom/tencent/bugly/proguard/bs;

    iput-object v0, p0, Lcom/tencent/bugly/proguard/bt;->f:Lcom/tencent/bugly/proguard/bs;

    .line 288
    sget-object v0, Lcom/tencent/bugly/proguard/bt;->n:Ljava/util/Map;

    const/4 v2, 0x6

    invoke-virtual {p1, v0, v2, v1}, Lcom/tencent/bugly/proguard/k;->a(Ljava/lang/Object;IZ)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/Map;

    iput-object v0, p0, Lcom/tencent/bugly/proguard/bt;->g:Ljava/util/Map;

    .line 289
    iget-wide v2, p0, Lcom/tencent/bugly/proguard/bt;->h:J

    const/4 v0, 0x7

    invoke-virtual {p1, v2, v3, v0, v1}, Lcom/tencent/bugly/proguard/k;->a(JIZ)J

    move-result-wide v2

    iput-wide v2, p0, Lcom/tencent/bugly/proguard/bt;->h:J

    const/16 v0, 0x8

    .line 290
    invoke-virtual {p1, v0, v1}, Lcom/tencent/bugly/proguard/k;->b(IZ)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tencent/bugly/proguard/bt;->i:Ljava/lang/String;

    const/16 v0, 0x9

    .line 291
    invoke-virtual {p1, v0, v1}, Lcom/tencent/bugly/proguard/k;->b(IZ)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tencent/bugly/proguard/bt;->j:Ljava/lang/String;

    .line 292
    iget v0, p0, Lcom/tencent/bugly/proguard/bt;->k:I

    const/16 v2, 0xa

    invoke-virtual {p1, v0, v2, v1}, Lcom/tencent/bugly/proguard/k;->a(IIZ)I

    move-result v0

    iput v0, p0, Lcom/tencent/bugly/proguard/bt;->k:I

    .line 293
    iget v0, p0, Lcom/tencent/bugly/proguard/bt;->l:I

    const/16 v2, 0xb

    invoke-virtual {p1, v0, v2, v1}, Lcom/tencent/bugly/proguard/k;->a(IIZ)I

    move-result p1

    iput p1, p0, Lcom/tencent/bugly/proguard/bt;->l:I

    return-void
.end method

.method public final a(Lcom/tencent/bugly/proguard/l;)V
    .locals 3

    .line 236
    iget-boolean v0, p0, Lcom/tencent/bugly/proguard/bt;->a:Z

    const/4 v1, 0x0

    invoke-virtual {p1, v0, v1}, Lcom/tencent/bugly/proguard/l;->a(ZI)V

    .line 237
    iget-boolean v0, p0, Lcom/tencent/bugly/proguard/bt;->b:Z

    const/4 v1, 0x1

    invoke-virtual {p1, v0, v1}, Lcom/tencent/bugly/proguard/l;->a(ZI)V

    .line 238
    iget-boolean v0, p0, Lcom/tencent/bugly/proguard/bt;->c:Z

    const/4 v1, 0x2

    invoke-virtual {p1, v0, v1}, Lcom/tencent/bugly/proguard/l;->a(ZI)V

    .line 239
    iget-object v0, p0, Lcom/tencent/bugly/proguard/bt;->d:Ljava/lang/String;

    if-eqz v0, :cond_0

    const/4 v1, 0x3

    .line 241
    invoke-virtual {p1, v0, v1}, Lcom/tencent/bugly/proguard/l;->a(Ljava/lang/String;I)V

    .line 243
    :cond_0
    iget-object v0, p0, Lcom/tencent/bugly/proguard/bt;->e:Ljava/lang/String;

    if-eqz v0, :cond_1

    const/4 v1, 0x4

    .line 245
    invoke-virtual {p1, v0, v1}, Lcom/tencent/bugly/proguard/l;->a(Ljava/lang/String;I)V

    .line 247
    :cond_1
    iget-object v0, p0, Lcom/tencent/bugly/proguard/bt;->f:Lcom/tencent/bugly/proguard/bs;

    if-eqz v0, :cond_2

    const/4 v1, 0x5

    .line 249
    invoke-virtual {p1, v0, v1}, Lcom/tencent/bugly/proguard/l;->a(Lcom/tencent/bugly/proguard/m;I)V

    .line 251
    :cond_2
    iget-object v0, p0, Lcom/tencent/bugly/proguard/bt;->g:Ljava/util/Map;

    if-eqz v0, :cond_3

    const/4 v1, 0x6

    .line 253
    invoke-virtual {p1, v0, v1}, Lcom/tencent/bugly/proguard/l;->a(Ljava/util/Map;I)V

    .line 255
    :cond_3
    iget-wide v0, p0, Lcom/tencent/bugly/proguard/bt;->h:J

    const/4 v2, 0x7

    invoke-virtual {p1, v0, v1, v2}, Lcom/tencent/bugly/proguard/l;->a(JI)V

    .line 256
    iget-object v0, p0, Lcom/tencent/bugly/proguard/bt;->i:Ljava/lang/String;

    if-eqz v0, :cond_4

    const/16 v1, 0x8

    .line 258
    invoke-virtual {p1, v0, v1}, Lcom/tencent/bugly/proguard/l;->a(Ljava/lang/String;I)V

    .line 260
    :cond_4
    iget-object v0, p0, Lcom/tencent/bugly/proguard/bt;->j:Ljava/lang/String;

    if-eqz v0, :cond_5

    const/16 v1, 0x9

    .line 262
    invoke-virtual {p1, v0, v1}, Lcom/tencent/bugly/proguard/l;->a(Ljava/lang/String;I)V

    .line 264
    :cond_5
    iget v0, p0, Lcom/tencent/bugly/proguard/bt;->k:I

    const/16 v1, 0xa

    invoke-virtual {p1, v0, v1}, Lcom/tencent/bugly/proguard/l;->a(II)V

    .line 265
    iget v0, p0, Lcom/tencent/bugly/proguard/bt;->l:I

    const/16 v1, 0xb

    invoke-virtual {p1, v0, v1}, Lcom/tencent/bugly/proguard/l;->a(II)V

    return-void
.end method

.method public final a(Ljava/lang/StringBuilder;I)V
    .locals 2

    .line 298
    new-instance v0, Lcom/tencent/bugly/proguard/i;

    invoke-direct {v0, p1, p2}, Lcom/tencent/bugly/proguard/i;-><init>(Ljava/lang/StringBuilder;I)V

    .line 299
    iget-boolean p1, p0, Lcom/tencent/bugly/proguard/bt;->a:Z

    const-string p2, "enable"

    invoke-virtual {v0, p1, p2}, Lcom/tencent/bugly/proguard/i;->a(ZLjava/lang/String;)Lcom/tencent/bugly/proguard/i;

    .line 300
    iget-boolean p1, p0, Lcom/tencent/bugly/proguard/bt;->b:Z

    const-string p2, "enableUserInfo"

    invoke-virtual {v0, p1, p2}, Lcom/tencent/bugly/proguard/i;->a(ZLjava/lang/String;)Lcom/tencent/bugly/proguard/i;

    .line 301
    iget-boolean p1, p0, Lcom/tencent/bugly/proguard/bt;->c:Z

    const-string p2, "enableQuery"

    invoke-virtual {v0, p1, p2}, Lcom/tencent/bugly/proguard/i;->a(ZLjava/lang/String;)Lcom/tencent/bugly/proguard/i;

    .line 302
    iget-object p1, p0, Lcom/tencent/bugly/proguard/bt;->d:Ljava/lang/String;

    const-string p2, "url"

    invoke-virtual {v0, p1, p2}, Lcom/tencent/bugly/proguard/i;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tencent/bugly/proguard/i;

    .line 303
    iget-object p1, p0, Lcom/tencent/bugly/proguard/bt;->e:Ljava/lang/String;

    const-string p2, "expUrl"

    invoke-virtual {v0, p1, p2}, Lcom/tencent/bugly/proguard/i;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tencent/bugly/proguard/i;

    .line 304
    iget-object p1, p0, Lcom/tencent/bugly/proguard/bt;->f:Lcom/tencent/bugly/proguard/bs;

    const-string p2, "security"

    invoke-virtual {v0, p1, p2}, Lcom/tencent/bugly/proguard/i;->a(Lcom/tencent/bugly/proguard/m;Ljava/lang/String;)Lcom/tencent/bugly/proguard/i;

    .line 305
    iget-object p1, p0, Lcom/tencent/bugly/proguard/bt;->g:Ljava/util/Map;

    const-string p2, "valueMap"

    invoke-virtual {v0, p1, p2}, Lcom/tencent/bugly/proguard/i;->a(Ljava/util/Map;Ljava/lang/String;)Lcom/tencent/bugly/proguard/i;

    .line 306
    iget-wide p1, p0, Lcom/tencent/bugly/proguard/bt;->h:J

    const-string v1, "strategylastUpdateTime"

    invoke-virtual {v0, p1, p2, v1}, Lcom/tencent/bugly/proguard/i;->a(JLjava/lang/String;)Lcom/tencent/bugly/proguard/i;

    .line 307
    iget-object p1, p0, Lcom/tencent/bugly/proguard/bt;->i:Ljava/lang/String;

    const-string p2, "httpsUrl"

    invoke-virtual {v0, p1, p2}, Lcom/tencent/bugly/proguard/i;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tencent/bugly/proguard/i;

    .line 308
    iget-object p1, p0, Lcom/tencent/bugly/proguard/bt;->j:Ljava/lang/String;

    const-string p2, "httpsExpUrl"

    invoke-virtual {v0, p1, p2}, Lcom/tencent/bugly/proguard/i;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tencent/bugly/proguard/i;

    .line 309
    iget p1, p0, Lcom/tencent/bugly/proguard/bt;->k:I

    const-string p2, "eventRecordCount"

    invoke-virtual {v0, p1, p2}, Lcom/tencent/bugly/proguard/i;->a(ILjava/lang/String;)Lcom/tencent/bugly/proguard/i;

    .line 310
    iget p1, p0, Lcom/tencent/bugly/proguard/bt;->l:I

    const-string p2, "eventTimeInterval"

    invoke-virtual {v0, p1, p2}, Lcom/tencent/bugly/proguard/i;->a(ILjava/lang/String;)Lcom/tencent/bugly/proguard/i;

    return-void
.end method

.method public final clone()Ljava/lang/Object;
    .locals 1

    .line 225
    :try_start_0
    invoke-super {p0}, Ljava/lang/Object;->clone()Ljava/lang/Object;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/CloneNotSupportedException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    .line 229
    :catch_0
    sget-boolean v0, Lcom/tencent/bugly/proguard/bt;->o:Z

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    :goto_0
    return-object v0

    :cond_0
    new-instance v0, Ljava/lang/AssertionError;

    invoke-direct {v0}, Ljava/lang/AssertionError;-><init>()V

    throw v0
.end method

.method public final equals(Ljava/lang/Object;)Z
    .locals 5

    const/4 v0, 0x0

    if-nez p1, :cond_0

    return v0

    .line 192
    :cond_0
    check-cast p1, Lcom/tencent/bugly/proguard/bt;

    .line 193
    iget-boolean v1, p0, Lcom/tencent/bugly/proguard/bt;->a:Z

    iget-boolean v2, p1, Lcom/tencent/bugly/proguard/bt;->a:Z

    .line 194
    invoke-static {v1, v2}, Lcom/tencent/bugly/proguard/n;->a(ZZ)Z

    move-result v1

    if-eqz v1, :cond_1

    iget-boolean v1, p0, Lcom/tencent/bugly/proguard/bt;->b:Z

    iget-boolean v2, p1, Lcom/tencent/bugly/proguard/bt;->b:Z

    .line 195
    invoke-static {v1, v2}, Lcom/tencent/bugly/proguard/n;->a(ZZ)Z

    move-result v1

    if-eqz v1, :cond_1

    iget-boolean v1, p0, Lcom/tencent/bugly/proguard/bt;->c:Z

    iget-boolean v2, p1, Lcom/tencent/bugly/proguard/bt;->c:Z

    .line 196
    invoke-static {v1, v2}, Lcom/tencent/bugly/proguard/n;->a(ZZ)Z

    move-result v1

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/tencent/bugly/proguard/bt;->d:Ljava/lang/String;

    iget-object v2, p1, Lcom/tencent/bugly/proguard/bt;->d:Ljava/lang/String;

    .line 197
    invoke-static {v1, v2}, Lcom/tencent/bugly/proguard/n;->a(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/tencent/bugly/proguard/bt;->e:Ljava/lang/String;

    iget-object v2, p1, Lcom/tencent/bugly/proguard/bt;->e:Ljava/lang/String;

    .line 198
    invoke-static {v1, v2}, Lcom/tencent/bugly/proguard/n;->a(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/tencent/bugly/proguard/bt;->f:Lcom/tencent/bugly/proguard/bs;

    iget-object v2, p1, Lcom/tencent/bugly/proguard/bt;->f:Lcom/tencent/bugly/proguard/bs;

    .line 199
    invoke-static {v1, v2}, Lcom/tencent/bugly/proguard/n;->a(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/tencent/bugly/proguard/bt;->g:Ljava/util/Map;

    iget-object v2, p1, Lcom/tencent/bugly/proguard/bt;->g:Ljava/util/Map;

    .line 200
    invoke-static {v1, v2}, Lcom/tencent/bugly/proguard/n;->a(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    iget-wide v1, p0, Lcom/tencent/bugly/proguard/bt;->h:J

    iget-wide v3, p1, Lcom/tencent/bugly/proguard/bt;->h:J

    .line 201
    invoke-static {v1, v2, v3, v4}, Lcom/tencent/bugly/proguard/n;->a(JJ)Z

    move-result v1

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/tencent/bugly/proguard/bt;->i:Ljava/lang/String;

    iget-object v2, p1, Lcom/tencent/bugly/proguard/bt;->i:Ljava/lang/String;

    .line 202
    invoke-static {v1, v2}, Lcom/tencent/bugly/proguard/n;->a(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/tencent/bugly/proguard/bt;->j:Ljava/lang/String;

    iget-object v2, p1, Lcom/tencent/bugly/proguard/bt;->j:Ljava/lang/String;

    .line 203
    invoke-static {v1, v2}, Lcom/tencent/bugly/proguard/n;->a(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    iget v1, p0, Lcom/tencent/bugly/proguard/bt;->k:I

    iget v2, p1, Lcom/tencent/bugly/proguard/bt;->k:I

    .line 204
    invoke-static {v1, v2}, Lcom/tencent/bugly/proguard/n;->a(II)Z

    move-result v1

    if-eqz v1, :cond_1

    iget v1, p0, Lcom/tencent/bugly/proguard/bt;->l:I

    iget p1, p1, Lcom/tencent/bugly/proguard/bt;->l:I

    .line 205
    invoke-static {v1, p1}, Lcom/tencent/bugly/proguard/n;->a(II)Z

    move-result p1

    if-eqz p1, :cond_1

    const/4 p1, 0x1

    return p1

    :cond_1
    return v0
.end method

.method public final hashCode()I
    .locals 2

    .line 212
    :try_start_0
    new-instance v0, Ljava/lang/Exception;

    const-string v1, "Need define key first!"

    invoke-direct {v0, v1}, Ljava/lang/Exception;-><init>(Ljava/lang/String;)V

    throw v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    move-exception v0

    .line 216
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    const/4 v0, 0x0

    return v0
.end method
