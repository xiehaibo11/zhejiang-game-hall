.class public Lcom/tkay/expressad/video/signal/a/j;
.super Lcom/tkay/expressad/video/signal/a/c;


# static fields
.field private static final t:Ljava/lang/String;

.field private static final y:Ljava/lang/String; = "camp_position"


# instance fields
.field private A:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;"
        }
    .end annotation
.end field

.field private B:I

.field private C:Ljava/lang/String;

.field private D:Ljava/lang/String;

.field private E:Z

.field private F:Z

.field private G:Z

.field private u:Landroid/app/Activity;

.field private v:Ljava/lang/String;

.field private w:Ljava/lang/String;

.field private x:Landroid/content/Context;

.field private z:Lcom/tkay/expressad/foundation/d/c;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 46
    const-class v0, Lcom/tkay/expressad/video/signal/a/j;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/expressad/video/signal/a/j;->t:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;Lcom/tkay/expressad/foundation/d/c;)V
    .locals 1

    .line 94
    invoke-direct {p0}, Lcom/tkay/expressad/video/signal/a/c;-><init>()V

    const-string v0, ""

    .line 75
    iput-object v0, p0, Lcom/tkay/expressad/video/signal/a/j;->C:Ljava/lang/String;

    .line 76
    iput-object v0, p0, Lcom/tkay/expressad/video/signal/a/j;->D:Ljava/lang/String;

    const/4 v0, 0x0

    .line 77
    iput-boolean v0, p0, Lcom/tkay/expressad/video/signal/a/j;->E:Z

    .line 78
    iput-boolean v0, p0, Lcom/tkay/expressad/video/signal/a/j;->F:Z

    const/4 v0, 0x1

    .line 88
    iput-boolean v0, p0, Lcom/tkay/expressad/video/signal/a/j;->G:Z

    .line 95
    iput-object p1, p0, Lcom/tkay/expressad/video/signal/a/j;->u:Landroid/app/Activity;

    .line 96
    iput-object p2, p0, Lcom/tkay/expressad/video/signal/a/j;->z:Lcom/tkay/expressad/foundation/d/c;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;Lcom/tkay/expressad/foundation/d/c;Ljava/util/List;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/app/Activity;",
            "Lcom/tkay/expressad/foundation/d/c;",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;)V"
        }
    .end annotation

    .line 99
    invoke-direct {p0}, Lcom/tkay/expressad/video/signal/a/c;-><init>()V

    const-string v0, ""

    .line 75
    iput-object v0, p0, Lcom/tkay/expressad/video/signal/a/j;->C:Ljava/lang/String;

    .line 76
    iput-object v0, p0, Lcom/tkay/expressad/video/signal/a/j;->D:Ljava/lang/String;

    const/4 v0, 0x0

    .line 77
    iput-boolean v0, p0, Lcom/tkay/expressad/video/signal/a/j;->E:Z

    .line 78
    iput-boolean v0, p0, Lcom/tkay/expressad/video/signal/a/j;->F:Z

    const/4 v0, 0x1

    .line 88
    iput-boolean v0, p0, Lcom/tkay/expressad/video/signal/a/j;->G:Z

    .line 100
    iput-object p1, p0, Lcom/tkay/expressad/video/signal/a/j;->u:Landroid/app/Activity;

    .line 101
    iput-object p2, p0, Lcom/tkay/expressad/video/signal/a/j;->z:Lcom/tkay/expressad/foundation/d/c;

    .line 102
    iput-object p3, p0, Lcom/tkay/expressad/video/signal/a/j;->A:Ljava/util/List;

    return-void
.end method

.method private static A()Lorg/json/JSONObject;
    .locals 3

    .line 675
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 677
    :try_start_0
    new-instance v1, Lcom/tkay/expressad/foundation/h/c;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v1, v2}, Lcom/tkay/expressad/foundation/h/c;-><init>(Landroid/content/Context;)V

    const-string v2, "device"

    .line 678
    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/h/c;->a()Lorg/json/JSONObject;

    move-result-object v1

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 680
    invoke-virtual {v1}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    return-object v0
.end method

.method private B()Lorg/json/JSONObject;
    .locals 4

    .line 686
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 688
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    const-string v2, "playVideoMute"

    .line 689
    iget v3, p0, Lcom/tkay/expressad/video/signal/a/j;->s:I

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v2, "instanceId"

    .line 690
    iget-object v3, p0, Lcom/tkay/expressad/video/signal/a/j;->C:Ljava/lang/String;

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "sdkSetting"

    .line 691
    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 693
    invoke-virtual {v1}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    return-object v0
.end method

.method private C()Lorg/json/JSONObject;
    .locals 2

    .line 699
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 700
    iget-object v1, p0, Lcom/tkay/expressad/video/signal/a/j;->o:Lcom/tkay/expressad/videocommon/e/d;

    if-eqz v1, :cond_0

    .line 701
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/j;->o:Lcom/tkay/expressad/videocommon/e/d;

    invoke-virtual {v0}, Lcom/tkay/expressad/videocommon/e/d;->R()Lorg/json/JSONObject;

    move-result-object v0

    :cond_0
    return-object v0
.end method

.method private static D()Lorg/json/JSONObject;
    .locals 2

    .line 707
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 708
    invoke-static {}, Lcom/tkay/expressad/videocommon/e/c;->a()Lcom/tkay/expressad/videocommon/e/c;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/videocommon/e/c;->b()Lcom/tkay/expressad/videocommon/e/a;

    move-result-object v1

    if-eqz v1, :cond_0

    .line 710
    invoke-virtual {v1}, Lcom/tkay/expressad/videocommon/e/a;->k()Lorg/json/JSONObject;

    move-result-object v0

    :cond_0
    return-object v0
.end method

.method private static E()Z
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method private a(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;)Lcom/tkay/expressad/foundation/d/c;
    .locals 7

    const-string v0, "deep_link"

    const-string v1, "akdlui"

    .line 228
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_0

    return-object p2

    .line 231
    :cond_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_2

    if-eqz p2, :cond_1

    goto :goto_0

    :cond_1
    const/4 p2, 0x0

    goto/16 :goto_3

    :cond_2
    :goto_0
    const-string v2, "notice"

    .line 232
    invoke-virtual {p1, v2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_9

    .line 234
    :try_start_0
    invoke-static {p2}, Lcom/tkay/expressad/foundation/d/c;->a(Lcom/tkay/expressad/foundation/d/c;)Lorg/json/JSONObject;

    move-result-object v0

    .line 235
    invoke-static {v0}, Lcom/tkay/expressad/foundation/d/c;->b(Lorg/json/JSONObject;)Lcom/tkay/expressad/foundation/d/c;

    move-result-object v1

    if-nez v1, :cond_3

    move-object v1, p2

    .line 239
    :cond_3
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_8

    .line 240
    invoke-static {v0, v1}, Lcom/tkay/expressad/video/signal/a/j;->a(Lorg/json/JSONObject;Lcom/tkay/expressad/foundation/d/c;)V

    .line 241
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 242
    sget-object p1, Lcom/tkay/expressad/foundation/g/a;->ce:Ljava/lang/String;

    invoke-virtual {v0, p1}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p1

    if-eqz p1, :cond_4

    .line 247
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/j;->u:Landroid/app/Activity;

    sget-object v2, Lcom/tkay/expressad/foundation/g/a;->cc:Ljava/lang/String;

    invoke-virtual {p1, v2}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    int-to-float v2, v2

    invoke-static {v0, v2}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v0

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    .line 248
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/j;->u:Landroid/app/Activity;

    sget-object v2, Lcom/tkay/expressad/foundation/g/a;->cd:Ljava/lang/String;

    invoke-virtual {p1, v2}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    int-to-float v2, v2

    invoke-static {v0, v2}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v0

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    .line 250
    :cond_4
    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->ad()Ljava/lang/String;

    move-result-object v0

    .line 251
    invoke-virtual {v1, v0}, Lcom/tkay/expressad/foundation/d/c;->p(Ljava/lang/String;)V

    .line 253
    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->ah()Ljava/lang/String;

    move-result-object v0

    if-eqz p1, :cond_8

    .line 255
    invoke-virtual {p1}, Lorg/json/JSONObject;->keys()Ljava/util/Iterator;

    move-result-object v2

    .line 256
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    .line 257
    :goto_1
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_7

    const-string v4, "&"

    .line 258
    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 259
    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    .line 260
    invoke-virtual {p1, v4}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    .line 261
    sget-object v6, Lcom/tkay/expressad/foundation/g/a;->cc:Ljava/lang/String;

    invoke-virtual {v6, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-nez v6, :cond_5

    sget-object v6, Lcom/tkay/expressad/foundation/g/a;->cd:Ljava/lang/String;

    invoke-virtual {v6, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_6

    .line 262
    :cond_5
    iget-object v6, p0, Lcom/tkay/expressad/video/signal/a/j;->u:Landroid/app/Activity;

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/Integer;->intValue()I

    move-result v5

    int-to-float v5, v5

    invoke-static {v6, v5}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v5

    invoke-static {v5}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v5

    .line 264
    :cond_6
    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "="

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_1

    .line 266
    :cond_7
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 267
    invoke-virtual {v1, p1}, Lcom/tkay/expressad/foundation/d/c;->q(Ljava/lang/String;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_8
    move-object p2, v1

    goto :goto_3

    :catchall_0
    move-exception p1

    .line 275
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    goto :goto_3

    :catch_0
    move-exception p1

    .line 272
    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    goto :goto_3

    .line 281
    :cond_9
    :try_start_1
    invoke-static {p2}, Lcom/tkay/expressad/foundation/d/c;->a(Lcom/tkay/expressad/foundation/d/c;)Lorg/json/JSONObject;

    move-result-object v2

    .line 282
    new-instance v3, Lorg/json/JSONObject;

    invoke-direct {v3, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 283
    invoke-virtual {v3, v1}, Lorg/json/JSONObject;->opt(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_2

    const-string v4, ""

    if-nez p1, :cond_a

    .line 284
    :try_start_2
    invoke-virtual {v3, v1, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_2
    .catch Lorg/json/JSONException; {:try_start_2 .. :try_end_2} :catch_2

    .line 288
    :cond_a
    :try_start_3
    invoke-virtual {v3, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result p1

    if-nez p1, :cond_b

    .line 289
    invoke-virtual {v2, v0, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_1
    .catch Lorg/json/JSONException; {:try_start_3 .. :try_end_3} :catch_2

    .line 294
    :catch_1
    :cond_b
    :try_start_4
    invoke-virtual {v3}, Lorg/json/JSONObject;->keys()Ljava/util/Iterator;

    move-result-object p1

    .line 297
    :goto_2
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_c

    .line 298
    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    .line 299
    invoke-virtual {v3, v0}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 300
    invoke-virtual {v2, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_2

    .line 302
    :cond_c
    invoke-static {v2}, Lcom/tkay/expressad/foundation/d/c;->b(Lorg/json/JSONObject;)Lcom/tkay/expressad/foundation/d/c;

    move-result-object p1

    .line 303
    invoke-static {v2, p1}, Lcom/tkay/expressad/video/signal/a/j;->a(Lorg/json/JSONObject;Lcom/tkay/expressad/foundation/d/c;)V
    :try_end_4
    .catch Lorg/json/JSONException; {:try_start_4 .. :try_end_4} :catch_2

    move-object p2, p1

    goto :goto_3

    :catch_2
    move-exception p1

    .line 306
    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    :goto_3
    return-object p2
.end method

.method private a(Lorg/json/JSONObject;)V
    .locals 7

    const-string v0, ""

    .line 193
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/b/b;->d()Landroid/content/Context;

    move-result-object v1

    .line 194
    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "Tkay_ConfirmTitle"

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v3, p0, Lcom/tkay/expressad/video/signal/a/j;->n:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2, v0}, Lcom/tkay/expressad/foundation/h/v;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v2

    .line 195
    new-instance v3, Ljava/lang/StringBuilder;

    const-string v4, "Tkay_ConfirmContent"

    invoke-direct {v3, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v4, p0, Lcom/tkay/expressad/video/signal/a/j;->n:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v1, v3, v0}, Lcom/tkay/expressad/foundation/h/v;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v3

    .line 196
    new-instance v4, Ljava/lang/StringBuilder;

    const-string v5, "Tkay_CancelText"

    invoke-direct {v4, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v5, p0, Lcom/tkay/expressad/video/signal/a/j;->n:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v1, v4, v0}, Lcom/tkay/expressad/foundation/h/v;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v4

    .line 197
    new-instance v5, Ljava/lang/StringBuilder;

    const-string v6, "Tkay_ConfirmText"

    invoke-direct {v5, v6}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v6, p0, Lcom/tkay/expressad/video/signal/a/j;->n:Ljava/lang/String;

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v1, v5, v0}, Lcom/tkay/expressad/foundation/h/v;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    .line 198
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    const-string v1, "confirm_title"

    .line 199
    invoke-virtual {p1, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 201
    :cond_0
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    const-string v1, "confirm_description"

    .line 202
    invoke-virtual {p1, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 204
    :cond_1
    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    const-string v1, "confirm_t"

    .line 205
    invoke-virtual {p1, v1, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 207
    :cond_2
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_3

    const-string v1, "confirm_c_play"

    .line 208
    invoke-virtual {p1, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 210
    :cond_3
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_4

    const-string v1, "confirm_c_rv"

    .line 211
    invoke-virtual {p1, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_4
    return-void

    :catch_0
    move-exception p1

    .line 214
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    return-void
.end method

.method private static a(Lorg/json/JSONObject;Lcom/tkay/expressad/foundation/d/c;)V
    .locals 1

    :try_start_0
    const-string v0, "unitId"

    .line 320
    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 321
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 322
    invoke-virtual {p1, p0}, Lcom/tkay/expressad/foundation/d/c;->l(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_0
    return-void

    :catch_0
    move-exception p0

    .line 325
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    return-void
.end method

.method private b(Lcom/tkay/expressad/foundation/d/c;)V
    .locals 4

    .line 481
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->ah()Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x0

    .line 484
    :try_start_0
    invoke-static {v0}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v0

    .line 485
    sget-object v2, Lcom/tkay/expressad/foundation/g/a;->cf:Ljava/lang/String;

    invoke-virtual {v0, v2}, Landroid/net/Uri;->getQueryParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 486
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_0

    .line 487
    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    :cond_0
    move v0, v1

    .line 491
    :goto_0
    iget-object v2, p0, Lcom/tkay/expressad/video/signal/a/j;->r:Lcom/tkay/expressad/video/signal/c$a;

    const/4 v3, 0x2

    if-ne v0, v3, :cond_1

    const/4 v1, 0x1

    :cond_1
    invoke-interface {v2, p1, v1}, Lcom/tkay/expressad/video/signal/c$a;->a(Lcom/tkay/expressad/foundation/d/c;Z)V

    .line 494
    invoke-direct {p0}, Lcom/tkay/expressad/video/signal/a/j;->u()Lcom/tkay/expressad/a/a;

    move-result-object p1

    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/j;->r:Lcom/tkay/expressad/video/signal/c$a;

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/a/a;->a(Lcom/tkay/expressad/out/j$c;)V

    .line 496
    invoke-direct {p0}, Lcom/tkay/expressad/video/signal/a/j;->u()Lcom/tkay/expressad/a/a;

    return-void
.end method

.method private c(Z)V
    .locals 0

    .line 85
    iput-boolean p1, p0, Lcom/tkay/expressad/video/signal/a/j;->G:Z

    return-void
.end method

.method private static c(Lcom/tkay/expressad/foundation/d/c;)Z
    .locals 7

    .line 743
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object v0

    .line 744
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const-wide/16 v1, 0x0

    if-nez v0, :cond_0

    .line 745
    invoke-static {}, Lcom/tkay/expressad/d/b;->a()Lcom/tkay/expressad/d/b;

    invoke-static {}, Lcom/tkay/expressad/d/b;->b()Lcom/tkay/expressad/d/a;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 747
    invoke-virtual {v0}, Lcom/tkay/expressad/d/a;->l()J

    move-result-wide v3

    const-wide/16 v5, 0x3e8

    mul-long/2addr v3, v5

    goto :goto_0

    :cond_0
    move-wide v3, v1

    .line 751
    :goto_0
    invoke-static {}, Lcom/tkay/expressad/videocommon/e/c;->a()Lcom/tkay/expressad/videocommon/e/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/videocommon/e/c;->b()Lcom/tkay/expressad/videocommon/e/a;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 753
    invoke-virtual {v0}, Lcom/tkay/expressad/videocommon/e/a;->c()J

    move-result-wide v1

    :cond_1
    if-eqz p0, :cond_2

    .line 757
    invoke-virtual {p0, v1, v2, v3, v4}, Lcom/tkay/expressad/foundation/d/c;->a(JJ)Z

    move-result p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p0

    :catch_0
    :cond_2
    const/4 p0, 0x0

    return p0
.end method

.method private e(Ljava/lang/String;)V
    .locals 2

    const-string v0, "camp_position"

    .line 386
    iget-object v1, p0, Lcom/tkay/expressad/video/signal/a/j;->z:Lcom/tkay/expressad/foundation/d/c;

    if-nez v1, :cond_0

    return-void

    .line 389
    :cond_0
    iget-object v1, p0, Lcom/tkay/expressad/video/signal/a/j;->A:Ljava/util/List;

    if-nez v1, :cond_1

    return-void

    .line 392
    :cond_1
    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    if-nez v1, :cond_2

    return-void

    .line 396
    :cond_2
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 400
    invoke-virtual {v1, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_3

    .line 401
    invoke-virtual {v1, v0}, Lorg/json/JSONObject;->getInt(Ljava/lang/String;)I

    move-result p1

    .line 402
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/j;->A:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/foundation/d/c;

    iput-object p1, p0, Lcom/tkay/expressad/video/signal/a/j;->z:Lcom/tkay/expressad/foundation/d/c;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    :cond_3
    return-void

    :catch_0
    move-exception p1

    .line 405
    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    return-void
.end method

.method private s()Z
    .locals 1

    .line 81
    iget-boolean v0, p0, Lcom/tkay/expressad/video/signal/a/j;->G:Z

    return v0
.end method

.method private t()Ljava/lang/String;
    .locals 7

    const-string v0, "unit_id"

    .line 140
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    .line 141
    new-instance v2, Lcom/tkay/expressad/foundation/h/c;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v3

    invoke-direct {v2, v3}, Lcom/tkay/expressad/foundation/h/c;-><init>(Landroid/content/Context;)V

    .line 143
    :try_start_0
    iget-object v3, p0, Lcom/tkay/expressad/video/signal/a/j;->n:Ljava/lang/String;

    invoke-virtual {v1, v0, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 144
    new-instance v3, Lorg/json/JSONObject;

    invoke-direct {v3}, Lorg/json/JSONObject;-><init>()V

    const-string v4, "instanceId"

    .line 145
    iget-object v5, p0, Lcom/tkay/expressad/video/signal/a/j;->C:Ljava/lang/String;

    invoke-virtual {v3, v4, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v4, "rootViewInstanceId"

    .line 146
    iget-object v5, p0, Lcom/tkay/expressad/video/signal/a/j;->D:Ljava/lang/String;

    invoke-virtual {v3, v4, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v4, "isRootTemplateWebView"

    .line 147
    iget-boolean v5, p0, Lcom/tkay/expressad/video/signal/a/j;->E:Z

    invoke-virtual {v3, v4, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Z)Lorg/json/JSONObject;

    .line 148
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v5, Lcom/tkay/expressad/out/n;->a:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, ",3.0.1"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const-string v5, "sdk_info"

    .line 149
    invoke-virtual {v1, v5, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v4, "playVideoMute"

    .line 150
    iget v5, p0, Lcom/tkay/expressad/video/signal/a/j;->s:I

    invoke-virtual {v3, v4, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v4, "sdkSetting"

    .line 151
    invoke-virtual {v1, v4, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "device"

    .line 152
    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/h/c;->a()Lorg/json/JSONObject;

    move-result-object v2

    invoke-virtual {v1, v3, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 153
    new-instance v2, Lorg/json/JSONArray;

    invoke-direct {v2}, Lorg/json/JSONArray;-><init>()V

    .line 155
    iget-object v3, p0, Lcom/tkay/expressad/video/signal/a/j;->A:Ljava/util/List;

    if-eqz v3, :cond_0

    iget-object v3, p0, Lcom/tkay/expressad/video/signal/a/j;->A:Ljava/util/List;

    invoke-interface {v3}, Ljava/util/List;->size()I

    move-result v3

    if-lez v3, :cond_0

    .line 156
    iget-object v3, p0, Lcom/tkay/expressad/video/signal/a/j;->A:Ljava/util/List;

    invoke-interface {v3}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v3

    :goto_0
    invoke-interface {v3}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_1

    invoke-interface {v3}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/tkay/expressad/foundation/d/c;

    .line 157
    invoke-virtual {v4}, Lcom/tkay/expressad/foundation/d/c;->at()Z

    move-result v5

    invoke-static {v4}, Lcom/tkay/expressad/video/signal/a/j;->c(Lcom/tkay/expressad/foundation/d/c;)Z

    move-result v6

    invoke-static {v4, v5, v6}, Lcom/tkay/expressad/foundation/d/c;->a(Lcom/tkay/expressad/foundation/d/c;ZZ)Lorg/json/JSONObject;

    move-result-object v4

    invoke-virtual {v2, v4}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    goto :goto_0

    .line 160
    :cond_0
    iget-object v3, p0, Lcom/tkay/expressad/video/signal/a/j;->z:Lcom/tkay/expressad/foundation/d/c;

    invoke-static {v3}, Lcom/tkay/expressad/foundation/d/c;->a(Lcom/tkay/expressad/foundation/d/c;)Lorg/json/JSONObject;

    move-result-object v3

    invoke-virtual {v2, v3}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    :cond_1
    const-string v3, "campaignList"

    .line 162
    invoke-virtual {v1, v3, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 163
    invoke-direct {p0}, Lcom/tkay/expressad/video/signal/a/j;->C()Lorg/json/JSONObject;

    move-result-object v2

    const-string v3, "unitSetting"

    .line 164
    invoke-virtual {v1, v3, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 165
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object v2

    .line 166
    invoke-static {}, Lcom/tkay/expressad/d/b;->a()Lcom/tkay/expressad/d/b;

    invoke-static {v2}, Lcom/tkay/expressad/d/b;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 167
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_3

    .line 168
    new-instance v3, Lorg/json/JSONObject;

    invoke-direct {v3, v2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 169
    invoke-direct {p0, v3}, Lcom/tkay/expressad/video/signal/a/j;->a(Lorg/json/JSONObject;)V

    .line 170
    invoke-static {}, Lcom/tkay/expressad/d/b;->a()Lcom/tkay/expressad/d/b;

    iget-object v2, p0, Lcom/tkay/expressad/video/signal/a/j;->n:Ljava/lang/String;

    invoke-static {v2}, Lcom/tkay/expressad/d/b;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 171
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_2

    .line 172
    new-instance v4, Lorg/json/JSONObject;

    invoke-direct {v4, v2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string v2, "ivreward"

    .line 173
    invoke-virtual {v3, v2, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_2
    const-string v2, "appSetting"

    .line 175
    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_3
    const-string v2, "rewardSetting"

    .line 178
    invoke-static {}, Lcom/tkay/expressad/video/signal/a/j;->D()Lorg/json/JSONObject;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 180
    iget-object v2, p0, Lcom/tkay/expressad/video/signal/a/j;->n:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_4

    .line 181
    iget-object v2, p0, Lcom/tkay/expressad/video/signal/a/j;->n:Ljava/lang/String;

    invoke-virtual {v1, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_4
    const-string v0, "rw_plus"

    .line 183
    iget-boolean v2, p0, Lcom/tkay/expressad/video/signal/a/j;->F:Z

    if-eqz v2, :cond_5

    const-string v2, "1"

    goto :goto_1

    :cond_5
    const-string v2, "0"

    :goto_1
    invoke-virtual {v1, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_2

    :catchall_0
    move-exception v0

    .line 185
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 187
    :goto_2
    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method private u()Lcom/tkay/expressad/a/a;
    .locals 3

    .line 558
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/j;->q:Lcom/tkay/expressad/a/a;

    if-nez v0, :cond_0

    .line 559
    new-instance v0, Lcom/tkay/expressad/a/a;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/video/signal/a/j;->n:Ljava/lang/String;

    invoke-direct {v0, v1, v2}, Lcom/tkay/expressad/a/a;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    iput-object v0, p0, Lcom/tkay/expressad/video/signal/a/j;->q:Lcom/tkay/expressad/a/a;

    .line 561
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/j;->q:Lcom/tkay/expressad/a/a;

    return-object v0
.end method

.method private v()Lorg/json/JSONObject;
    .locals 5

    .line 594
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 595
    new-instance v1, Lcom/tkay/expressad/foundation/h/c;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v1, v2}, Lcom/tkay/expressad/foundation/h/c;-><init>(Landroid/content/Context;)V

    .line 597
    :try_start_0
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    const-string v3, "playVideoMute"

    .line 598
    iget v4, p0, Lcom/tkay/expressad/video/signal/a/j;->s:I

    invoke-virtual {v2, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v3, "sdkSetting"

    .line 599
    invoke-virtual {v0, v3, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "device"

    .line 600
    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/h/c;->a()Lorg/json/JSONObject;

    move-result-object v1

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 601
    new-instance v1, Lorg/json/JSONArray;

    invoke-direct {v1}, Lorg/json/JSONArray;-><init>()V

    .line 602
    iget-object v2, p0, Lcom/tkay/expressad/video/signal/a/j;->z:Lcom/tkay/expressad/foundation/d/c;

    invoke-static {v2}, Lcom/tkay/expressad/foundation/d/c;->a(Lcom/tkay/expressad/foundation/d/c;)Lorg/json/JSONObject;

    move-result-object v2

    invoke-virtual {v1, v2}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    const-string v2, "campaignList"

    .line 603
    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 604
    invoke-direct {p0}, Lcom/tkay/expressad/video/signal/a/j;->C()Lorg/json/JSONObject;

    move-result-object v1

    const-string v2, "unitSetting"

    .line 605
    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 606
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object v1

    .line 607
    invoke-static {}, Lcom/tkay/expressad/d/b;->a()Lcom/tkay/expressad/d/b;

    invoke-static {v1}, Lcom/tkay/expressad/d/b;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 608
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_1

    .line 609
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2, v1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 610
    invoke-direct {p0, v2}, Lcom/tkay/expressad/video/signal/a/j;->a(Lorg/json/JSONObject;)V

    .line 611
    invoke-static {}, Lcom/tkay/expressad/d/b;->a()Lcom/tkay/expressad/d/b;

    iget-object v1, p0, Lcom/tkay/expressad/video/signal/a/j;->n:Ljava/lang/String;

    invoke-static {v1}, Lcom/tkay/expressad/d/b;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 612
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_0

    const-string v3, "ivreward"

    .line 613
    invoke-virtual {v2, v3, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_0
    const-string v1, "appSetting"

    .line 615
    invoke-virtual {v2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_1
    const-string v1, "rewardSetting"

    .line 617
    invoke-static {}, Lcom/tkay/expressad/video/signal/a/j;->D()Lorg/json/JSONObject;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    .line 619
    invoke-virtual {v1}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_0
    return-object v0
.end method

.method private static w()Lorg/json/JSONObject;
    .locals 4

    .line 625
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v1, "sdk_info"

    .line 627
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v3, Lcom/tkay/expressad/out/n;->a:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, ",3.0.1"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 629
    invoke-virtual {v1}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    return-object v0
.end method

.method private x()Lorg/json/JSONObject;
    .locals 3

    .line 635
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 637
    :try_start_0
    iget-object v1, p0, Lcom/tkay/expressad/video/signal/a/j;->n:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    const-string v1, "unit_id"

    .line 638
    iget-object v2, p0, Lcom/tkay/expressad/video/signal/a/j;->n:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 641
    invoke-virtual {v1}, Lorg/json/JSONException;->printStackTrace()V

    :cond_0
    :goto_0
    return-object v0
.end method

.method private static y()Lorg/json/JSONObject;
    .locals 4

    .line 647
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 649
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object v1

    .line 650
    invoke-static {}, Lcom/tkay/expressad/d/b;->a()Lcom/tkay/expressad/d/b;

    invoke-static {v1}, Lcom/tkay/expressad/d/b;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 651
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_0

    const-string v2, "appSetting"

    .line 652
    new-instance v3, Lorg/json/JSONObject;

    invoke-direct {v3, v1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 655
    invoke-virtual {v1}, Lorg/json/JSONException;->printStackTrace()V

    :catchall_0
    :cond_0
    :goto_0
    return-object v0
.end method

.method private z()Lorg/json/JSONObject;
    .locals 3

    .line 663
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 665
    :try_start_0
    iget-object v1, p0, Lcom/tkay/expressad/video/signal/a/j;->o:Lcom/tkay/expressad/videocommon/e/d;

    if-eqz v1, :cond_0

    const-string v1, "unitSetting"

    .line 666
    iget-object v2, p0, Lcom/tkay/expressad/video/signal/a/j;->o:Lcom/tkay/expressad/videocommon/e/d;

    invoke-virtual {v2}, Lcom/tkay/expressad/videocommon/e/d;->R()Lorg/json/JSONObject;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 669
    invoke-virtual {v1}, Lorg/json/JSONException;->printStackTrace()V

    :cond_0
    :goto_0
    return-object v0
.end method


# virtual methods
.method public final a(ILjava/lang/String;)V
    .locals 11

    const-string v0, "-1"

    const-string v1, "event"

    .line 513
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/a/c;->a(ILjava/lang/String;)V

    const/4 v2, 0x2

    if-eq p1, v2, :cond_0

    goto :goto_0

    .line 517
    :cond_0
    :try_start_0
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 518
    invoke-virtual {p1, v1, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    const-string p2, "template"

    .line 519
    invoke-virtual {p1, p2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    const-string p2, "layout"

    .line 520
    invoke-virtual {p1, p2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    const-string p2, "unit_id"

    .line 521
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/j;->n:Ljava/lang/String;

    invoke-virtual {p1, p2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    .line 522
    iget-object p1, p0, Lcom/tkay/expressad/video/signal/a/j;->u:Landroid/app/Activity;

    invoke-virtual {p1}, Landroid/app/Activity;->getApplication()Landroid/app/Application;

    invoke-static {}, Lcom/tkay/expressad/foundation/h/k;->a()I

    move-result v9

    .line 523
    new-instance v2, Lcom/tkay/expressad/foundation/d/r;

    const-string v3, "2000039"

    iget-object p1, p0, Lcom/tkay/expressad/video/signal/a/j;->z:Lcom/tkay/expressad/foundation/d/c;

    .line 525
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v8

    iget-object p1, p0, Lcom/tkay/expressad/video/signal/a/j;->u:Landroid/app/Activity;

    invoke-virtual {p1}, Landroid/app/Activity;->getApplication()Landroid/app/Application;

    move-result-object p1

    invoke-static {p1, v9}, Lcom/tkay/expressad/foundation/h/k;->a(Landroid/content/Context;I)Ljava/lang/String;

    move-result-object v10

    invoke-direct/range {v2 .. v10}, Lcom/tkay/expressad/foundation/d/r;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :goto_0
    return-void

    :catchall_0
    move-exception p1

    .line 533
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public final a(Landroid/app/Activity;)V
    .locals 0

    .line 736
    iput-object p1, p0, Lcom/tkay/expressad/video/signal/a/j;->u:Landroid/app/Activity;

    return-void
.end method

.method public final a(Landroid/content/Context;)V
    .locals 0

    .line 766
    iput-object p1, p0, Lcom/tkay/expressad/video/signal/a/j;->x:Landroid/content/Context;

    return-void
.end method

.method public final a(Lcom/tkay/expressad/foundation/d/c;)V
    .locals 0

    .line 57
    iput-object p1, p0, Lcom/tkay/expressad/video/signal/a/j;->z:Lcom/tkay/expressad/foundation/d/c;

    return-void
.end method

.method public final a(Ljava/util/List;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;)V"
        }
    .end annotation

    .line 66
    iput-object p1, p0, Lcom/tkay/expressad/video/signal/a/j;->A:Ljava/util/List;

    return-void
.end method

.method public final b(Ljava/lang/String;)V
    .locals 1

    .line 776
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 777
    iput-object p1, p0, Lcom/tkay/expressad/video/signal/a/j;->w:Ljava/lang/String;

    :cond_0
    return-void
.end method

.method public final b(Z)V
    .locals 0

    .line 126
    iput-boolean p1, p0, Lcom/tkay/expressad/video/signal/a/j;->F:Z

    return-void
.end method

.method public final c(Ljava/lang/String;)V
    .locals 0

    .line 110
    iput-object p1, p0, Lcom/tkay/expressad/video/signal/a/j;->C:Ljava/lang/String;

    return-void
.end method

.method public click(ILjava/lang/String;)V
    .locals 4

    const-string v0, "camp_position"

    .line 331
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/a/c;->click(ILjava/lang/String;)V

    .line 333
    iget-object v1, p0, Lcom/tkay/expressad/video/signal/a/j;->z:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v1, :cond_0

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->k()I

    move-result v1

    const/4 v2, 0x5

    if-ne v1, v2, :cond_0

    .line 1386
    iget-object v1, p0, Lcom/tkay/expressad/video/signal/a/j;->z:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v1, :cond_0

    .line 1389
    iget-object v1, p0, Lcom/tkay/expressad/video/signal/a/j;->A:Ljava/util/List;

    if-eqz v1, :cond_0

    .line 1392
    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    if-eqz v1, :cond_0

    .line 1396
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 1400
    invoke-virtual {v1, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 1401
    invoke-virtual {v1, v0}, Lorg/json/JSONObject;->getInt(Ljava/lang/String;)I

    move-result v0

    .line 1402
    iget-object v1, p0, Lcom/tkay/expressad/video/signal/a/j;->A:Ljava/util/List;

    invoke-interface {v1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/foundation/d/c;

    iput-object v0, p0, Lcom/tkay/expressad/video/signal/a/j;->z:Lcom/tkay/expressad/foundation/d/c;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 1405
    invoke-virtual {v0}, Lorg/json/JSONException;->printStackTrace()V

    :cond_0
    :goto_0
    const/4 v0, 0x1

    if-eq p1, v0, :cond_5

    const/4 v1, 0x3

    if-eq p1, v1, :cond_1

    goto :goto_2

    .line 361
    :cond_1
    :try_start_1
    iget-object p1, p0, Lcom/tkay/expressad/video/signal/a/j;->z:Lcom/tkay/expressad/foundation/d/c;

    if-eqz p1, :cond_2

    iget-object p1, p0, Lcom/tkay/expressad/video/signal/a/j;->z:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->g()I

    move-result p1

    const/4 v1, -0x2

    if-le p1, v1, :cond_2

    .line 362
    iget-object p1, p0, Lcom/tkay/expressad/video/signal/a/j;->z:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->g()I

    move-result p1

    goto :goto_1

    .line 363
    :cond_2
    iget-object p1, p0, Lcom/tkay/expressad/video/signal/a/j;->o:Lcom/tkay/expressad/videocommon/e/d;

    if-eqz p1, :cond_3

    .line 364
    iget-object p1, p0, Lcom/tkay/expressad/video/signal/a/j;->o:Lcom/tkay/expressad/videocommon/e/d;

    invoke-virtual {p1}, Lcom/tkay/expressad/videocommon/e/d;->p()I

    move-result p1

    goto :goto_1

    :cond_3
    move p1, v0

    :goto_1
    const/4 v1, -0x1

    if-ne p1, v1, :cond_4

    .line 367
    new-instance p1, Lcom/tkay/expressad/video/signal/a/c$b;

    iget-object v1, p0, Lcom/tkay/expressad/video/signal/a/j;->r:Lcom/tkay/expressad/video/signal/c$a;

    invoke-direct {p1, p0, v1}, Lcom/tkay/expressad/video/signal/a/c$b;-><init>(Lcom/tkay/expressad/video/signal/c;Lcom/tkay/expressad/video/signal/c$a;)V

    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/signal/a/j;->a(Lcom/tkay/expressad/video/signal/c$a;)V

    .line 369
    :cond_4
    invoke-virtual {p0, v0, p2}, Lcom/tkay/expressad/video/signal/a/j;->click(ILjava/lang/String;)V

    :goto_2
    return-void

    .line 339
    :cond_5
    iget-object p1, p0, Lcom/tkay/expressad/video/signal/a/j;->z:Lcom/tkay/expressad/foundation/d/c;

    const/4 v1, 0x0

    if-nez p1, :cond_6

    iget-object p1, p0, Lcom/tkay/expressad/video/signal/a/j;->A:Ljava/util/List;

    if-eqz p1, :cond_6

    iget-object p1, p0, Lcom/tkay/expressad/video/signal/a/j;->A:Ljava/util/List;

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result p1

    if-lez p1, :cond_6

    .line 340
    iget-object p1, p0, Lcom/tkay/expressad/video/signal/a/j;->A:Ljava/util/List;

    invoke-interface {p1, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/foundation/d/c;

    iput-object p1, p0, Lcom/tkay/expressad/video/signal/a/j;->z:Lcom/tkay/expressad/foundation/d/c;

    .line 342
    :cond_6
    iget-object p1, p0, Lcom/tkay/expressad/video/signal/a/j;->z:Lcom/tkay/expressad/foundation/d/c;

    if-nez p1, :cond_7

    return-void

    .line 345
    :cond_7
    iget-object p1, p0, Lcom/tkay/expressad/video/signal/a/j;->z:Lcom/tkay/expressad/foundation/d/c;

    invoke-direct {p0, p2, p1}, Lcom/tkay/expressad/video/signal/a/j;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;)Lcom/tkay/expressad/foundation/d/c;

    move-result-object p1

    .line 1481
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->ah()Ljava/lang/String;

    move-result-object p2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    .line 1484
    :try_start_2
    invoke-static {p2}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p2

    .line 1485
    sget-object v2, Lcom/tkay/expressad/foundation/g/a;->cf:Ljava/lang/String;

    invoke-virtual {p2, v2}, Landroid/net/Uri;->getQueryParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    .line 1486
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_8

    .line 1487
    invoke-static {p2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p2
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_3

    :catchall_0
    :cond_8
    move p2, v1

    .line 1491
    :goto_3
    :try_start_3
    iget-object v2, p0, Lcom/tkay/expressad/video/signal/a/j;->r:Lcom/tkay/expressad/video/signal/c$a;

    const/4 v3, 0x2

    if-ne p2, v3, :cond_9

    goto :goto_4

    :cond_9
    move v0, v1

    :goto_4
    invoke-interface {v2, p1, v0}, Lcom/tkay/expressad/video/signal/c$a;->a(Lcom/tkay/expressad/foundation/d/c;Z)V

    .line 1494
    invoke-direct {p0}, Lcom/tkay/expressad/video/signal/a/j;->u()Lcom/tkay/expressad/a/a;

    move-result-object p1

    iget-object p2, p0, Lcom/tkay/expressad/video/signal/a/j;->r:Lcom/tkay/expressad/video/signal/c$a;

    invoke-virtual {p1, p2}, Lcom/tkay/expressad/a/a;->a(Lcom/tkay/expressad/out/j$c;)V

    .line 1496
    invoke-direct {p0}, Lcom/tkay/expressad/video/signal/a/j;->u()Lcom/tkay/expressad/a/a;
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    return-void

    :catchall_1
    move-exception p1

    .line 376
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public final d(Ljava/lang/String;)V
    .locals 0

    .line 114
    iput-object p1, p0, Lcom/tkay/expressad/video/signal/a/j;->D:Ljava/lang/String;

    return-void
.end method

.method public final h(I)Ljava/lang/String;
    .locals 0

    packed-switch p1, :pswitch_data_0

    .line 587
    invoke-direct {p0}, Lcom/tkay/expressad/video/signal/a/j;->v()Lorg/json/JSONObject;

    move-result-object p1

    invoke-virtual {p1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    goto :goto_0

    .line 584
    :pswitch_0
    invoke-direct {p0}, Lcom/tkay/expressad/video/signal/a/j;->B()Lorg/json/JSONObject;

    move-result-object p1

    invoke-virtual {p1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    goto :goto_0

    .line 581
    :pswitch_1
    invoke-static {}, Lcom/tkay/expressad/video/signal/a/j;->A()Lorg/json/JSONObject;

    move-result-object p1

    invoke-virtual {p1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    goto :goto_0

    .line 578
    :pswitch_2
    invoke-direct {p0}, Lcom/tkay/expressad/video/signal/a/j;->z()Lorg/json/JSONObject;

    move-result-object p1

    invoke-virtual {p1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    goto :goto_0

    .line 575
    :pswitch_3
    invoke-static {}, Lcom/tkay/expressad/video/signal/a/j;->y()Lorg/json/JSONObject;

    move-result-object p1

    invoke-virtual {p1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    goto :goto_0

    .line 572
    :pswitch_4
    invoke-direct {p0}, Lcom/tkay/expressad/video/signal/a/j;->x()Lorg/json/JSONObject;

    move-result-object p1

    invoke-virtual {p1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    goto :goto_0

    .line 569
    :pswitch_5
    invoke-static {}, Lcom/tkay/expressad/video/signal/a/j;->w()Lorg/json/JSONObject;

    move-result-object p1

    invoke-virtual {p1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    :goto_0
    return-object p1

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method

.method public handlerH5Exception(ILjava/lang/String;)V
    .locals 1

    .line 503
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/a/c;->handlerH5Exception(ILjava/lang/String;)V

    .line 505
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/j;->r:Lcom/tkay/expressad/video/signal/c$a;

    invoke-interface {v0, p1, p2}, Lcom/tkay/expressad/video/signal/c$a;->a(ILjava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 507
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public final i()Ljava/lang/String;
    .locals 1

    .line 131
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/j;->r:Lcom/tkay/expressad/video/signal/c$a;

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/c$a;->c()V

    const/4 v0, 0x1

    .line 132
    iput-boolean v0, p0, Lcom/tkay/expressad/video/signal/a/j;->e:Z

    .line 133
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/j;->v:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 134
    invoke-direct {p0}, Lcom/tkay/expressad/video/signal/a/j;->t()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/video/signal/a/j;->v:Ljava/lang/String;

    .line 136
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/j;->v:Ljava/lang/String;

    return-object v0
.end method

.method public final j()V
    .locals 1

    .line 547
    invoke-super {p0}, Lcom/tkay/expressad/video/signal/a/c;->j()V

    .line 549
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/j;->u:Landroid/app/Activity;

    if-eqz v0, :cond_0

    .line 550
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/j;->u:Landroid/app/Activity;

    invoke-virtual {v0}, Landroid/app/Activity;->finish()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    return-void

    :catchall_0
    move-exception v0

    .line 553
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public final j(I)V
    .locals 0

    .line 122
    iput p1, p0, Lcom/tkay/expressad/video/signal/a/j;->B:I

    return-void
.end method

.method public final l()V
    .locals 1

    .line 539
    invoke-super {p0}, Lcom/tkay/expressad/video/signal/a/c;->l()V

    .line 540
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/j;->r:Lcom/tkay/expressad/video/signal/c$a;

    if-eqz v0, :cond_0

    .line 541
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/j;->r:Lcom/tkay/expressad/video/signal/c$a;

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/c$a;->d()V

    :cond_0
    return-void
.end method

.method public final o()Ljava/lang/String;
    .locals 1

    .line 784
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/j;->w:Ljava/lang/String;

    return-object v0
.end method

.method public final p()V
    .locals 1

    const/4 v0, 0x1

    .line 91
    iput-boolean v0, p0, Lcom/tkay/expressad/video/signal/a/j;->E:Z

    return-void
.end method

.method public final q()V
    .locals 1

    const-string v0, ""

    .line 106
    iput-object v0, p0, Lcom/tkay/expressad/video/signal/a/j;->v:Ljava/lang/String;

    return-void
.end method

.method public final r()I
    .locals 1

    .line 118
    iget v0, p0, Lcom/tkay/expressad/video/signal/a/j;->B:I

    return v0
.end method
