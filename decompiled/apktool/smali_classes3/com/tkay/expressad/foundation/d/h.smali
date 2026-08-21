.class public Lcom/tkay/expressad/foundation/d/h;
.super Lcom/tkay/expressad/out/d;

# interfaces
.implements Lcom/tkay/expressad/e/a;
.implements Ljava/io/Serializable;


# static fields
.field public static final cA:Ljava/lang/String; = "adv_id"

.field public static final cB:Ljava/lang/String; = "ttc_type"

.field public static final cC:Ljava/lang/String; = "ttc_ct2"

.field public static final cD:Ljava/lang/String; = "gh_id"

.field public static final cE:Ljava/lang/String; = "gh_path"

.field public static final cF:Ljava/lang/String; = "bind_id"

.field public static final cG:Ljava/lang/String; = "mark"

.field public static final cH:Ljava/lang/String; = "isPost"

.field public static final cI:I = 0x93a80

.field public static final cJ:I = 0x708

.field public static final cK:Ljava/lang/String; = "apk_download_start"

.field public static final cL:Ljava/lang/String; = "apk_download_end"

.field public static final cM:Ljava/lang/String; = "apk_install"

.field public static final cN:Ljava/lang/String; = "loopback"

.field public static final cO:Ljava/lang/String; = "domain"

.field public static final cP:Ljava/lang/String; = "key"

.field public static final cQ:Ljava/lang/String; = "value"

.field public static final co:Ljava/lang/String;

.field public static final cp:Ljava/lang/String; = "apk_alt"

.field public static final cq:Ljava/lang/String; = "disableApkAlt"

.field public static final cr:Ljava/lang/String; = "apk_info"

.field public static final cs:Ljava/lang/String; = "ntbarpt"

.field public static final ct:Ljava/lang/String; = "ntbarpasbl"

.field public static final cu:Ljava/lang/String; = "atat_type"

.field public static final cv:Ljava/lang/String; = "akdlui"

.field public static final cw:Ljava/lang/String; = "ttc"

.field public static final cx:Ljava/lang/String; = "ttc_ct"

.field public static final cy:Ljava/lang/String; = "ttc_pe"

.field public static final cz:Ljava/lang/String; = "ttc_po"

.field private static final l:J = 0x1L


# instance fields
.field private a:I

.field private b:I

.field private c:Ljava/lang/String;

.field private d:Lcom/tkay/expressad/foundation/d/a;

.field private e:I

.field private f:I

.field private g:I

.field private h:Ljava/lang/String;

.field private i:Ljava/lang/String;

.field private j:Ljava/lang/String;

.field private k:Ljava/lang/String;

.field private m:Z

.field private n:I

.field private o:Ljava/lang/String;

.field private p:I

.field private q:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private r:Ljava/lang/String;

.field private s:Ljava/lang/String;

.field private t:I

.field private u:I

.field private v:Lcom/tkay/expressad/a/c$b;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 28
    const-class v0, Lcom/tkay/expressad/foundation/d/h;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/expressad/foundation/d/h;->co:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 2

    .line 26
    invoke-direct {p0}, Lcom/tkay/expressad/out/d;-><init>()V

    const/4 v0, 0x0

    .line 29
    iput v0, p0, Lcom/tkay/expressad/foundation/d/h;->a:I

    .line 30
    iput v0, p0, Lcom/tkay/expressad/foundation/d/h;->b:I

    const-string v1, ""

    .line 31
    iput-object v1, p0, Lcom/tkay/expressad/foundation/d/h;->c:Ljava/lang/String;

    .line 70
    iput v0, p0, Lcom/tkay/expressad/foundation/d/h;->e:I

    .line 74
    iput v0, p0, Lcom/tkay/expressad/foundation/d/h;->f:I

    .line 82
    iput v0, p0, Lcom/tkay/expressad/foundation/d/h;->g:I

    .line 86
    iput-object v1, p0, Lcom/tkay/expressad/foundation/d/h;->h:Ljava/lang/String;

    .line 191
    iput-boolean v0, p0, Lcom/tkay/expressad/foundation/d/h;->m:Z

    return-void
.end method

.method public static a(Lorg/json/JSONObject;Lcom/tkay/expressad/foundation/d/c;)Lcom/tkay/expressad/foundation/d/c;
    .locals 3

    const-string v0, "loopback"

    if-eqz p0, :cond_3

    :try_start_0
    const-string v1, "ttc"

    .line 316
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result v1

    .line 1293
    iput-boolean v1, p1, Lcom/tkay/expressad/foundation/d/h;->m:Z

    const-string v1, "ttc_ct"

    const v2, 0x93a80

    .line 318
    invoke-virtual {p0, v1, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 2278
    iput v1, p1, Lcom/tkay/expressad/foundation/d/h;->n:I

    const-string v1, "adv_id"

    .line 321
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 3269
    iput-object v1, p1, Lcom/tkay/expressad/foundation/d/h;->s:Ljava/lang/String;

    const-string v1, "ttc_type"

    const/4 v2, 0x3

    .line 322
    invoke-virtual {p0, v1, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 4261
    iput v1, p1, Lcom/tkay/expressad/foundation/d/h;->t:I

    const-string v1, "ttc_ct2"

    const/16 v2, 0x708

    .line 323
    invoke-virtual {p0, v1, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 5253
    iput v1, p1, Lcom/tkay/expressad/foundation/d/h;->u:I

    .line 326
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    invoke-virtual {p1, v1, v2}, Lcom/tkay/expressad/foundation/d/c;->a(J)V

    const-string v1, "html_url"

    .line 329
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v1}, Lcom/tkay/expressad/foundation/d/c;->m(Ljava/lang/String;)V

    const-string v1, "end_screen_url"

    .line 330
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v1}, Lcom/tkay/expressad/foundation/d/c;->n(Ljava/lang/String;)V

    const-string v1, "mark"

    .line 334
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 6230
    iput-object v1, p1, Lcom/tkay/expressad/foundation/d/h;->o:Ljava/lang/String;

    const-string v1, "isPost"

    .line 335
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v1

    .line 6238
    iput v1, p1, Lcom/tkay/expressad/foundation/d/h;->p:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    .line 339
    :try_start_1
    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 340
    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 341
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 7216
    iput-object v0, p1, Lcom/tkay/expressad/foundation/d/h;->r:Ljava/lang/String;

    .line 343
    invoke-static {v0}, Lcom/tkay/expressad/foundation/d/h;->h(Ljava/lang/String;)Ljava/util/Map;

    move-result-object v0

    .line 8208
    iput-object v0, p1, Lcom/tkay/expressad/foundation/d/h;->q:Ljava/util/Map;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    :catch_0
    :cond_0
    :try_start_2
    const-string v0, "gh_id"

    .line 352
    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 353
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    .line 9147
    iput-object v0, p1, Lcom/tkay/expressad/foundation/d/h;->i:Ljava/lang/String;

    const-string v0, "gh_path"

    .line 355
    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 356
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    .line 357
    invoke-static {v0}, Lcom/tkay/expressad/foundation/h/j;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 9155
    iput-object v0, p1, Lcom/tkay/expressad/foundation/d/h;->j:Ljava/lang/String;

    :cond_1
    const-string v0, "bind_id"

    .line 359
    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 9163
    iput-object v0, p1, Lcom/tkay/expressad/foundation/d/h;->k:Ljava/lang/String;

    :cond_2
    const-string v0, "apk_alt"

    const/4 v1, 0x0

    .line 363
    invoke-virtual {p0, v0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    .line 10055
    iput v0, p1, Lcom/tkay/expressad/foundation/d/h;->a:I

    const-string v0, "disableApkAlt"

    .line 364
    invoke-virtual {p0, v0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    .line 11051
    iput v0, p1, Lcom/tkay/expressad/foundation/d/h;->b:I

    const-string v0, "apk_info"

    .line 365
    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/expressad/foundation/d/a;->a(Ljava/lang/String;)Lcom/tkay/expressad/foundation/d/a;

    move-result-object v0

    .line 12043
    iput-object v0, p1, Lcom/tkay/expressad/foundation/d/h;->d:Lcom/tkay/expressad/foundation/d/a;

    const-string v0, "ntbarpasbl"

    .line 366
    invoke-virtual {p0, v0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    .line 12102
    iput v0, p1, Lcom/tkay/expressad/foundation/d/h;->f:I

    const-string v0, "ntbarpt"

    .line 367
    invoke-virtual {p0, v0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    .line 13094
    iput v0, p1, Lcom/tkay/expressad/foundation/d/h;->e:I

    const-string v0, "atat_type"

    .line 368
    invoke-virtual {p0, v0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    .line 13110
    iput v0, p1, Lcom/tkay/expressad/foundation/d/h;->g:I

    const-string v0, "akdlui"

    const-string v1, ""

    .line 369
    invoke-virtual {p0, v0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 13118
    iput-object p0, p1, Lcom/tkay/expressad/foundation/d/h;->h:Ljava/lang/String;
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    return-object p1

    :catch_1
    move-exception p0

    .line 371
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    .line 372
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "parse campaign json exception: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-object p1

    :cond_3
    const/4 p0, 0x0

    return-object p0
.end method

.method protected static a(Lcom/tkay/expressad/foundation/d/d;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;)Ljava/lang/String;
    .locals 6

    if-eqz p0, :cond_4

    .line 383
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto/16 :goto_4

    .line 387
    :cond_0
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/d/d;->a()Ljava/util/HashMap;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string v1, "\\}"

    const-string v2, "\\{"

    if-eqz v0, :cond_1

    .line 389
    :try_start_1
    invoke-virtual {v0}, Ljava/util/HashMap;->entrySet()Ljava/util/Set;

    move-result-object v3

    invoke-interface {v3}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    .line 390
    invoke-virtual {v0}, Ljava/util/HashMap;->entrySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/util/Map$Entry;

    .line 391
    invoke-interface {v3}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    .line 392
    invoke-interface {v3}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    .line 393
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {p2, v4, v3}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    goto :goto_0

    .line 397
    :cond_1
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->z()Ljava/util/HashMap;

    move-result-object p1

    if-eqz p1, :cond_2

    .line 399
    invoke-virtual {p1}, Ljava/util/HashMap;->entrySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    .line 400
    invoke-virtual {p1}, Ljava/util/HashMap;->entrySet()Ljava/util/Set;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_1
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_2

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/Map$Entry;

    .line 401
    invoke-interface {v0}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    .line 402
    invoke-interface {v0}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    .line 403
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p2, v3, v0}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    goto :goto_1

    .line 407
    :cond_2
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/d/d;->b()Ljava/util/HashMap;

    move-result-object p1

    if-eqz p1, :cond_3

    .line 409
    invoke-virtual {p1}, Ljava/util/HashMap;->entrySet()Ljava/util/Set;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_2
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_3

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/Map$Entry;

    .line 410
    invoke-interface {v0}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    .line 411
    invoke-interface {v0}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    .line 412
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p2, v3, v0}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    goto :goto_2

    :cond_3
    const-string p1, "\\{c\\}"

    .line 416
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/d/d;->e()Ljava/lang/String;

    move-result-object p0

    const-string v0, "utf-8"

    invoke-static {p0, v0}, Ljava/net/URLEncoder;->encode(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p2, p1, p0}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    const-string p0, "=\\{.*?\\}"

    .line 419
    invoke-static {p0}, Ljava/util/regex/Pattern;->compile(Ljava/lang/String;)Ljava/util/regex/Pattern;

    move-result-object p0

    .line 420
    invoke-virtual {p0, p2}, Ljava/util/regex/Pattern;->matcher(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;

    move-result-object p0

    .line 421
    :goto_3
    invoke-virtual {p0}, Ljava/util/regex/Matcher;->find()Z

    move-result p1

    if-eqz p1, :cond_4

    const/4 p1, 0x0

    .line 422
    invoke-virtual {p0, p1}, Ljava/util/regex/Matcher;->group(I)Ljava/lang/String;

    move-result-object p1

    const-string v0, "="

    .line 423
    invoke-virtual {p2, p1, v0}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_3

    :catchall_0
    move-exception p0

    .line 426
    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    :cond_4
    :goto_4
    return-object p2
.end method

.method private a()Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 204
    iget-object v0, p0, Lcom/tkay/expressad/foundation/d/h;->q:Ljava/util/Map;

    return-object v0
.end method

.method private a(I)V
    .locals 0

    .line 51
    iput p1, p0, Lcom/tkay/expressad/foundation/d/h;->b:I

    return-void
.end method

.method private a(Lcom/tkay/expressad/foundation/d/a;)V
    .locals 0

    .line 43
    iput-object p1, p0, Lcom/tkay/expressad/foundation/d/h;->d:Lcom/tkay/expressad/foundation/d/a;

    return-void
.end method

.method private a(Ljava/lang/String;)V
    .locals 0

    .line 118
    iput-object p1, p0, Lcom/tkay/expressad/foundation/d/h;->h:Ljava/lang/String;

    return-void
.end method

.method private a(Ljava/util/Map;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 208
    iput-object p1, p0, Lcom/tkay/expressad/foundation/d/h;->q:Ljava/util/Map;

    return-void
.end method

.method private a(Z)V
    .locals 0

    .line 293
    iput-boolean p1, p0, Lcom/tkay/expressad/foundation/d/h;->m:Z

    return-void
.end method

.method public static b(Lorg/json/JSONObject;Lcom/tkay/expressad/foundation/d/c;)Lcom/tkay/expressad/foundation/d/c;
    .locals 4

    const-string v0, "cam_html"

    const-string v1, "loopback"

    if-eqz p0, :cond_3

    :try_start_0
    const-string v2, "ttc"

    .line 442
    invoke-virtual {p0, v2}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result v2

    .line 13293
    iput-boolean v2, p1, Lcom/tkay/expressad/foundation/d/h;->m:Z

    const-string v2, "ttc_ct"

    const v3, 0x93a80

    .line 444
    invoke-virtual {p0, v2, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v2

    .line 14278
    iput v2, p1, Lcom/tkay/expressad/foundation/d/h;->n:I

    const-string v2, "adv_id"

    .line 446
    invoke-virtual {p0, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 15269
    iput-object v2, p1, Lcom/tkay/expressad/foundation/d/h;->s:Ljava/lang/String;

    const-string v2, "ttc_type"

    const/4 v3, 0x3

    .line 447
    invoke-virtual {p0, v2, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v2

    .line 16261
    iput v2, p1, Lcom/tkay/expressad/foundation/d/h;->t:I

    const-string v2, "ttc_ct2"

    const/16 v3, 0x708

    .line 448
    invoke-virtual {p0, v2, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v2

    .line 17253
    iput v2, p1, Lcom/tkay/expressad/foundation/d/h;->u:I

    const-string v2, "mark"

    .line 452
    invoke-virtual {p0, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 18230
    iput-object v2, p1, Lcom/tkay/expressad/foundation/d/h;->o:Ljava/lang/String;

    const-string v2, "isPost"

    .line 453
    invoke-virtual {p0, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v2

    .line 18238
    iput v2, p1, Lcom/tkay/expressad/foundation/d/h;->p:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    .line 456
    :try_start_1
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 457
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 458
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_0

    .line 19216
    iput-object v1, p1, Lcom/tkay/expressad/foundation/d/h;->r:Ljava/lang/String;

    .line 460
    invoke-static {v1}, Lcom/tkay/expressad/foundation/d/h;->h(Ljava/lang/String;)Ljava/util/Map;

    move-result-object v1

    .line 20208
    iput-object v1, p1, Lcom/tkay/expressad/foundation/d/h;->q:Ljava/util/Map;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    :catch_0
    :cond_0
    :try_start_2
    const-string v1, "gh_id"

    .line 469
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 470
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_2

    .line 21147
    iput-object v1, p1, Lcom/tkay/expressad/foundation/d/h;->i:Ljava/lang/String;

    const-string v1, "gh_path"

    .line 472
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 473
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_1

    .line 474
    invoke-static {v1}, Lcom/tkay/expressad/foundation/h/j;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 21155
    iput-object v1, p1, Lcom/tkay/expressad/foundation/d/h;->j:Ljava/lang/String;

    :cond_1
    const-string v1, "bind_id"

    .line 476
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 21163
    iput-object v1, p1, Lcom/tkay/expressad/foundation/d/h;->k:Ljava/lang/String;

    .line 479
    :cond_2
    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v1}, Lcom/tkay/expressad/foundation/d/c;->e(Ljava/lang/String;)V

    .line 480
    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/foundation/d/c;->b(Ljava/lang/String;)V

    const-string v0, "apk_alt"

    const/4 v1, 0x0

    .line 483
    invoke-virtual {p0, v0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    .line 22055
    iput v0, p1, Lcom/tkay/expressad/foundation/d/h;->a:I

    const-string v0, "disableApkAlt"

    .line 484
    invoke-virtual {p0, v0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    .line 23051
    iput v0, p1, Lcom/tkay/expressad/foundation/d/h;->b:I

    const-string v0, "apk_info"

    .line 485
    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/expressad/foundation/d/a;->a(Ljava/lang/String;)Lcom/tkay/expressad/foundation/d/a;

    move-result-object v0

    .line 24043
    iput-object v0, p1, Lcom/tkay/expressad/foundation/d/h;->d:Lcom/tkay/expressad/foundation/d/a;

    const-string v0, "ntbarpasbl"

    .line 486
    invoke-virtual {p0, v0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    .line 24102
    iput v0, p1, Lcom/tkay/expressad/foundation/d/h;->f:I

    const-string v0, "ntbarpt"

    .line 487
    invoke-virtual {p0, v0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    .line 25094
    iput v0, p1, Lcom/tkay/expressad/foundation/d/h;->e:I

    const-string v0, "atat_type"

    .line 488
    invoke-virtual {p0, v0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    .line 25110
    iput v0, p1, Lcom/tkay/expressad/foundation/d/h;->g:I

    const-string v0, "akdlui"

    const-string v1, ""

    .line 489
    invoke-virtual {p0, v0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 25118
    iput-object p0, p1, Lcom/tkay/expressad/foundation/d/h;->h:Ljava/lang/String;
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    return-object p1

    :catch_1
    move-exception p0

    .line 491
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    .line 492
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "parse campaign json exception: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-object p1

    :cond_3
    const/4 p0, 0x0

    return-object p0
.end method

.method private b()Ljava/lang/String;
    .locals 1

    .line 212
    iget-object v0, p0, Lcom/tkay/expressad/foundation/d/h;->r:Ljava/lang/String;

    return-object v0
.end method

.method private b(I)V
    .locals 0

    .line 55
    iput p1, p0, Lcom/tkay/expressad/foundation/d/h;->a:I

    return-void
.end method

.method private b(Ljava/lang/String;)V
    .locals 0

    .line 147
    iput-object p1, p0, Lcom/tkay/expressad/foundation/d/h;->i:Ljava/lang/String;

    return-void
.end method

.method private static c(Lorg/json/JSONObject;Lcom/tkay/expressad/foundation/d/c;)Lorg/json/JSONObject;
    .locals 2

    if-nez p1, :cond_0

    return-object p0

    .line 25289
    :cond_0
    iget-boolean v0, p1, Lcom/tkay/expressad/foundation/d/h;->m:Z

    const-string v1, "ttc"

    .line 546
    invoke-virtual {p0, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Z)Lorg/json/JSONObject;

    .line 26274
    iget v0, p1, Lcom/tkay/expressad/foundation/d/h;->n:I

    const-string v1, "ttc_ct"

    .line 548
    invoke-virtual {p0, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 27265
    iget-object v0, p1, Lcom/tkay/expressad/foundation/d/h;->s:Ljava/lang/String;

    const-string v1, "adv_id"

    .line 550
    invoke-virtual {p0, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 28257
    iget v0, p1, Lcom/tkay/expressad/foundation/d/h;->t:I

    const-string v1, "ttc_type"

    .line 551
    invoke-virtual {p0, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 29249
    iget v0, p1, Lcom/tkay/expressad/foundation/d/h;->u:I

    const-string v1, "ttc_ct2"

    .line 554
    invoke-virtual {p0, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 30143
    iget-object v0, p1, Lcom/tkay/expressad/foundation/d/h;->i:Ljava/lang/String;

    const-string v1, "gh_id"

    .line 558
    invoke-virtual {p0, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 30151
    iget-object v0, p1, Lcom/tkay/expressad/foundation/d/h;->j:Ljava/lang/String;

    .line 559
    invoke-static {v0}, Lcom/tkay/expressad/foundation/h/j;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "gh_path"

    invoke-virtual {p0, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 30159
    iget-object v0, p1, Lcom/tkay/expressad/foundation/d/h;->k:Ljava/lang/String;

    const-string v1, "bind_id"

    .line 560
    invoke-virtual {p0, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 31059
    iget v0, p1, Lcom/tkay/expressad/foundation/d/h;->a:I

    const-string v1, "apk_alt"

    .line 563
    invoke-virtual {p0, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 32047
    iget v0, p1, Lcom/tkay/expressad/foundation/d/h;->b:I

    const-string v1, "disableApkAlt"

    .line 564
    invoke-virtual {p0, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 33039
    iget-object v0, p1, Lcom/tkay/expressad/foundation/d/h;->d:Lcom/tkay/expressad/foundation/d/a;

    if-eqz v0, :cond_1

    .line 567
    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/a;->g()Lorg/json/JSONObject;

    move-result-object v0

    const-string v1, "apk_info"

    invoke-virtual {p0, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 34226
    :cond_1
    iget-object v0, p1, Lcom/tkay/expressad/foundation/d/h;->o:Ljava/lang/String;

    const-string v1, "mark"

    .line 569
    invoke-virtual {p0, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 34234
    iget v0, p1, Lcom/tkay/expressad/foundation/d/h;->p:I

    const-string v1, "isPost"

    .line 571
    invoke-virtual {p0, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 573
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->x()I

    move-result v0

    const-string v1, "nv_t2"

    invoke-virtual {p0, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 35098
    iget v0, p1, Lcom/tkay/expressad/foundation/d/h;->f:I

    const-string v1, "ntbarpasbl"

    .line 575
    invoke-virtual {p0, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 36090
    iget v0, p1, Lcom/tkay/expressad/foundation/d/h;->e:I

    const-string v1, "ntbarpt"

    .line 576
    invoke-virtual {p0, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 36106
    iget v0, p1, Lcom/tkay/expressad/foundation/d/h;->g:I

    const-string v1, "atat_type"

    .line 577
    invoke-virtual {p0, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 36114
    iget-object p1, p1, Lcom/tkay/expressad/foundation/d/h;->h:Ljava/lang/String;

    const-string v0, "akdlui"

    .line 578
    invoke-virtual {p0, v0, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    return-object p0
.end method

.method private c(I)V
    .locals 0

    .line 94
    iput p1, p0, Lcom/tkay/expressad/foundation/d/h;->e:I

    return-void
.end method

.method private c(Ljava/lang/String;)V
    .locals 0

    .line 155
    iput-object p1, p0, Lcom/tkay/expressad/foundation/d/h;->j:Ljava/lang/String;

    return-void
.end method

.method private d(I)V
    .locals 0

    .line 102
    iput p1, p0, Lcom/tkay/expressad/foundation/d/h;->f:I

    return-void
.end method

.method private d(Ljava/lang/String;)V
    .locals 0

    .line 163
    iput-object p1, p0, Lcom/tkay/expressad/foundation/d/h;->k:Ljava/lang/String;

    return-void
.end method

.method private e(I)V
    .locals 0

    .line 110
    iput p1, p0, Lcom/tkay/expressad/foundation/d/h;->g:I

    return-void
.end method

.method private e(Ljava/lang/String;)V
    .locals 0

    .line 216
    iput-object p1, p0, Lcom/tkay/expressad/foundation/d/h;->r:Ljava/lang/String;

    return-void
.end method

.method private f(I)V
    .locals 0

    .line 238
    iput p1, p0, Lcom/tkay/expressad/foundation/d/h;->p:I

    return-void
.end method

.method private f(Ljava/lang/String;)V
    .locals 0

    .line 230
    iput-object p1, p0, Lcom/tkay/expressad/foundation/d/h;->o:Ljava/lang/String;

    return-void
.end method

.method private g(I)V
    .locals 0

    .line 253
    iput p1, p0, Lcom/tkay/expressad/foundation/d/h;->u:I

    return-void
.end method

.method private g(Ljava/lang/String;)V
    .locals 0

    .line 269
    iput-object p1, p0, Lcom/tkay/expressad/foundation/d/h;->s:Ljava/lang/String;

    return-void
.end method

.method private static h(Ljava/lang/String;)Ljava/util/Map;
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    const-string v0, "value"

    const-string v1, "key"

    const-string v2, "domain"

    const/4 v3, 0x0

    .line 504
    :try_start_0
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_0

    .line 505
    new-instance v4, Ljava/util/HashMap;

    invoke-direct {v4}, Ljava/util/HashMap;-><init>()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 506
    :try_start_1
    new-instance v3, Lorg/json/JSONObject;

    invoke-direct {v3, p0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 508
    invoke-virtual {v3, v2}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-interface {v4, v2, p0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 509
    invoke-virtual {v3, v1}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-interface {v4, v1, p0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 510
    invoke-virtual {v3, v0}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-interface {v4, v0, p0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :catchall_0
    move-object v3, v4

    :catchall_1
    :cond_0
    return-object v3
.end method

.method private h(I)V
    .locals 0

    .line 261
    iput p1, p0, Lcom/tkay/expressad/foundation/d/h;->t:I

    return-void
.end method

.method private i(I)V
    .locals 0

    .line 278
    iput p1, p0, Lcom/tkay/expressad/foundation/d/h;->n:I

    return-void
.end method


# virtual methods
.method public a(Lcom/tkay/expressad/a/c$b;)V
    .locals 0

    .line 308
    iput-object p1, p0, Lcom/tkay/expressad/foundation/d/h;->v:Lcom/tkay/expressad/a/c$b;

    return-void
.end method

.method public final aG()Lcom/tkay/expressad/foundation/d/a;
    .locals 1

    .line 39
    iget-object v0, p0, Lcom/tkay/expressad/foundation/d/h;->d:Lcom/tkay/expressad/foundation/d/a;

    return-object v0
.end method

.method public final aH()I
    .locals 1

    .line 47
    iget v0, p0, Lcom/tkay/expressad/foundation/d/h;->b:I

    return v0
.end method

.method public final aI()I
    .locals 1

    .line 59
    iget v0, p0, Lcom/tkay/expressad/foundation/d/h;->a:I

    return v0
.end method

.method public final aJ()I
    .locals 1

    .line 90
    iget v0, p0, Lcom/tkay/expressad/foundation/d/h;->e:I

    return v0
.end method

.method public final aK()I
    .locals 1

    .line 98
    iget v0, p0, Lcom/tkay/expressad/foundation/d/h;->f:I

    return v0
.end method

.method public final aL()I
    .locals 1

    .line 106
    iget v0, p0, Lcom/tkay/expressad/foundation/d/h;->g:I

    return v0
.end method

.method public final aM()Ljava/lang/String;
    .locals 1

    .line 114
    iget-object v0, p0, Lcom/tkay/expressad/foundation/d/h;->h:Ljava/lang/String;

    return-object v0
.end method

.method public final aN()Ljava/lang/String;
    .locals 1

    .line 143
    iget-object v0, p0, Lcom/tkay/expressad/foundation/d/h;->i:Ljava/lang/String;

    return-object v0
.end method

.method public final aO()Ljava/lang/String;
    .locals 1

    .line 151
    iget-object v0, p0, Lcom/tkay/expressad/foundation/d/h;->j:Ljava/lang/String;

    return-object v0
.end method

.method public final aP()Ljava/lang/String;
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 159
    iget-object v0, p0, Lcom/tkay/expressad/foundation/d/h;->k:Ljava/lang/String;

    return-object v0
.end method

.method public final aQ()Ljava/lang/String;
    .locals 1

    .line 226
    iget-object v0, p0, Lcom/tkay/expressad/foundation/d/h;->o:Ljava/lang/String;

    return-object v0
.end method

.method public final aR()I
    .locals 1

    .line 234
    iget v0, p0, Lcom/tkay/expressad/foundation/d/h;->p:I

    return v0
.end method

.method public final aS()I
    .locals 1

    .line 249
    iget v0, p0, Lcom/tkay/expressad/foundation/d/h;->u:I

    return v0
.end method

.method public final aT()I
    .locals 1

    .line 257
    iget v0, p0, Lcom/tkay/expressad/foundation/d/h;->t:I

    return v0
.end method

.method public final aU()Ljava/lang/String;
    .locals 1

    .line 265
    iget-object v0, p0, Lcom/tkay/expressad/foundation/d/h;->s:Ljava/lang/String;

    return-object v0
.end method

.method public final aV()I
    .locals 1

    .line 274
    iget v0, p0, Lcom/tkay/expressad/foundation/d/h;->n:I

    return v0
.end method

.method public final aW()Z
    .locals 1

    .line 289
    iget-boolean v0, p0, Lcom/tkay/expressad/foundation/d/h;->m:Z

    return v0
.end method

.method public aj()Lcom/tkay/expressad/a/c$b;
    .locals 1

    .line 301
    iget-object v0, p0, Lcom/tkay/expressad/foundation/d/h;->v:Lcom/tkay/expressad/a/c$b;

    return-object v0
.end method

.method public final b(Lcom/tkay/expressad/foundation/d/c;)Z
    .locals 4

    .line 616
    iget v0, p0, Lcom/tkay/expressad/foundation/d/h;->a:I

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-ne v0, v2, :cond_0

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->Q()I

    move-result v0

    const/4 v3, 0x3

    if-ne v0, v3, :cond_0

    .line 37047
    iget p1, p1, Lcom/tkay/expressad/foundation/d/h;->b:I

    if-eq p1, v2, :cond_0

    goto :goto_0

    :cond_0
    move v2, v1

    :goto_0
    if-eqz v2, :cond_2

    .line 619
    :try_start_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p1

    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/d/h;->ba()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/tkay/expressad/foundation/h/t;->a(Landroid/content/Context;Ljava/lang/String;)Z

    move-result p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz p1, :cond_1

    goto :goto_1

    :cond_1
    move v1, v2

    :goto_1
    move v2, v1

    goto :goto_2

    :catchall_0
    move-exception p1

    .line 623
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    :cond_2
    :goto_2
    return v2
.end method

.method public final u(Ljava/lang/String;)Ljava/lang/String;
    .locals 6

    .line 585
    :try_start_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    .line 36204
    iget-object v0, p0, Lcom/tkay/expressad/foundation/d/h;->q:Ljava/util/Map;

    if-eqz v0, :cond_2

    .line 587
    invoke-interface {v0}, Ljava/util/Map;->size()I

    move-result v1

    if-lez v1, :cond_2

    .line 588
    invoke-static {p1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v1

    .line 589
    invoke-virtual {v1}, Landroid/net/Uri;->getHost()Ljava/lang/String;

    move-result-object v2

    const-string v3, "domain"

    .line 590
    invoke-interface {v0, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    .line 591
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_2

    invoke-virtual {v2, v3}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_2

    const-string v2, "key"

    .line 592
    invoke-interface {v0, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    const-string v3, "value"

    .line 593
    invoke-interface {v0, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    .line 594
    invoke-virtual {p1, v2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v3
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string v4, "="

    if-nez v3, :cond_0

    :try_start_1
    invoke-virtual {v1, v2}, Landroid/net/Uri;->getQueryParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_0

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_0

    .line 595
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "&"

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    goto :goto_0

    .line 596
    :cond_0
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_2

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_2

    const-string v3, ""

    .line 598
    invoke-virtual {v1, v2}, Landroid/net/Uri;->getQueryParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_1

    .line 599
    invoke-virtual {v1, v2}, Landroid/net/Uri;->getQueryParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 601
    :cond_1
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v1, v0}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :catchall_0
    :cond_2
    :goto_0
    return-object p1
.end method
