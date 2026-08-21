.class public abstract Lcom/tkay/core/common/f/ai;
.super Ljava/lang/Object;


# static fields
.field public static final O:Ljava/lang/String; = "ofm_tid_key"

.field public static final P:I = 0x1

.field public static final Q:I = 0x2

.field public static final R:I = 0x3

.field public static final S:I = 0x4

.field public static final T:I = 0x5

.field public static final U:I = 0x6

.field public static final V:I = 0x7

.field public static final W:I = 0x8

.field public static final X:I = 0xa

.field public static final Y:I = 0x0

.field public static final Z:I = 0x1

.field public static final aa:I = 0x2

.field public static final ab:I = 0x3

.field public static final ac:I = 0x4

.field public static final ad:I = 0x5

.field public static final ae:I = 0x8

.field public static final af:Ljava/lang/String; = "0"

.field public static final ag:Ljava/lang/String; = "1"

.field public static final ah:Ljava/lang/String; = "2"

.field public static final ai:Ljava/lang/String; = "3"

.field public static final aj:Ljava/lang/String; = "4"


# instance fields
.field private a:Ljava/lang/String;

.field protected ak:Ljava/lang/String;

.field protected al:Ljava/lang/String;

.field protected am:Ljava/lang/String;

.field protected an:Ljava/lang/String;

.field public ao:Ljava/lang/String;

.field public ap:I

.field public aq:I

.field protected ar:Ljava/lang/String;

.field protected as:I

.field protected at:I

.field protected au:I

.field protected av:I

.field private b:Ljava/lang/String;

.field private c:I

.field private d:Lorg/json/JSONObject;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 16
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, -0x1

    .line 164
    iput v0, p0, Lcom/tkay/core/common/f/ai;->av:I

    return-void
.end method

.method private a()Lorg/json/JSONObject;
    .locals 1

    .line 76
    iget-object v0, p0, Lcom/tkay/core/common/f/ai;->d:Lorg/json/JSONObject;

    return-object v0
.end method

.method private a(I)V
    .locals 0

    .line 153
    iput p1, p0, Lcom/tkay/core/common/f/ai;->ap:I

    return-void
.end method

.method private a(Ljava/lang/String;)V
    .locals 0

    .line 145
    iput-object p1, p0, Lcom/tkay/core/common/f/ai;->ao:Ljava/lang/String;

    return-void
.end method

.method private b()I
    .locals 1

    .line 112
    iget v0, p0, Lcom/tkay/core/common/f/ai;->au:I

    return v0
.end method

.method private b(I)V
    .locals 0

    .line 161
    iput p1, p0, Lcom/tkay/core/common/f/ai;->aq:I

    return-void
.end method

.method private c()I
    .locals 1

    .line 117
    iget v0, p0, Lcom/tkay/core/common/f/ai;->as:I

    return v0
.end method

.method private d()Ljava/lang/String;
    .locals 1

    .line 141
    iget-object v0, p0, Lcom/tkay/core/common/f/ai;->ao:Ljava/lang/String;

    return-object v0
.end method

.method private e()I
    .locals 1

    .line 149
    iget v0, p0, Lcom/tkay/core/common/f/ai;->ap:I

    return v0
.end method

.method private f()I
    .locals 1

    .line 157
    iget v0, p0, Lcom/tkay/core/common/f/ai;->aq:I

    return v0
.end method


# virtual methods
.method public A(I)Lorg/json/JSONObject;
    .locals 2

    .line 238
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v1, "type"

    .line 240
    invoke-virtual {v0, v1, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p1, "pl_id"

    .line 241
    iget-object v1, p0, Lcom/tkay/core/common/f/ai;->ak:Ljava/lang/String;

    invoke-virtual {v0, p1, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "req_id"

    .line 242
    iget-object v1, p0, Lcom/tkay/core/common/f/ai;->al:Ljava/lang/String;

    invoke-virtual {v0, p1, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 243
    iget-object p1, p0, Lcom/tkay/core/common/f/ai;->am:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_0

    const-string p1, "format"

    .line 244
    iget-object v1, p0, Lcom/tkay/core/common/f/ai;->am:Ljava/lang/String;

    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, p1, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    :cond_0
    const-string p1, "ps_id"

    .line 246
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->q()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, p1, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 248
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p1

    iget-object v1, p0, Lcom/tkay/core/common/f/ai;->ak:Ljava/lang/String;

    invoke-virtual {p1, v1}, Lcom/tkay/core/common/b/m;->g(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 249
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    const-string v1, "sessionid"

    .line 250
    invoke-virtual {v0, v1, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 252
    :cond_1
    iget p1, p0, Lcom/tkay/core/common/f/ai;->av:I

    const/4 v1, -0x1

    if-eq p1, v1, :cond_2

    const-string p1, "traffic_group_id"

    .line 253
    iget v1, p0, Lcom/tkay/core/common/f/ai;->av:I

    invoke-virtual {v0, p1, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 255
    :cond_2
    iget p1, p0, Lcom/tkay/core/common/f/ai;->au:I

    const/4 v1, 0x1

    if-ne p1, v1, :cond_3

    const-string p1, "ofm_tid"

    .line 256
    iget v1, p0, Lcom/tkay/core/common/f/ai;->at:I

    invoke-virtual {v0, p1, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p1, "ofm_system"

    .line 257
    iget v1, p0, Lcom/tkay/core/common/f/ai;->as:I

    invoke-virtual {v0, p1, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p1, "is_ofm"

    .line 258
    iget v1, p0, Lcom/tkay/core/common/f/ai;->au:I

    invoke-virtual {v0, p1, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    :cond_3
    const-string p1, "asid"

    .line 261
    iget-object v1, p0, Lcom/tkay/core/common/f/ai;->an:Ljava/lang/String;

    invoke-virtual {v0, p1, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "wf_id"

    .line 264
    iget-object v1, p0, Lcom/tkay/core/common/f/ai;->a:Ljava/lang/String;

    invoke-virtual {v0, p1, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "cp_pl_id"

    .line 265
    iget-object v1, p0, Lcom/tkay/core/common/f/ai;->b:Ljava/lang/String;

    invoke-virtual {v0, p1, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 268
    iget-object p1, p0, Lcom/tkay/core/common/f/ai;->d:Lorg/json/JSONObject;

    if-eqz p1, :cond_4

    const-string p1, "p_c"

    .line 269
    iget-object v1, p0, Lcom/tkay/core/common/f/ai;->d:Lorg/json/JSONObject;

    invoke-virtual {v0, p1, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 272
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_4
    :goto_0
    return-object v0
.end method

.method public final B(I)V
    .locals 0

    .line 88
    iput p1, p0, Lcom/tkay/core/common/f/ai;->c:I

    return-void
.end method

.method public final C(I)V
    .locals 0

    .line 108
    iput p1, p0, Lcom/tkay/core/common/f/ai;->au:I

    return-void
.end method

.method public final D(I)V
    .locals 0

    .line 129
    iput p1, p0, Lcom/tkay/core/common/f/ai;->at:I

    return-void
.end method

.method public final E(I)V
    .locals 0

    .line 171
    iput p1, p0, Lcom/tkay/core/common/f/ai;->av:I

    return-void
.end method

.method public final O()I
    .locals 1

    .line 84
    iget v0, p0, Lcom/tkay/core/common/f/ai;->c:I

    return v0
.end method

.method public final P()Ljava/lang/String;
    .locals 1

    .line 100
    iget-object v0, p0, Lcom/tkay/core/common/f/ai;->a:Ljava/lang/String;

    return-object v0
.end method

.method public final Q()Ljava/lang/String;
    .locals 1

    .line 104
    iget-object v0, p0, Lcom/tkay/core/common/f/ai;->b:Ljava/lang/String;

    return-object v0
.end method

.method public final R()V
    .locals 1

    const/4 v0, 0x1

    .line 121
    iput v0, p0, Lcom/tkay/core/common/f/ai;->as:I

    return-void
.end method

.method public final S()I
    .locals 1

    .line 125
    iget v0, p0, Lcom/tkay/core/common/f/ai;->at:I

    return v0
.end method

.method public final T()Ljava/lang/String;
    .locals 1

    .line 133
    iget-object v0, p0, Lcom/tkay/core/common/f/ai;->ar:Ljava/lang/String;

    return-object v0
.end method

.method public final U()I
    .locals 1

    .line 167
    iget v0, p0, Lcom/tkay/core/common/f/ai;->av:I

    return v0
.end method

.method public final V()Ljava/lang/String;
    .locals 1

    .line 190
    iget-object v0, p0, Lcom/tkay/core/common/f/ai;->an:Ljava/lang/String;

    return-object v0
.end method

.method public final W()Ljava/lang/String;
    .locals 1

    .line 198
    iget-object v0, p0, Lcom/tkay/core/common/f/ai;->ak:Ljava/lang/String;

    return-object v0
.end method

.method public final X()Ljava/lang/String;
    .locals 1

    .line 206
    iget-object v0, p0, Lcom/tkay/core/common/f/ai;->al:Ljava/lang/String;

    return-object v0
.end method

.method public final Y()Ljava/lang/String;
    .locals 1

    .line 214
    iget-object v0, p0, Lcom/tkay/core/common/f/ai;->am:Ljava/lang/String;

    return-object v0
.end method

.method public final Z()Ljava/lang/String;
    .locals 6

    .line 218
    iget-object v0, p0, Lcom/tkay/core/common/f/ai;->am:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/String;->hashCode()I

    move-result v1

    const/4 v2, 0x4

    const/4 v3, 0x3

    const/4 v4, 0x2

    const/4 v5, 0x1

    packed-switch v1, :pswitch_data_0

    goto :goto_0

    :pswitch_0
    const-string v1, "4"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    move v0, v2

    goto :goto_1

    :pswitch_1
    const-string v1, "3"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    move v0, v3

    goto :goto_1

    :pswitch_2
    const-string v1, "2"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    move v0, v4

    goto :goto_1

    :pswitch_3
    const-string v1, "1"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    move v0, v5

    goto :goto_1

    :pswitch_4
    const-string v1, "0"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    goto :goto_1

    :cond_0
    :goto_0
    const/4 v0, -0x1

    :goto_1
    if-eqz v0, :cond_5

    if-eq v0, v5, :cond_4

    if-eq v0, v4, :cond_3

    if-eq v0, v3, :cond_2

    if-eq v0, v2, :cond_1

    const-string v0, "none"

    return-object v0

    :cond_1
    const-string v0, "splash"

    return-object v0

    :cond_2
    const-string v0, "inter"

    return-object v0

    :cond_3
    const-string v0, "banner"

    return-object v0

    :cond_4
    const-string v0, "reward"

    return-object v0

    :cond_5
    const-string v0, "native"

    return-object v0

    nop

    :pswitch_data_0
    .packed-switch 0x30
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method

.method public final a(Lorg/json/JSONObject;)V
    .locals 0

    .line 80
    iput-object p1, p0, Lcom/tkay/core/common/f/ai;->d:Lorg/json/JSONObject;

    return-void
.end method

.method public final t(Ljava/lang/String;)V
    .locals 0

    .line 92
    iput-object p1, p0, Lcom/tkay/core/common/f/ai;->a:Ljava/lang/String;

    return-void
.end method

.method public final u(Ljava/lang/String;)V
    .locals 0

    .line 96
    iput-object p1, p0, Lcom/tkay/core/common/f/ai;->b:Ljava/lang/String;

    return-void
.end method

.method public final v(Ljava/lang/String;)V
    .locals 0

    .line 137
    iput-object p1, p0, Lcom/tkay/core/common/f/ai;->ar:Ljava/lang/String;

    return-void
.end method

.method public final w(Ljava/lang/String;)V
    .locals 0

    .line 194
    iput-object p1, p0, Lcom/tkay/core/common/f/ai;->an:Ljava/lang/String;

    return-void
.end method

.method public final x(Ljava/lang/String;)V
    .locals 0

    .line 202
    iput-object p1, p0, Lcom/tkay/core/common/f/ai;->ak:Ljava/lang/String;

    return-void
.end method

.method public final y(Ljava/lang/String;)V
    .locals 0

    .line 210
    iput-object p1, p0, Lcom/tkay/core/common/f/ai;->al:Ljava/lang/String;

    return-void
.end method

.method public final z(Ljava/lang/String;)V
    .locals 0

    .line 234
    iput-object p1, p0, Lcom/tkay/core/common/f/ai;->am:Ljava/lang/String;

    return-void
.end method
