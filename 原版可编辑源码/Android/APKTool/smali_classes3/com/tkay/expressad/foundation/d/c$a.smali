.class public final Lcom/tkay/expressad/foundation/d/c$a;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/io/Serializable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/foundation/d/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "a"
.end annotation


# static fields
.field public static final a:Ljava/lang/String; = "ad_logo_link"

.field public static final b:Ljava/lang/String; = "adchoice_link"

.field public static final c:Ljava/lang/String; = "adchoice_icon"

.field public static final d:Ljava/lang/String; = "adchoice_size"

.field public static final e:Ljava/lang/String; = "platform_name"

.field public static final f:Ljava/lang/String; = "platform_logo"

.field public static final g:Ljava/lang/String; = "adv_name"

.field public static final h:Ljava/lang/String; = "adv_logo"


# instance fields
.field private i:Ljava/lang/String;

.field private j:Ljava/lang/String;

.field private k:Ljava/lang/String;

.field private l:Ljava/lang/String;

.field private m:Ljava/lang/String;

.field private n:Ljava/lang/String;

.field private o:Ljava/lang/String;

.field private p:Ljava/lang/String;

.field private q:I

.field private r:I

.field private s:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 2

    .line 2710
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, ""

    .line 2720
    iput-object v0, p0, Lcom/tkay/expressad/foundation/d/c$a;->i:Ljava/lang/String;

    .line 2721
    iput-object v0, p0, Lcom/tkay/expressad/foundation/d/c$a;->j:Ljava/lang/String;

    .line 2722
    iput-object v0, p0, Lcom/tkay/expressad/foundation/d/c$a;->k:Ljava/lang/String;

    .line 2723
    iput-object v0, p0, Lcom/tkay/expressad/foundation/d/c$a;->l:Ljava/lang/String;

    .line 2724
    iput-object v0, p0, Lcom/tkay/expressad/foundation/d/c$a;->m:Ljava/lang/String;

    .line 2725
    iput-object v0, p0, Lcom/tkay/expressad/foundation/d/c$a;->n:Ljava/lang/String;

    .line 2726
    iput-object v0, p0, Lcom/tkay/expressad/foundation/d/c$a;->o:Ljava/lang/String;

    .line 2727
    iput-object v0, p0, Lcom/tkay/expressad/foundation/d/c$a;->p:Ljava/lang/String;

    const/4 v1, 0x0

    .line 2745
    iput v1, p0, Lcom/tkay/expressad/foundation/d/c$a;->q:I

    .line 2746
    iput v1, p0, Lcom/tkay/expressad/foundation/d/c$a;->r:I

    .line 2748
    iput-object v0, p0, Lcom/tkay/expressad/foundation/d/c$a;->s:Ljava/lang/String;

    return-void
.end method

.method public static a(Ljava/lang/String;)Lcom/tkay/expressad/foundation/d/c$a;
    .locals 2

    const/4 v0, 0x0

    .line 2824
    :try_start_0
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    return-object v0

    .line 2827
    :cond_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-static {v1}, Lcom/tkay/expressad/foundation/d/c$a;->a(Lorg/json/JSONObject;)Lcom/tkay/expressad/foundation/d/c$a;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :catchall_0
    move-exception p0

    .line 2833
    sget-boolean v1, Lcom/tkay/expressad/b;->a:Z

    if-eqz v1, :cond_1

    .line 2834
    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    goto :goto_0

    :catch_0
    move-exception p0

    .line 2829
    sget-boolean v1, Lcom/tkay/expressad/b;->a:Z

    if-eqz v1, :cond_1

    .line 2830
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    :goto_0
    return-object v0
.end method

.method private static a(Lorg/json/JSONObject;)Lcom/tkay/expressad/foundation/d/c$a;
    .locals 3

    const/4 v0, 0x0

    .line 2844
    :try_start_0
    new-instance v1, Lcom/tkay/expressad/foundation/d/c$a;

    invoke-direct {v1}, Lcom/tkay/expressad/foundation/d/c$a;-><init>()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    const-string v0, "adchoice_icon"

    .line 2845
    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 3779
    iput-object v0, v1, Lcom/tkay/expressad/foundation/d/c$a;->k:Ljava/lang/String;

    const-string v0, "adchoice_link"

    .line 2846
    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 4771
    iput-object v0, v1, Lcom/tkay/expressad/foundation/d/c$a;->j:Ljava/lang/String;

    const-string v0, "adchoice_size"

    .line 2847
    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 4787
    iput-object v0, v1, Lcom/tkay/expressad/foundation/d/c$a;->l:Ljava/lang/String;

    const-string v2, "ad_logo_link"

    .line 2849
    invoke-virtual {p0, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 5763
    iput-object v2, v1, Lcom/tkay/expressad/foundation/d/c$a;->i:Ljava/lang/String;

    const-string v2, "adv_logo"

    .line 2850
    invoke-virtual {p0, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 5819
    iput-object v2, v1, Lcom/tkay/expressad/foundation/d/c$a;->p:Ljava/lang/String;

    const-string v2, "adv_name"

    .line 2851
    invoke-virtual {p0, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 6811
    iput-object v2, v1, Lcom/tkay/expressad/foundation/d/c$a;->o:Ljava/lang/String;

    const-string v2, "platform_logo"

    .line 2852
    invoke-virtual {p0, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 7803
    iput-object v2, v1, Lcom/tkay/expressad/foundation/d/c$a;->n:Ljava/lang/String;

    const-string v2, "platform_name"

    .line 2853
    invoke-virtual {p0, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 8795
    iput-object v2, v1, Lcom/tkay/expressad/foundation/d/c$a;->m:Ljava/lang/String;

    .line 2854
    invoke-static {v0}, Lcom/tkay/expressad/foundation/d/c$a;->k(Ljava/lang/String;)I

    move-result v2

    .line 9742
    iput v2, v1, Lcom/tkay/expressad/foundation/d/c$a;->r:I

    .line 2856
    invoke-static {v0}, Lcom/tkay/expressad/foundation/d/c$a;->l(Ljava/lang/String;)I

    move-result v0

    .line 10734
    iput v0, v1, Lcom/tkay/expressad/foundation/d/c$a;->q:I

    .line 2858
    invoke-virtual {p0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p0

    .line 10751
    iput-object p0, v1, Lcom/tkay/expressad/foundation/d/c$a;->s:Ljava/lang/String;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_3

    :catchall_0
    move-exception p0

    move-object v0, v1

    goto :goto_0

    :catch_0
    move-exception p0

    move-object v0, v1

    goto :goto_2

    :catchall_1
    move-exception p0

    .line 2865
    :goto_0
    sget-boolean v1, Lcom/tkay/expressad/b;->a:Z

    if-eqz v1, :cond_0

    .line 2866
    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_0
    :goto_1
    move-object v1, v0

    goto :goto_3

    :catch_1
    move-exception p0

    .line 2861
    :goto_2
    sget-boolean v1, Lcom/tkay/expressad/b;->a:Z

    if-eqz v1, :cond_0

    .line 2862
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    goto :goto_1

    :goto_3
    return-object v1
.end method

.method private a(I)V
    .locals 0

    .line 2734
    iput p1, p0, Lcom/tkay/expressad/foundation/d/c$a;->q:I

    return-void
.end method

.method private b(I)V
    .locals 0

    .line 2742
    iput p1, p0, Lcom/tkay/expressad/foundation/d/c$a;->r:I

    return-void
.end method

.method private b(Ljava/lang/String;)V
    .locals 0

    .line 2751
    iput-object p1, p0, Lcom/tkay/expressad/foundation/d/c$a;->s:Ljava/lang/String;

    return-void
.end method

.method private c(Ljava/lang/String;)V
    .locals 0

    .line 2763
    iput-object p1, p0, Lcom/tkay/expressad/foundation/d/c$a;->i:Ljava/lang/String;

    return-void
.end method

.method private d(Ljava/lang/String;)V
    .locals 0

    .line 2771
    iput-object p1, p0, Lcom/tkay/expressad/foundation/d/c$a;->j:Ljava/lang/String;

    return-void
.end method

.method private e()I
    .locals 1

    .line 2730
    iget v0, p0, Lcom/tkay/expressad/foundation/d/c$a;->q:I

    return v0
.end method

.method private e(Ljava/lang/String;)V
    .locals 0

    .line 2779
    iput-object p1, p0, Lcom/tkay/expressad/foundation/d/c$a;->k:Ljava/lang/String;

    return-void
.end method

.method private f()I
    .locals 1

    .line 2738
    iget v0, p0, Lcom/tkay/expressad/foundation/d/c$a;->r:I

    return v0
.end method

.method private f(Ljava/lang/String;)V
    .locals 0

    .line 2787
    iput-object p1, p0, Lcom/tkay/expressad/foundation/d/c$a;->l:Ljava/lang/String;

    return-void
.end method

.method private g()Ljava/lang/String;
    .locals 1

    .line 2759
    iget-object v0, p0, Lcom/tkay/expressad/foundation/d/c$a;->i:Ljava/lang/String;

    return-object v0
.end method

.method private g(Ljava/lang/String;)V
    .locals 0

    .line 2795
    iput-object p1, p0, Lcom/tkay/expressad/foundation/d/c$a;->m:Ljava/lang/String;

    return-void
.end method

.method private h()Ljava/lang/String;
    .locals 1

    .line 2791
    iget-object v0, p0, Lcom/tkay/expressad/foundation/d/c$a;->m:Ljava/lang/String;

    return-object v0
.end method

.method private h(Ljava/lang/String;)V
    .locals 0

    .line 2803
    iput-object p1, p0, Lcom/tkay/expressad/foundation/d/c$a;->n:Ljava/lang/String;

    return-void
.end method

.method private i()Ljava/lang/String;
    .locals 1

    .line 2799
    iget-object v0, p0, Lcom/tkay/expressad/foundation/d/c$a;->n:Ljava/lang/String;

    return-object v0
.end method

.method private i(Ljava/lang/String;)V
    .locals 0

    .line 2811
    iput-object p1, p0, Lcom/tkay/expressad/foundation/d/c$a;->o:Ljava/lang/String;

    return-void
.end method

.method private j()Ljava/lang/String;
    .locals 1

    .line 2807
    iget-object v0, p0, Lcom/tkay/expressad/foundation/d/c$a;->o:Ljava/lang/String;

    return-object v0
.end method

.method private j(Ljava/lang/String;)V
    .locals 0

    .line 2819
    iput-object p1, p0, Lcom/tkay/expressad/foundation/d/c$a;->p:Ljava/lang/String;

    return-void
.end method

.method private static k(Ljava/lang/String;)I
    .locals 3

    const-string v0, "x"

    .line 2878
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    return v2

    .line 2882
    :cond_0
    :try_start_0
    invoke-virtual {p0, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 2883
    invoke-virtual {p0, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p0

    if-eqz p0, :cond_1

    .line 2884
    array-length v0, p0

    const/4 v1, 0x1

    if-le v0, v1, :cond_1

    .line 2885
    aget-object p0, p0, v1

    invoke-static {p0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p0
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p0

    :catch_0
    :cond_1
    return v2
.end method

.method private k()Ljava/lang/String;
    .locals 1

    .line 2815
    iget-object v0, p0, Lcom/tkay/expressad/foundation/d/c$a;->p:Ljava/lang/String;

    return-object v0
.end method

.method private static l(Ljava/lang/String;)I
    .locals 3

    const-string v0, "x"

    .line 2898
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    return v2

    .line 2902
    :cond_0
    :try_start_0
    invoke-virtual {p0, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 2903
    invoke-virtual {p0, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p0

    if-eqz p0, :cond_1

    .line 2904
    array-length v0, p0

    if-lez v0, :cond_1

    .line 2905
    aget-object p0, p0, v2

    invoke-static {p0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p0
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p0

    :catch_0
    :cond_1
    return v2
.end method

.method private l()Z
    .locals 1

    .line 2873
    iget-object v0, p0, Lcom/tkay/expressad/foundation/d/c$a;->j:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/foundation/d/c$a;->l:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/foundation/d/c$a;->k:Ljava/lang/String;

    .line 2874
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method


# virtual methods
.method public final a()Ljava/lang/String;
    .locals 1

    .line 2755
    iget-object v0, p0, Lcom/tkay/expressad/foundation/d/c$a;->s:Ljava/lang/String;

    return-object v0
.end method

.method public final b()Ljava/lang/String;
    .locals 1

    .line 2767
    iget-object v0, p0, Lcom/tkay/expressad/foundation/d/c$a;->j:Ljava/lang/String;

    return-object v0
.end method

.method public final c()Ljava/lang/String;
    .locals 1

    .line 2775
    iget-object v0, p0, Lcom/tkay/expressad/foundation/d/c$a;->k:Ljava/lang/String;

    return-object v0
.end method

.method public final d()Ljava/lang/String;
    .locals 1

    .line 2783
    iget-object v0, p0, Lcom/tkay/expressad/foundation/d/c$a;->l:Ljava/lang/String;

    return-object v0
.end method
