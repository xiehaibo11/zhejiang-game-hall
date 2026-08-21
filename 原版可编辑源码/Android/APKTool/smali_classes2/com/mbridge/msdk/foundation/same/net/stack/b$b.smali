.class public final Lcom/mbridge/msdk/foundation/same/net/stack/b$b;
.super Ljava/lang/Object;
.source "OKHTTPClientManager.java"

# interfaces
.implements Ljava/io/Serializable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/foundation/same/net/stack/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "b"
.end annotation


# instance fields
.field public a:I

.field public b:J

.field public c:Ljava/lang/String;

.field public d:Ljava/lang/String;

.field public e:Ljava/lang/String;

.field public f:Ljava/lang/String;

.field public g:J

.field public h:Ljava/lang/String;

.field public i:J

.field public j:Ljava/lang/String;

.field public k:J


# direct methods
.method public constructor <init>()V
    .locals 3

    .line 216
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-wide/16 v0, 0x0

    .line 218
    iput-wide v0, p0, Lcom/mbridge/msdk/foundation/same/net/stack/b$b;->b:J

    const-string v2, ""

    .line 219
    iput-object v2, p0, Lcom/mbridge/msdk/foundation/same/net/stack/b$b;->c:Ljava/lang/String;

    .line 220
    iput-object v2, p0, Lcom/mbridge/msdk/foundation/same/net/stack/b$b;->d:Ljava/lang/String;

    .line 222
    iput-object v2, p0, Lcom/mbridge/msdk/foundation/same/net/stack/b$b;->e:Ljava/lang/String;

    .line 223
    iput-object v2, p0, Lcom/mbridge/msdk/foundation/same/net/stack/b$b;->f:Ljava/lang/String;

    .line 224
    iput-wide v0, p0, Lcom/mbridge/msdk/foundation/same/net/stack/b$b;->g:J

    .line 225
    iput-object v2, p0, Lcom/mbridge/msdk/foundation/same/net/stack/b$b;->h:Ljava/lang/String;

    .line 227
    iput-wide v0, p0, Lcom/mbridge/msdk/foundation/same/net/stack/b$b;->i:J

    .line 228
    iput-object v2, p0, Lcom/mbridge/msdk/foundation/same/net/stack/b$b;->j:Ljava/lang/String;

    .line 229
    iput-wide v0, p0, Lcom/mbridge/msdk/foundation/same/net/stack/b$b;->k:J

    return-void
.end method

.method public static a(Lcom/mbridge/msdk/foundation/same/net/stack/b$b;)Lcom/mbridge/msdk/foundation/same/net/stack/b$b;
    .locals 3

    .line 232
    new-instance v0, Lcom/mbridge/msdk/foundation/same/net/stack/b$b;

    invoke-direct {v0}, Lcom/mbridge/msdk/foundation/same/net/stack/b$b;-><init>()V

    .line 234
    iget v1, p0, Lcom/mbridge/msdk/foundation/same/net/stack/b$b;->a:I

    iput v1, v0, Lcom/mbridge/msdk/foundation/same/net/stack/b$b;->a:I

    .line 235
    iget-object v1, p0, Lcom/mbridge/msdk/foundation/same/net/stack/b$b;->d:Ljava/lang/String;

    iput-object v1, v0, Lcom/mbridge/msdk/foundation/same/net/stack/b$b;->d:Ljava/lang/String;

    .line 236
    iget-object v1, p0, Lcom/mbridge/msdk/foundation/same/net/stack/b$b;->f:Ljava/lang/String;

    iput-object v1, v0, Lcom/mbridge/msdk/foundation/same/net/stack/b$b;->f:Ljava/lang/String;

    .line 237
    iget-wide v1, p0, Lcom/mbridge/msdk/foundation/same/net/stack/b$b;->b:J

    iput-wide v1, v0, Lcom/mbridge/msdk/foundation/same/net/stack/b$b;->b:J

    .line 238
    iget-wide v1, p0, Lcom/mbridge/msdk/foundation/same/net/stack/b$b;->i:J

    iput-wide v1, v0, Lcom/mbridge/msdk/foundation/same/net/stack/b$b;->i:J

    .line 239
    iget-object v1, p0, Lcom/mbridge/msdk/foundation/same/net/stack/b$b;->c:Ljava/lang/String;

    iput-object v1, v0, Lcom/mbridge/msdk/foundation/same/net/stack/b$b;->c:Ljava/lang/String;

    .line 241
    iget-object v1, p0, Lcom/mbridge/msdk/foundation/same/net/stack/b$b;->h:Ljava/lang/String;

    iput-object v1, v0, Lcom/mbridge/msdk/foundation/same/net/stack/b$b;->h:Ljava/lang/String;

    .line 242
    iget-wide v1, p0, Lcom/mbridge/msdk/foundation/same/net/stack/b$b;->g:J

    iput-wide v1, v0, Lcom/mbridge/msdk/foundation/same/net/stack/b$b;->g:J

    .line 243
    iget-object v1, p0, Lcom/mbridge/msdk/foundation/same/net/stack/b$b;->e:Ljava/lang/String;

    iput-object v1, v0, Lcom/mbridge/msdk/foundation/same/net/stack/b$b;->e:Ljava/lang/String;

    .line 244
    iget-object v1, p0, Lcom/mbridge/msdk/foundation/same/net/stack/b$b;->j:Ljava/lang/String;

    iput-object v1, v0, Lcom/mbridge/msdk/foundation/same/net/stack/b$b;->j:Ljava/lang/String;

    .line 245
    iget-wide v1, p0, Lcom/mbridge/msdk/foundation/same/net/stack/b$b;->k:J

    iput-wide v1, v0, Lcom/mbridge/msdk/foundation/same/net/stack/b$b;->k:J

    return-object v0
.end method
