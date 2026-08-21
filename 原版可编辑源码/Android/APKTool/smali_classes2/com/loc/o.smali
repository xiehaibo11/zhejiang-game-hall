.class public final Lcom/loc/o;
.super Ljava/lang/Object;
.source "DeviceInfo.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/loc/o$b;,
        Lcom/loc/o$c;,
        Lcom/loc/o$a;
    }
.end annotation


# static fields
.field private static A:Ljava/lang/String; = ""

.field private static B:Z = false

.field private static C:Ljava/lang/String; = ""

.field private static D:Ljava/lang/String; = ""

.field private static E:Ljava/lang/String; = ""

.field private static F:Z = false

.field private static G:Z = false

.field private static H:Ljava/lang/String; = ""

.field private static I:Z = false

.field private static J:Z = false

.field private static K:J = 0x0L

.field private static L:I = 0x0

.field private static M:Ljava/lang/String; = null

.field private static N:Ljava/lang/String; = ""

.field private static O:Z = true

.field private static P:Z = false

.field private static Q:Ljava/lang/String; = ""

.field private static R:Z = false

.field private static S:I = -0x1

.field private static T:Z = false

.field private static U:Ljava/lang/Object; = null

.field private static V:I = -0x1

.field private static W:Z = false

.field private static volatile X:Lcom/loc/o$b; = null

.field static a:Ljava/lang/String; = ""

.field static b:Ljava/lang/String; = ""

.field static volatile c:Z = true

.field public static d:Z = false

.field static e:Ljava/lang/String; = ""

.field static f:Z = false

.field public static g:Lcom/loc/o$a; = null

.field static h:I = -0x1

.field static i:Ljava/lang/String; = ""

.field static j:Ljava/lang/String; = ""

.field private static k:Ljava/lang/String; = null

.field private static l:Z = false

.field private static m:Ljava/lang/String; = ""

.field private static volatile n:Z = false

.field private static o:Ljava/lang/String; = ""

.field private static p:Z = false

.field private static q:Ljava/lang/String; = null

.field private static r:Landroid/os/IBinder; = null

.field private static s:Z = false

.field private static t:Z = false

.field private static u:Ljava/lang/String; = ""

.field private static v:Ljava/lang/String; = ""

.field private static w:Z = false

.field private static x:Z = false

.field private static y:Ljava/lang/String; = ""

.field private static z:Z


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method private static A(Landroid/content/Context;)Ljava/lang/String;
    .locals 3

    const-string v0, "IeGlhb21p"

    invoke-static {v0}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    sget-object v2, Landroid/os/Build;->MANUFACTURER:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_9

    invoke-static {v0}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sget-object v1, Landroid/os/Build;->BRAND:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_9

    const-string v0, "IUkVETUk="

    invoke-static {v0}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    sget-object v2, Landroid/os/Build;->MANUFACTURER:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_9

    invoke-static {v0}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sget-object v1, Landroid/os/Build;->BRAND:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto/16 :goto_4

    :cond_0
    const-string v0, "Idml2bw"

    invoke-static {v0}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    sget-object v2, Landroid/os/Build;->MANUFACTURER:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_8

    invoke-static {v0}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sget-object v1, Landroid/os/Build;->BRAND:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1

    goto/16 :goto_3

    :cond_1
    const-string v0, "IaHVhd2Vp"

    invoke-static {v0}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    sget-object v2, Landroid/os/Build;->MANUFACTURER:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_7

    invoke-static {v0}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sget-object v1, Landroid/os/Build;->BRAND:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_7

    const-string v0, "ISE9OT1I="

    invoke-static {v0}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sget-object v1, Landroid/os/Build;->MANUFACTURER:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_2

    goto :goto_2

    :cond_2
    const-string v0, "Mc2Ftc3VuZw"

    invoke-static {v0}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    sget-object v2, Landroid/os/Build;->MANUFACTURER:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_6

    invoke-static {v0}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sget-object v1, Landroid/os/Build;->BRAND:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_3

    goto :goto_1

    :cond_3
    const-string v0, "IT1BQTw"

    invoke-static {v0}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    sget-object v2, Landroid/os/Build;->MANUFACTURER:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_5

    invoke-static {v0}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sget-object v1, Landroid/os/Build;->BRAND:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_5

    const-string v0, "MT25lUGx1cw"

    invoke-static {v0}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    sget-object v2, Landroid/os/Build;->MANUFACTURER:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_5

    invoke-static {v0}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sget-object v1, Landroid/os/Build;->BRAND:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_5

    const-string v0, "IUkVBTE1F"

    invoke-static {v0}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sget-object v1, Landroid/os/Build;->BRAND:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_4

    goto :goto_0

    :cond_4
    const/4 p0, 0x1

    sput-boolean p0, Lcom/loc/o;->p:Z

    sget-object p0, Lcom/loc/o;->o:Ljava/lang/String;

    return-object p0

    :cond_5
    :goto_0
    const/4 v0, 0x5

    invoke-static {p0, v0}, Lcom/loc/o;->a(Landroid/content/Context;I)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_6
    :goto_1
    const/4 v0, 0x4

    invoke-static {p0, v0}, Lcom/loc/o;->a(Landroid/content/Context;I)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_7
    :goto_2
    const/4 v0, 0x2

    invoke-static {p0, v0}, Lcom/loc/o;->a(Landroid/content/Context;I)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_8
    :goto_3
    invoke-static {p0}, Lcom/loc/o;->z(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_9
    :goto_4
    invoke-static {p0}, Lcom/loc/o;->y(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private static B(Landroid/content/Context;)Ljava/lang/String;
    .locals 6

    const-string v0, ""

    const-string v1, "a1"

    const-string v2, "open_common"

    sget-object v3, Lcom/loc/o;->H:Ljava/lang/String;

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_0

    sget-object p0, Lcom/loc/o;->H:Ljava/lang/String;

    return-object p0

    :cond_0
    :try_start_0
    invoke-static {p0, v2, v1, v0}, Lcom/loc/bd;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_1

    new-instance v3, Ljava/lang/StringBuilder;

    const-string v4, "amap"

    invoke-direct {v3, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-static {}, Ljava/util/UUID;->randomUUID()Ljava/util/UUID;

    move-result-object v4

    invoke-virtual {v4}, Ljava/util/UUID;->toString()Ljava/lang/String;

    move-result-object v4

    const-string v5, "_"

    invoke-virtual {v4, v5, v0}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/loc/o;->H:Ljava/lang/String;

    invoke-static {p0, v2}, Lcom/loc/bd;->a(Landroid/content/Context;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    move-result-object p0

    sget-object v0, Lcom/loc/o;->H:Ljava/lang/String;

    invoke-static {v0}, Lcom/loc/x;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {p0, v1, v0}, Lcom/loc/bd;->a(Landroid/content/SharedPreferences$Editor;Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {p0}, Lcom/loc/bd;->a(Landroid/content/SharedPreferences$Editor;)V

    goto :goto_0

    :cond_1
    invoke-static {v3}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/loc/o;->H:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :goto_0
    sget-object p0, Lcom/loc/o;->H:Ljava/lang/String;

    return-object p0

    :catchall_0
    sget-object p0, Lcom/loc/o;->H:Ljava/lang/String;

    return-object p0
.end method

.method private static C(Landroid/content/Context;)Ljava/lang/String;
    .locals 1

    sget-boolean v0, Lcom/loc/o;->R:Z

    if-eqz v0, :cond_0

    sget-object p0, Lcom/loc/o;->Q:Ljava/lang/String;

    return-object p0

    :cond_0
    invoke-static {p0}, Lcom/loc/o;->L(Landroid/content/Context;)Lcom/loc/o$b;

    invoke-static {p0}, Lcom/loc/o;->G(Landroid/content/Context;)Landroid/telephony/TelephonyManager;

    move-result-object p0

    if-nez p0, :cond_1

    sget-object p0, Lcom/loc/o;->Q:Ljava/lang/String;

    return-object p0

    :cond_1
    invoke-virtual {p0}, Landroid/telephony/TelephonyManager;->getSimOperatorName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/loc/o;->Q:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_2

    invoke-virtual {p0}, Landroid/telephony/TelephonyManager;->getNetworkOperatorName()Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/loc/o;->Q:Ljava/lang/String;

    :cond_2
    const/4 p0, 0x1

    sput-boolean p0, Lcom/loc/o;->R:Z

    sget-object p0, Lcom/loc/o;->Q:Ljava/lang/String;

    return-object p0
.end method

.method private static D(Landroid/content/Context;)I
    .locals 1

    sget-boolean v0, Lcom/loc/o;->T:Z

    if-eqz v0, :cond_0

    sget p0, Lcom/loc/o;->S:I

    return p0

    :cond_0
    invoke-static {p0}, Lcom/loc/o;->L(Landroid/content/Context;)Lcom/loc/o$b;

    if-eqz p0, :cond_4

    const-string v0, "AYW5kcm9pZC5wZXJtaXNzaW9uLkFDQ0VTU19ORVRXT1JLX1NUQVRF"

    invoke-static {v0}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {p0, v0}, Lcom/loc/o;->b(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_1

    goto :goto_0

    :cond_1
    invoke-static {p0}, Lcom/loc/o;->E(Landroid/content/Context;)Landroid/net/ConnectivityManager;

    move-result-object p0

    if-nez p0, :cond_2

    sget p0, Lcom/loc/o;->S:I

    return p0

    :cond_2
    invoke-virtual {p0}, Landroid/net/ConnectivityManager;->getActiveNetworkInfo()Landroid/net/NetworkInfo;

    move-result-object p0

    const/4 v0, 0x1

    if-nez p0, :cond_3

    sput-boolean v0, Lcom/loc/o;->T:Z

    sget p0, Lcom/loc/o;->S:I

    return p0

    :cond_3
    invoke-virtual {p0}, Landroid/net/NetworkInfo;->getType()I

    move-result p0

    sput p0, Lcom/loc/o;->S:I

    sput-boolean v0, Lcom/loc/o;->T:Z

    return p0

    :cond_4
    :goto_0
    sget p0, Lcom/loc/o;->S:I

    return p0
.end method

.method private static E(Landroid/content/Context;)Landroid/net/ConnectivityManager;
    .locals 1

    const-string v0, "connectivity"

    invoke-virtual {p0, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/net/ConnectivityManager;

    return-object p0
.end method

.method private static F(Landroid/content/Context;)I
    .locals 1

    sget-boolean v0, Lcom/loc/o;->W:Z

    if-eqz v0, :cond_0

    sget p0, Lcom/loc/o;->V:I

    return p0

    :cond_0
    invoke-static {p0}, Lcom/loc/o;->L(Landroid/content/Context;)Lcom/loc/o$b;

    const-string v0, "AYW5kcm9pZC5wZXJtaXNzaW9uLkFDQ0VTU19ORVRXT1JLX1NUQVRF"

    invoke-static {v0}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {p0, v0}, Lcom/loc/o;->b(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_1

    sget p0, Lcom/loc/o;->V:I

    return p0

    :cond_1
    invoke-static {p0}, Lcom/loc/o;->E(Landroid/content/Context;)Landroid/net/ConnectivityManager;

    move-result-object p0

    if-nez p0, :cond_2

    sget p0, Lcom/loc/o;->V:I

    return p0

    :cond_2
    invoke-virtual {p0}, Landroid/net/ConnectivityManager;->getActiveNetworkInfo()Landroid/net/NetworkInfo;

    move-result-object p0

    if-eqz p0, :cond_3

    invoke-virtual {p0}, Landroid/net/NetworkInfo;->isAvailable()Z

    move-result v0

    if-eqz v0, :cond_3

    invoke-virtual {p0}, Landroid/net/NetworkInfo;->getSubtype()I

    move-result p0

    sput p0, Lcom/loc/o;->V:I

    const/4 p0, 0x1

    sput-boolean p0, Lcom/loc/o;->W:Z

    :cond_3
    sget p0, Lcom/loc/o;->V:I

    return p0
.end method

.method private static G(Landroid/content/Context;)Landroid/telephony/TelephonyManager;
    .locals 1

    const-string v0, "phone"

    invoke-virtual {p0, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/telephony/TelephonyManager;

    return-object p0
.end method

.method private static H(Landroid/content/Context;)Ljava/lang/String;
    .locals 6

    const-string v0, "UTF-8"

    sget-boolean v1, Lcom/loc/o;->c:Z

    const-string v2, ""

    if-nez v1, :cond_0

    return-object v2

    :cond_0
    const/4 v1, 0x0

    :try_start_0
    invoke-static {p0}, Lcom/loc/o;->I(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    nop

    :goto_0
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    const/4 v3, 0x0

    if-eqz p0, :cond_1

    sput-boolean v3, Lcom/loc/o;->c:Z

    return-object v2

    :cond_1
    :try_start_1
    const-string p0, "MAAAAAAAAAAAAAAAAAAAAAA"

    invoke-static {p0}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p0, v0}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object p0

    invoke-static {v1}, Lcom/loc/p;->b(Ljava/lang/String;)[B

    move-result-object v1

    const-string v4, "HYW1hcGFkaXVhbWFwYWRpdWFtYXBhZGl1YW1hcGFkaXU"

    invoke-static {v4}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    new-instance v5, Ljava/lang/String;

    invoke-virtual {v4, v0}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object v4

    invoke-static {v4, v1, p0}, Lcom/loc/p;->a([B[B[B)[B

    move-result-object p0

    invoke-direct {v5, p0, v0}, Ljava/lang/String;-><init>([BLjava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    return-object v5

    :catchall_1
    sput-boolean v3, Lcom/loc/o;->c:Z

    return-object v2
.end method

.method private static I(Landroid/content/Context;)Ljava/lang/String;
    .locals 3

    const-string v0, ""

    :try_start_0
    invoke-static {p0}, Lcom/loc/o;->J(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-object v1, v0

    :goto_0
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_0

    return-object v1

    :cond_0
    if-nez p0, :cond_1

    return-object v0

    :cond_1
    const-string v1, "SU2hhcmVkUHJlZmVyZW5jZUFkaXU"

    invoke-static {v1}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x0

    invoke-virtual {p0, v1, v2}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object p0

    const-string v1, "RYW1hcF9kZXZpY2VfYWRpdQ"

    invoke-static {v1}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/loc/s;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-interface {p0, v1, v0}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private static J(Landroid/content/Context;)Ljava/lang/String;
    .locals 8

    const-string v0, "SIw"

    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const-string v2, ""

    const/16 v3, 0x13

    if-lt v1, v3, :cond_0

    const-string v1, "EYW5kcm9pZC5wZXJtaXNzaW9uLlJFQURfRVhURVJOQUxfU1RPUkFHRQ=="

    invoke-static {v1}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {p0, v1}, Lcom/loc/o;->b(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_0

    return-object v2

    :cond_0
    const-string v1, "LYW1hcF9kZXZpY2VfYWRpdQ"

    invoke-static {v1}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/loc/s;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {p0}, Lcom/loc/o;->K(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_1

    return-object v2

    :cond_1
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object p0, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v3, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, "KYmFja3Vwcw"

    invoke-static {p0}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v3, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    new-instance v3, Ljava/io/File;

    const-string v4, "MLmFkaXU"

    invoke-static {v4}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-direct {v3, p0, v4}, Ljava/io/File;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v3}, Ljava/io/File;->exists()Z

    move-result p0

    if-eqz p0, :cond_6

    invoke-virtual {v3}, Ljava/io/File;->canRead()Z

    move-result p0

    if-nez p0, :cond_2

    goto/16 :goto_3

    :cond_2
    invoke-virtual {v3}, Ljava/io/File;->length()J

    move-result-wide v4

    const-wide/16 v6, 0x0

    cmp-long p0, v4, v6

    if-nez p0, :cond_3

    invoke-virtual {v3}, Ljava/io/File;->delete()Z

    return-object v2

    :cond_3
    const/4 p0, 0x0

    :try_start_0
    new-instance v4, Ljava/io/RandomAccessFile;

    const-string v5, "r"

    invoke-direct {v4, v3, v5}, Ljava/io/RandomAccessFile;-><init>(Ljava/io/File;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    const/16 v3, 0x400

    :try_start_1
    new-array v3, v3, [B

    new-instance v5, Ljava/io/ByteArrayOutputStream;

    invoke-direct {v5}, Ljava/io/ByteArrayOutputStream;-><init>()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_2

    :goto_0
    :try_start_2
    invoke-virtual {v4, v3}, Ljava/io/RandomAccessFile;->read([B)I

    move-result p0

    const/4 v6, -0x1

    const/4 v7, 0x0

    if-eq p0, v6, :cond_4

    invoke-virtual {v5, v3, v7, p0}, Ljava/io/ByteArrayOutputStream;->write([BII)V

    goto :goto_0

    :cond_4
    new-instance p0, Ljava/lang/String;

    invoke-virtual {v5}, Ljava/io/ByteArrayOutputStream;->toByteArray()[B

    move-result-object v3

    const-string v6, "UTF-8"

    invoke-direct {p0, v3, v6}, Ljava/lang/String;-><init>([BLjava/lang/String;)V

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_5

    invoke-static {v0}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p0, v3}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_5

    invoke-static {v0}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p0

    if-eqz p0, :cond_5

    array-length v0, p0

    const/4 v3, 0x2

    if-ne v0, v3, :cond_5

    aget-object v0, p0, v7

    invoke-static {v1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_5

    const/4 v0, 0x1

    aget-object p0, p0, v0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    invoke-static {v5}, Lcom/loc/o;->a(Ljava/io/Closeable;)V

    invoke-static {v4}, Lcom/loc/o;->a(Ljava/io/Closeable;)V

    return-object p0

    :cond_5
    invoke-static {v5}, Lcom/loc/o;->a(Ljava/io/Closeable;)V

    goto :goto_2

    :catchall_0
    move-object p0, v5

    goto :goto_1

    :catchall_1
    move-object v4, p0

    :catchall_2
    :goto_1
    invoke-static {p0}, Lcom/loc/o;->a(Ljava/io/Closeable;)V

    :goto_2
    invoke-static {v4}, Lcom/loc/o;->a(Ljava/io/Closeable;)V

    :cond_6
    :goto_3
    return-object v2
.end method

.method private static K(Landroid/content/Context;)Ljava/lang/String;
    .locals 9

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/4 v1, 0x0

    const/16 v2, 0x9

    if-ge v0, v2, :cond_0

    return-object v1

    :cond_0
    :try_start_0
    const-string v0, "storage"

    invoke-virtual {p0, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/os/storage/StorageManager;

    const-string v0, "SYW5kcm9pZC5vcy5zdG9yYWdlLlN0b3JhZ2VWb2x1bWU"

    invoke-static {v0}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v2

    const-string v3, "MZ2V0Vm9sdW1lTGlzdA"

    invoke-static {v3}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    const/4 v4, 0x0

    new-array v5, v4, [Ljava/lang/Class;

    invoke-virtual {v2, v3, v5}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v2

    const-string v3, "FZ2V0UGF0aA"

    invoke-static {v3}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    new-array v5, v4, [Ljava/lang/Class;

    invoke-virtual {v0, v3, v5}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v3

    const-string v5, "DaXNSZW1vdmFibGU"

    invoke-static {v5}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    new-array v6, v4, [Ljava/lang/Class;

    invoke-virtual {v0, v5, v6}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v0

    new-array v5, v4, [Ljava/lang/Object;

    invoke-virtual {v2, p0, v5}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    invoke-static {p0}, Ljava/lang/reflect/Array;->getLength(Ljava/lang/Object;)I

    move-result v2

    const/4 v5, 0x0

    :goto_0
    if-ge v5, v2, :cond_2

    invoke-static {p0, v5}, Ljava/lang/reflect/Array;->get(Ljava/lang/Object;I)Ljava/lang/Object;

    move-result-object v6

    new-array v7, v4, [Ljava/lang/Object;

    invoke-virtual {v3, v6, v7}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Ljava/lang/String;

    new-array v8, v4, [Ljava/lang/Object;

    invoke-virtual {v0, v6, v8}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Ljava/lang/Boolean;

    invoke-virtual {v6}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v6
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v6, :cond_1

    return-object v7

    :cond_1
    add-int/lit8 v5, v5, 0x1

    goto :goto_0

    :catchall_0
    :cond_2
    return-object v1
.end method

.method private static declared-synchronized L(Landroid/content/Context;)Lcom/loc/o$b;
    .locals 2

    const-class v0, Lcom/loc/o;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/loc/o;->X:Lcom/loc/o$b;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v1, :cond_1

    if-nez p0, :cond_0

    const/4 p0, 0x0

    monitor-exit v0

    return-object p0

    :cond_0
    :try_start_1
    new-instance v1, Lcom/loc/o$b;

    invoke-direct {v1}, Lcom/loc/o$b;-><init>()V

    sput-object v1, Lcom/loc/o;->X:Lcom/loc/o$b;

    invoke-virtual {p0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    invoke-virtual {v1, p0}, Lcom/loc/o$b;->a(Landroid/content/Context;)V

    :cond_1
    sget-object p0, Lcom/loc/o;->X:Lcom/loc/o$b;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    monitor-exit v0

    return-object p0

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method static synthetic a(Landroid/os/IBinder;)Landroid/os/IBinder;
    .locals 0

    sput-object p0, Lcom/loc/o;->r:Landroid/os/IBinder;

    return-object p0
.end method

.method public static a()Ljava/lang/String;
    .locals 1

    sget-object v0, Lcom/loc/o;->k:Ljava/lang/String;

    return-object v0
.end method

.method public static a(Landroid/content/Context;)Ljava/lang/String;
    .locals 3

    const-string v0, ""

    :try_start_0
    sget-object v1, Lcom/loc/o;->b:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    sget-object p0, Lcom/loc/o;->b:Ljava/lang/String;

    return-object p0

    :cond_0
    if-nez p0, :cond_1

    return-object v0

    :cond_1
    invoke-static {p0}, Lcom/loc/o;->H(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v1

    sput-object v1, Lcom/loc/o;->b:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    sget-object p0, Lcom/loc/o;->b:Ljava/lang/String;

    return-object p0

    :cond_2
    invoke-static {}, Lcom/loc/o;->c()Lcom/loc/o$a;

    move-result-object v1

    if-nez v1, :cond_3

    return-object v0

    :cond_3
    sget-boolean v1, Lcom/loc/o;->n:Z

    if-eqz v1, :cond_4

    return-object v0

    :cond_4
    const/4 v1, 0x1

    sput-boolean v1, Lcom/loc/o;->n:Z

    invoke-static {}, Lcom/loc/cr;->a()Lcom/loc/cr;

    move-result-object v1

    new-instance v2, Lcom/loc/o$1;

    invoke-direct {v2, p0}, Lcom/loc/o$1;-><init>(Landroid/content/Context;)V

    invoke-virtual {v1, v2}, Lcom/loc/cr;->b(Lcom/loc/cs;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-object v0
.end method

.method private static a(Landroid/content/Context;I)Ljava/lang/String;
    .locals 12

    const/4 v0, 0x1

    :try_start_0
    new-instance v1, Landroid/content/Intent;

    invoke-direct {v1}, Landroid/content/Intent;-><init>()V

    const/4 v2, 0x5

    const/4 v3, 0x4

    const/4 v4, 0x2

    if-eq p1, v4, :cond_2

    if-eq p1, v3, :cond_1

    if-eq p1, v2, :cond_0

    sput-boolean v0, Lcom/loc/o;->p:Z

    sget-object p0, Lcom/loc/o;->o:Ljava/lang/String;

    return-object p0

    :cond_0
    const-string v5, "YY29tLmhleXRhcC5vcGVuaWQ"

    invoke-static {v5}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    const-string v6, "SY29tLmhleXRhcC5vcGVuaWQuSWRlbnRpZnlTZXJ2aWNl"

    invoke-static {v6}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v1, v5, v6}, Landroid/content/Intent;->setClassName(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string v5, "EYWN0aW9uLmNvbS5oZXl0YXAub3BlbmlkLk9QRU5fSURfU0VSVklDRQ"

    invoke-static {v5}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v1, v5}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;

    goto :goto_0

    :cond_1
    const-string v5, "WY29tLnNhbXN1bmcuYW5kcm9pZC5kZXZpY2VpZHNlcnZpY2U"

    invoke-static {v5}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    const-string v6, "QY29tLnNhbXN1bmcuYW5kcm9pZC5kZXZpY2VpZHNlcnZpY2UuRGV2aWNlSWRTZXJ2aWNl"

    invoke-static {v6}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v1, v5, v6}, Landroid/content/Intent;->setClassName(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    goto :goto_0

    :cond_2
    const-string v5, "WY29tLnVvZGlzLm9wZW5kZXZpY2UuT1BFTklEU19TRVJWSUNF"

    invoke-static {v5}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v1, v5}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;

    const-string v5, "UY29tLmh1YXdlaS5od2lk"

    invoke-static {v5}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v1, v5}, Landroid/content/Intent;->setPackage(Ljava/lang/String;)Landroid/content/Intent;

    :goto_0
    new-instance v5, Lcom/loc/o$c;

    invoke-direct {v5}, Lcom/loc/o$c;-><init>()V

    invoke-virtual {p0, v1, v5, v0}, Landroid/content/Context;->bindService(Landroid/content/Intent;Landroid/content/ServiceConnection;I)Z

    move-result v1

    if-eqz v1, :cond_9

    const/4 v1, 0x0

    const/4 v6, 0x0

    :goto_1
    const/16 v7, 0x64

    if-ge v6, v7, :cond_8

    sget-object v7, Lcom/loc/o;->o:Ljava/lang/String;

    invoke-static {v7}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v7

    if-eqz v7, :cond_8

    add-int/lit8 v6, v6, 0x1

    sget-object v7, Lcom/loc/o;->r:Landroid/os/IBinder;

    if-eqz v7, :cond_7

    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v7

    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v8
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    if-eq p1, v4, :cond_5

    if-eq p1, v3, :cond_4

    if-eq p1, v2, :cond_3

    const/4 v9, 0x0

    goto :goto_4

    :cond_3
    :try_start_1
    const-string v9, "KY29tLmhleXRhcC5vcGVuaWQuSU9wZW5JRA"

    invoke-static {v9}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v7, v9}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v7, v9}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    invoke-static {p0}, Lcom/loc/o;->x(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v7, v9}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    const-string v9, "IT1VJRA"

    invoke-static {v9}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v7, v9}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    goto :goto_3

    :cond_4
    const-string v9, "UY29tLnNhbXN1bmcuYW5kcm9pZC5kZXZpY2VpZHNlcnZpY2UuSURldmljZUlkU2VydmljZQ"

    invoke-static {v9}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v9

    :goto_2
    invoke-virtual {v7, v9}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    goto :goto_3

    :cond_5
    const-string v9, "UY29tLnVvZGlzLm9wZW5kZXZpY2UuYWlkbC5PcGVuRGV2aWNlSWRlbnRpZmllclNlcnZpY2U"

    invoke-static {v9}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v9

    goto :goto_2

    :goto_3
    const/4 v9, 0x1

    :goto_4
    if-eqz v9, :cond_6

    sget-object v9, Lcom/loc/o;->r:Landroid/os/IBinder;

    invoke-interface {v9, v0, v7, v8, v1}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    invoke-virtual {v8}, Landroid/os/Parcel;->readException()V

    invoke-virtual {v8}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v9

    sput-object v9, Lcom/loc/o;->o:Ljava/lang/String;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :cond_6
    :try_start_2
    invoke-virtual {v8}, Landroid/os/Parcel;->recycle()V

    :goto_5
    invoke-virtual {v7}, Landroid/os/Parcel;->recycle()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    goto :goto_6

    :catchall_0
    move-exception v9

    :try_start_3
    const-string v10, "oac"

    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v11

    invoke-static {v9, v10, v11}, Lcom/loc/as;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    :try_start_4
    invoke-virtual {v8}, Landroid/os/Parcel;->recycle()V

    goto :goto_5

    :catchall_1
    move-exception p0

    invoke-virtual {v8}, Landroid/os/Parcel;->recycle()V

    invoke-virtual {v7}, Landroid/os/Parcel;->recycle()V

    throw p0

    :cond_7
    :goto_6
    const-wide/16 v7, 0xf

    invoke-static {v7, v8}, Ljava/lang/Thread;->sleep(J)V

    goto/16 :goto_1

    :cond_8
    invoke-virtual {p0, v5}, Landroid/content/Context;->unbindService(Landroid/content/ServiceConnection;)V

    const/4 p0, 0x0

    sput-object p0, Lcom/loc/o;->r:Landroid/os/IBinder;

    :cond_9
    sget-object p0, Lcom/loc/o;->o:Ljava/lang/String;
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_2

    return-object p0

    :catchall_2
    move-exception p0

    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p1

    const-string v1, "oa"

    invoke-static {p0, v1, p1}, Lcom/loc/as;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    sput-boolean v0, Lcom/loc/o;->p:Z

    sget-object p0, Lcom/loc/o;->o:Ljava/lang/String;

    return-object p0
.end method

.method public static a(Lcom/loc/o$a;)V
    .locals 1

    sget-object v0, Lcom/loc/o;->g:Lcom/loc/o$a;

    if-nez v0, :cond_0

    sput-object p0, Lcom/loc/o;->g:Lcom/loc/o$a;

    :cond_0
    return-void
.end method

.method private static a(Ljava/io/Closeable;)V
    .locals 0

    if-eqz p0, :cond_0

    :try_start_0
    invoke-interface {p0}, Ljava/io/Closeable;->close()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public static a(Ljava/lang/String;)V
    .locals 0

    sput-object p0, Lcom/loc/o;->k:Ljava/lang/String;

    return-void
.end method

.method static synthetic a(Landroid/content/Context;Ljava/lang/String;)Z
    .locals 0

    invoke-static {p0, p1}, Lcom/loc/o;->b(Landroid/content/Context;Ljava/lang/String;)Z

    move-result p0

    return p0
.end method

.method public static b()Ljava/lang/String;
    .locals 2

    const-string v0, ""

    :try_start_0
    sget-object v1, Lcom/loc/o;->e:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    sget-object v0, Lcom/loc/o;->e:Ljava/lang/String;

    return-object v0

    :cond_0
    sget-object v1, Lcom/loc/o;->g:Lcom/loc/o$a;

    if-nez v1, :cond_1

    return-object v0

    :cond_1
    sget-object v1, Lcom/loc/o;->g:Lcom/loc/o$a;

    invoke-interface {v1}, Lcom/loc/o$a;->a()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-object v0
.end method

.method public static b(Landroid/content/Context;)Ljava/lang/String;
    .locals 0

    :try_start_0
    invoke-static {p0}, Lcom/loc/o;->C(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :catchall_0
    move-exception p0

    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    const-string p0, ""

    return-object p0
.end method

.method private static b(Landroid/content/Context;Ljava/lang/String;)Z
    .locals 0

    if-eqz p0, :cond_0

    invoke-virtual {p0, p1}, Landroid/content/Context;->checkCallingOrSelfPermission(Ljava/lang/String;)I

    move-result p0

    if-nez p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method public static c(Landroid/content/Context;)I
    .locals 0

    :try_start_0
    invoke-static {p0}, Lcom/loc/o;->F(Landroid/content/Context;)I

    move-result p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return p0

    :catchall_0
    move-exception p0

    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    const/4 p0, -0x1

    return p0
.end method

.method public static c()Lcom/loc/o$a;
    .locals 1

    sget-object v0, Lcom/loc/o;->g:Lcom/loc/o$a;

    return-object v0
.end method

.method public static d(Landroid/content/Context;)I
    .locals 0

    :try_start_0
    invoke-static {p0}, Lcom/loc/o;->D(Landroid/content/Context;)I

    move-result p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return p0

    :catchall_0
    move-exception p0

    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    const/4 p0, -0x1

    return p0
.end method

.method public static d()Ljava/lang/String;
    .locals 4

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const-string v1, ""

    const/16 v2, 0x1d

    if-lt v0, v2, :cond_0

    return-object v1

    :cond_0
    :try_start_0
    invoke-static {}, Lcom/loc/o;->n()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v2

    const/4 v3, 0x5

    if-ge v2, v3, :cond_1

    return-object v1

    :cond_1
    const/4 v2, 0x3

    invoke-virtual {v0, v2, v3}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v0

    :catchall_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    return-object v1
.end method

.method public static e()Ljava/lang/String;
    .locals 1

    const-string v0, ""

    return-object v0
.end method

.method public static e(Landroid/content/Context;)Ljava/lang/String;
    .locals 2

    :try_start_0
    sget-boolean v0, Lcom/loc/o;->p:Z

    if-eqz v0, :cond_0

    const-string p0, ""

    return-object p0

    :cond_0
    sget-object v0, Lcom/loc/o;->o:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    sget-object p0, Lcom/loc/o;->o:Ljava/lang/String;

    return-object p0

    :cond_1
    sget-boolean v0, Lcom/loc/o;->s:Z

    if-eqz v0, :cond_2

    sget-object p0, Lcom/loc/o;->o:Ljava/lang/String;

    return-object p0

    :cond_2
    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v0

    invoke-static {}, Landroid/os/Looper;->myLooper()Landroid/os/Looper;

    move-result-object v1

    if-ne v0, v1, :cond_3

    invoke-static {}, Lcom/loc/cr;->a()Lcom/loc/cr;

    move-result-object v0

    new-instance v1, Lcom/loc/o$2;

    invoke-direct {v1, p0}, Lcom/loc/o$2;-><init>(Landroid/content/Context;)V

    invoke-virtual {v0, v1}, Lcom/loc/cr;->b(Lcom/loc/cs;)V

    goto :goto_0

    :cond_3
    const/4 v0, 0x1

    sput-boolean v0, Lcom/loc/o;->s:Z

    invoke-static {p0}, Lcom/loc/o;->A(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :catchall_0
    :goto_0
    sget-object p0, Lcom/loc/o;->o:Ljava/lang/String;

    return-object p0
.end method

.method public static f()Ljava/lang/String;
    .locals 1

    const-string v0, ""

    return-object v0
.end method

.method public static f(Landroid/content/Context;)Ljava/lang/String;
    .locals 4

    sget-boolean v0, Lcom/loc/o;->t:Z

    const-string v1, ""

    if-eqz v0, :cond_1

    sget-object p0, Lcom/loc/o;->a:Ljava/lang/String;

    if-nez p0, :cond_0

    return-object v1

    :cond_0
    return-object p0

    :cond_1
    const/4 v0, 0x1

    :try_start_0
    sget-object v2, Lcom/loc/o;->a:Ljava/lang/String;

    if-eqz v2, :cond_2

    sget-object v2, Lcom/loc/o;->a:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-nez v2, :cond_2

    sget-object p0, Lcom/loc/o;->a:Ljava/lang/String;

    return-object p0

    :cond_2
    const-string v2, "WYW5kcm9pZC5wZXJtaXNzaW9uLldSSVRFX1NFVFRJTkdT"

    invoke-static {v2}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-static {p0, v2}, Lcom/loc/o;->b(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_3

    invoke-virtual {p0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v2

    const-string v3, "mqBRboGZkQPcAkyk"

    invoke-static {v2, v3}, Landroid/provider/Settings$System;->getString(Landroid/content/ContentResolver;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    sput-object v2, Lcom/loc/o;->a:Ljava/lang/String;

    :cond_3
    sget-object v2, Lcom/loc/o;->a:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_4

    sput-boolean v0, Lcom/loc/o;->t:Z

    sget-object p0, Lcom/loc/o;->a:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :catchall_0
    :cond_4
    :try_start_1
    invoke-static {p0}, Lcom/loc/o;->v(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v2

    sput-object v2, Lcom/loc/o;->a:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_5

    sput-boolean v0, Lcom/loc/o;->t:Z

    sget-object p0, Lcom/loc/o;->a:Ljava/lang/String;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    return-object p0

    :catchall_1
    :cond_5
    :try_start_2
    invoke-static {p0}, Lcom/loc/o;->w(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/loc/o;->a:Ljava/lang/String;

    sput-boolean v0, Lcom/loc/o;->t:Z
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    goto :goto_0

    :catchall_2
    nop

    :goto_0
    sget-object p0, Lcom/loc/o;->a:Ljava/lang/String;

    if-nez p0, :cond_6

    return-object v1

    :cond_6
    return-object p0
.end method

.method public static g()Ljava/lang/String;
    .locals 1

    const-string v0, ""

    return-object v0
.end method

.method static g(Landroid/content/Context;)Ljava/lang/String;
    .locals 3

    const-string v0, ""

    :try_start_0
    invoke-static {p0}, Lcom/loc/o;->G(Landroid/content/Context;)Landroid/telephony/TelephonyManager;

    move-result-object p0

    if-nez p0, :cond_0

    return-object v0

    :cond_0
    invoke-virtual {p0}, Landroid/telephony/TelephonyManager;->getNetworkOperator()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result v1

    const/4 v2, 0x3

    if-ge v1, v2, :cond_1

    goto :goto_0

    :cond_1
    const/4 v1, 0x0

    invoke-virtual {p0, v1, v2}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    nop

    :catchall_0
    :cond_2
    :goto_0
    return-object v0
.end method

.method public static h()Ljava/lang/String;
    .locals 1

    sget-object v0, Lcom/loc/o;->y:Ljava/lang/String;

    return-object v0
.end method

.method static h(Landroid/content/Context;)Ljava/lang/String;
    .locals 3

    sget-boolean v0, Lcom/loc/o;->B:Z

    if-eqz v0, :cond_0

    sget-object p0, Lcom/loc/o;->A:Ljava/lang/String;

    return-object p0

    :cond_0
    :try_start_0
    invoke-static {p0}, Lcom/loc/o;->L(Landroid/content/Context;)Lcom/loc/o$b;

    invoke-static {p0}, Lcom/loc/o;->G(Landroid/content/Context;)Landroid/telephony/TelephonyManager;

    move-result-object p0

    if-nez p0, :cond_1

    sget-object p0, Lcom/loc/o;->A:Ljava/lang/String;

    return-object p0

    :cond_1
    invoke-virtual {p0}, Landroid/telephony/TelephonyManager;->getNetworkOperator()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x1

    if-nez v0, :cond_3

    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result v0

    const/4 v2, 0x3

    if-ge v0, v2, :cond_2

    goto :goto_0

    :cond_2
    invoke-virtual {p0, v2}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/loc/o;->A:Ljava/lang/String;

    sput-boolean v1, Lcom/loc/o;->B:Z

    goto :goto_1

    :cond_3
    :goto_0
    sput-boolean v1, Lcom/loc/o;->B:Z

    sget-object p0, Lcom/loc/o;->A:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :catchall_0
    :goto_1
    sget-object p0, Lcom/loc/o;->A:Ljava/lang/String;

    return-object p0
.end method

.method public static i(Landroid/content/Context;)I
    .locals 0

    :try_start_0
    invoke-static {p0}, Lcom/loc/o;->F(Landroid/content/Context;)I

    move-result p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return p0

    :catchall_0
    const/4 p0, -0x1

    return p0
.end method

.method static i()[Ljava/lang/String;
    .locals 1

    const-string v0, ""

    filled-new-array {v0, v0}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static j(Landroid/content/Context;)I
    .locals 0

    :try_start_0
    invoke-static {p0}, Lcom/loc/o;->D(Landroid/content/Context;)I

    move-result p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return p0

    :catchall_0
    const/4 p0, -0x1

    return p0
.end method

.method public static j()Ljava/lang/String;
    .locals 1

    sget-object v0, Lcom/loc/o;->i:Ljava/lang/String;

    return-object v0
.end method

.method public static k(Landroid/content/Context;)Landroid/net/NetworkInfo;
    .locals 2

    const-string v0, "AYW5kcm9pZC5wZXJtaXNzaW9uLkFDQ0VTU19ORVRXT1JLX1NUQVRF"

    invoke-static {v0}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {p0, v0}, Lcom/loc/o;->b(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v0

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return-object v1

    :cond_0
    invoke-static {p0}, Lcom/loc/o;->E(Landroid/content/Context;)Landroid/net/ConnectivityManager;

    move-result-object p0

    if-nez p0, :cond_1

    return-object v1

    :cond_1
    invoke-virtual {p0}, Landroid/net/ConnectivityManager;->getActiveNetworkInfo()Landroid/net/NetworkInfo;

    move-result-object p0

    return-object p0
.end method

.method public static k()Ljava/lang/String;
    .locals 1

    sget-object v0, Lcom/loc/o;->D:Ljava/lang/String;

    return-object v0
.end method

.method static l(Landroid/content/Context;)Ljava/lang/String;
    .locals 1

    const/4 v0, 0x0

    :try_start_0
    invoke-static {p0}, Lcom/loc/o;->k(Landroid/content/Context;)Landroid/net/NetworkInfo;

    move-result-object p0

    if-nez p0, :cond_0

    return-object v0

    :cond_0
    invoke-virtual {p0}, Landroid/net/NetworkInfo;->getExtraInfo()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-object v0
.end method

.method public static l()V
    .locals 0

    :try_start_0
    invoke-static {}, Lcom/loc/ar;->a()Lcom/loc/aq;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method public static m()Ljava/lang/String;
    .locals 1

    const-string v0, ""

    return-object v0
.end method

.method static m(Landroid/content/Context;)Ljava/lang/String;
    .locals 3

    :try_start_0
    sget-object v0, Lcom/loc/o;->C:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string v1, ""

    if-eqz v0, :cond_0

    :try_start_1
    sget-object v0, Lcom/loc/o;->C:Ljava/lang/String;

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_0

    sget-object p0, Lcom/loc/o;->C:Ljava/lang/String;

    return-object p0

    :cond_0
    new-instance v0, Landroid/util/DisplayMetrics;

    invoke-direct {v0}, Landroid/util/DisplayMetrics;-><init>()V

    const-string v2, "window"

    invoke-virtual {p0, v2}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/view/WindowManager;

    if-nez p0, :cond_1

    return-object v1

    :cond_1
    invoke-interface {p0}, Landroid/view/WindowManager;->getDefaultDisplay()Landroid/view/Display;

    move-result-object p0

    invoke-virtual {p0, v0}, Landroid/view/Display;->getMetrics(Landroid/util/DisplayMetrics;)V

    iget p0, v0, Landroid/util/DisplayMetrics;->widthPixels:I

    iget v0, v0, Landroid/util/DisplayMetrics;->heightPixels:I
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    const-string v1, "*"

    if-le v0, p0, :cond_2

    :try_start_2
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, p0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    :goto_0
    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    goto :goto_1

    :cond_2
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    goto :goto_0

    :goto_1
    sput-object p0, Lcom/loc/o;->C:Ljava/lang/String;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    :catchall_0
    sget-object p0, Lcom/loc/o;->C:Ljava/lang/String;

    return-object p0
.end method

.method public static n()Ljava/lang/String;
    .locals 1

    const-string v0, ""

    return-object v0
.end method

.method public static n(Landroid/content/Context;)Ljava/lang/String;
    .locals 2

    const-string v0, ""

    :try_start_0
    const-string v1, "WYW5kcm9pZC5wZXJtaXNzaW9uLlJFQURfUEhPTkVfU1RBVEU="

    invoke-static {v1}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {p0, v1}, Lcom/loc/o;->b(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_0

    sget-object p0, Lcom/loc/o;->N:Ljava/lang/String;

    return-object p0

    :cond_0
    invoke-static {p0}, Lcom/loc/o;->G(Landroid/content/Context;)Landroid/telephony/TelephonyManager;

    move-result-object p0

    if-nez p0, :cond_1

    return-object v0

    :cond_1
    invoke-virtual {p0}, Landroid/telephony/TelephonyManager;->getNetworkOperatorName()Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :catchall_0
    return-object v0
.end method

.method public static o()J
    .locals 8

    sget-wide v0, Lcom/loc/o;->K:J

    const-wide/16 v2, 0x0

    cmp-long v4, v0, v2

    if-eqz v4, :cond_0

    return-wide v0

    :cond_0
    :try_start_0
    new-instance v0, Landroid/os/StatFs;

    invoke-static {}, Landroid/os/Environment;->getRootDirectory()Ljava/io/File;

    move-result-object v1

    invoke-virtual {v1}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/StatFs;-><init>(Ljava/lang/String;)V

    new-instance v1, Landroid/os/StatFs;

    invoke-static {}, Landroid/os/Environment;->getExternalStorageDirectory()Ljava/io/File;

    move-result-object v2

    invoke-virtual {v2}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v1, v2}, Landroid/os/StatFs;-><init>(Ljava/lang/String;)V

    sget v2, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v3, 0x12

    const-wide/32 v4, 0x100000

    if-lt v2, v3, :cond_1

    invoke-virtual {v0}, Landroid/os/StatFs;->getBlockCountLong()J

    move-result-wide v2

    invoke-virtual {v0}, Landroid/os/StatFs;->getBlockSizeLong()J

    move-result-wide v6

    mul-long v2, v2, v6

    div-long/2addr v2, v4

    invoke-virtual {v1}, Landroid/os/StatFs;->getBlockCountLong()J

    move-result-wide v6

    invoke-virtual {v1}, Landroid/os/StatFs;->getBlockSizeLong()J

    move-result-wide v0

    mul-long v6, v6, v0

    div-long/2addr v6, v4

    goto :goto_0

    :cond_1
    invoke-virtual {v0}, Landroid/os/StatFs;->getBlockCount()I

    move-result v2

    int-to-long v2, v2

    invoke-virtual {v0}, Landroid/os/StatFs;->getBlockSize()I

    move-result v0

    int-to-long v6, v0

    mul-long v2, v2, v6

    div-long/2addr v2, v4

    invoke-virtual {v1}, Landroid/os/StatFs;->getBlockCount()I

    move-result v0

    int-to-long v6, v0

    invoke-virtual {v1}, Landroid/os/StatFs;->getBlockSize()I

    move-result v0

    int-to-long v0, v0

    mul-long v6, v6, v0

    div-long/2addr v6, v4

    :goto_0
    add-long/2addr v2, v6

    sput-wide v2, Lcom/loc/o;->K:J
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    sget-wide v0, Lcom/loc/o;->K:J

    return-wide v0
.end method

.method public static o(Landroid/content/Context;)Ljava/lang/String;
    .locals 2

    const-string v0, ""

    :try_start_0
    const-string v1, "AYW5kcm9pZC5wZXJtaXNzaW9uLkFDQ0VTU19ORVRXT1JLX1NUQVRF"

    invoke-static {v1}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {p0, v1}, Lcom/loc/o;->b(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_0

    return-object v0

    :cond_0
    invoke-static {p0}, Lcom/loc/o;->E(Landroid/content/Context;)Landroid/net/ConnectivityManager;

    move-result-object p0

    if-nez p0, :cond_1

    return-object v0

    :cond_1
    invoke-virtual {p0}, Landroid/net/ConnectivityManager;->getActiveNetworkInfo()Landroid/net/NetworkInfo;

    move-result-object p0

    if-nez p0, :cond_2

    return-object v0

    :cond_2
    invoke-virtual {p0}, Landroid/net/NetworkInfo;->getTypeName()Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :catchall_0
    return-object v0
.end method

.method public static p()Ljava/lang/String;
    .locals 1

    sget-object v0, Lcom/loc/o;->M:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    sget-object v0, Lcom/loc/o;->M:Ljava/lang/String;

    return-object v0

    :cond_0
    const-string v0, "os.arch"

    invoke-static {v0}, Ljava/lang/System;->getProperty(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/loc/o;->M:Ljava/lang/String;

    return-object v0
.end method

.method public static p(Landroid/content/Context;)Ljava/lang/String;
    .locals 2

    :try_start_0
    invoke-static {}, Lcom/loc/o;->k()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :try_start_1
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-static {p0}, Lcom/loc/o;->a(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    :cond_0
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-static {p0}, Lcom/loc/o;->f(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    :cond_1
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-static {p0}, Lcom/loc/o;->e(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    :cond_2
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_3

    invoke-static {}, Lcom/loc/o;->g()Ljava/lang/String;

    move-result-object v0

    :cond_3
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_4

    invoke-static {p0}, Lcom/loc/o;->B(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    goto :goto_0

    :catchall_0
    const-string v0, ""

    :catchall_1
    :cond_4
    :goto_0
    return-object v0
.end method

.method public static q(Landroid/content/Context;)Ljava/lang/String;
    .locals 3

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/loc/o;->k()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "#"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {p0}, Lcom/loc/o;->a(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {p0}, Lcom/loc/o;->p(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static q()V
    .locals 2

    const/4 v0, -0x1

    sput v0, Lcom/loc/o;->S:I

    const/4 v1, 0x0

    sput-boolean v1, Lcom/loc/o;->T:Z

    sput v0, Lcom/loc/o;->V:I

    sput-boolean v1, Lcom/loc/o;->W:Z

    const-string v0, ""

    sput-object v0, Lcom/loc/o;->Q:Ljava/lang/String;

    sput-boolean v1, Lcom/loc/o;->R:Z

    sput-object v0, Lcom/loc/o;->A:Ljava/lang/String;

    sput-boolean v1, Lcom/loc/o;->B:Z

    return-void
.end method

.method public static r(Landroid/content/Context;)I
    .locals 4

    sget v0, Lcom/loc/o;->L:I

    if-eqz v0, :cond_0

    return v0

    :cond_0
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x10

    const/4 v2, 0x0

    if-lt v0, v1, :cond_2

    const-string v0, "activity"

    invoke-virtual {p0, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/app/ActivityManager;

    if-nez p0, :cond_1

    return v2

    :cond_1
    new-instance v0, Landroid/app/ActivityManager$MemoryInfo;

    invoke-direct {v0}, Landroid/app/ActivityManager$MemoryInfo;-><init>()V

    invoke-virtual {p0, v0}, Landroid/app/ActivityManager;->getMemoryInfo(Landroid/app/ActivityManager$MemoryInfo;)V

    iget-wide v0, v0, Landroid/app/ActivityManager$MemoryInfo;->totalMem:J

    const-wide/16 v2, 0x400

    div-long/2addr v0, v2

    long-to-int v2, v0

    goto :goto_1

    :cond_2
    const/4 p0, 0x0

    :try_start_0
    new-instance v0, Ljava/io/File;

    const-string v1, "/proc/meminfo"

    invoke-direct {v0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    new-instance v1, Ljava/io/BufferedReader;

    new-instance v3, Ljava/io/FileReader;

    invoke-direct {v3, v0}, Ljava/io/FileReader;-><init>(Ljava/io/File;)V

    invoke-direct {v1, v3}, Ljava/io/BufferedReader;-><init>(Ljava/io/Reader;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    invoke-virtual {v1}, Ljava/io/BufferedReader;->readLine()Ljava/lang/String;

    move-result-object p0

    const-string v0, "\\s+"

    invoke-virtual {p0, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p0

    const/4 v0, 0x1

    aget-object p0, p0, v0

    invoke-static {p0}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object p0

    invoke-virtual {p0}, Ljava/lang/Integer;->intValue()I

    move-result v2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :try_start_2
    invoke-virtual {v1}, Ljava/io/BufferedReader;->close()V

    goto :goto_1

    :catchall_0
    move-object p0, v1

    goto :goto_0

    :catchall_1
    nop

    :goto_0
    if-eqz p0, :cond_3

    invoke-virtual {p0}, Ljava/io/BufferedReader;->close()V
    :try_end_2
    .catch Ljava/io/IOException; {:try_start_2 .. :try_end_2} :catch_0

    :catch_0
    :cond_3
    :goto_1
    div-int/lit16 v2, v2, 0x400

    sput v2, Lcom/loc/o;->L:I

    return v2
.end method

.method static synthetic r()Z
    .locals 1

    const/4 v0, 0x1

    sput-boolean v0, Lcom/loc/o;->s:Z

    return v0
.end method

.method static s(Landroid/content/Context;)Ljava/lang/String;
    .locals 0

    :try_start_0
    invoke-static {p0}, Lcom/loc/o;->C(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :catchall_0
    const-string p0, ""

    return-object p0
.end method

.method public static t(Landroid/content/Context;)Ljava/lang/String;
    .locals 1

    :try_start_0
    sget-object v0, Lcom/loc/o;->m:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {p0}, Lcom/loc/ae;->a(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/loc/o;->m:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    sget-object p0, Lcom/loc/o;->m:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic u(Landroid/content/Context;)Ljava/lang/String;
    .locals 0

    invoke-static {p0}, Lcom/loc/o;->A(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private static v(Landroid/content/Context;)Ljava/lang/String;
    .locals 4

    const-string v0, "Alvin2"

    const-string v1, ""

    :try_start_0
    const-string v2, "UTDID2"

    invoke-static {p0, v0, v2, v1}, Lcom/loc/bd;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_0

    const-string v2, "UTDID"

    invoke-static {p0, v0, v2, v1}, Lcom/loc/bd;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    return-object v2

    :catchall_0
    return-object v1
.end method

.method private static w(Landroid/content/Context;)Ljava/lang/String;
    .locals 8

    const/4 v0, 0x0

    :try_start_0
    const-string v1, "android.permission.READ_EXTERNAL_STORAGE"

    invoke-static {p0, v1}, Lcom/loc/x;->a(Landroid/content/Context;Ljava/lang/String;)Z

    move-result p0

    if-eqz p0, :cond_7

    const-string p0, "mounted"

    invoke-static {}, Landroid/os/Environment;->getExternalStorageState()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_7

    invoke-static {}, Landroid/os/Environment;->getExternalStorageDirectory()Ljava/io/File;

    move-result-object p0

    invoke-virtual {p0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object p0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, "/.UTSystemConfig/Global/Alvin2.xml"

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    new-instance v1, Ljava/io/File;

    invoke-direct {v1, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-static {}, Landroid/util/Xml;->newPullParser()Lorg/xmlpull/v1/XmlPullParser;

    move-result-object p0

    invoke-interface {p0}, Lorg/xmlpull/v1/XmlPullParser;->getEventType()I

    move-result v2

    new-instance v3, Ljava/io/FileInputStream;

    invoke-direct {v3, v1}, Ljava/io/FileInputStream;-><init>(Ljava/io/File;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    :try_start_1
    const-string v0, "utf-8"

    invoke-interface {p0, v3, v0}, Lorg/xmlpull/v1/XmlPullParser;->setInput(Ljava/io/InputStream;Ljava/lang/String;)V

    const/4 v0, 0x0

    const/4 v1, 0x0

    :goto_0
    const/4 v4, 0x1

    if-eq v4, v2, :cond_6

    const/4 v5, 0x2

    if-eq v2, v5, :cond_2

    const/4 v4, 0x3

    if-eq v2, v4, :cond_1

    const/4 v4, 0x4

    if-eq v2, v4, :cond_0

    goto :goto_2

    :cond_0
    if-eqz v1, :cond_5

    invoke-interface {p0}, Lorg/xmlpull/v1/XmlPullParser;->getText()Ljava/lang/String;

    move-result-object p0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    :try_start_2
    invoke-virtual {v3}, Ljava/io/InputStream;->close()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    :catchall_0
    return-object p0

    :cond_1
    const/4 v1, 0x0

    goto :goto_2

    :cond_2
    :try_start_3
    invoke-interface {p0}, Lorg/xmlpull/v1/XmlPullParser;->getAttributeCount()I

    move-result v2

    if-lez v2, :cond_5

    invoke-interface {p0}, Lorg/xmlpull/v1/XmlPullParser;->getAttributeCount()I

    move-result v2

    const/4 v5, 0x0

    :goto_1
    if-ge v5, v2, :cond_5

    invoke-interface {p0, v5}, Lorg/xmlpull/v1/XmlPullParser;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v6

    const-string v7, "UTDID2"

    invoke-virtual {v7, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7

    if-nez v7, :cond_3

    const-string v7, "UTDID"

    invoke-virtual {v7, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_4

    :cond_3
    const/4 v1, 0x1

    :cond_4
    add-int/lit8 v5, v5, 0x1

    goto :goto_1

    :cond_5
    :goto_2
    invoke-interface {p0}, Lorg/xmlpull/v1/XmlPullParser;->next()I

    move-result v2
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    goto :goto_0

    :cond_6
    move-object v0, v3

    goto :goto_3

    :catchall_1
    move-object v0, v3

    goto :goto_5

    :cond_7
    :goto_3
    if-eqz v0, :cond_8

    :goto_4
    :try_start_4
    invoke-virtual {v0}, Ljava/io/InputStream;->close()V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_3

    goto :goto_6

    :catchall_2
    :goto_5
    if-eqz v0, :cond_8

    goto :goto_4

    :catchall_3
    :cond_8
    :goto_6
    const-string p0, ""

    return-object p0
.end method

.method private static x(Landroid/content/Context;)Ljava/lang/String;
    .locals 5

    :try_start_0
    sget-object v0, Lcom/loc/o;->q:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    sget-object p0, Lcom/loc/o;->q:Ljava/lang/String;

    return-object p0

    :cond_0
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v0

    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p0

    const/16 v1, 0x40

    invoke-virtual {v0, p0, v1}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object p0

    iget-object p0, p0, Landroid/content/pm/PackageInfo;->signatures:[Landroid/content/pm/Signature;

    const/4 v0, 0x0

    aget-object p0, p0, v0

    invoke-virtual {p0}, Landroid/content/pm/Signature;->toByteArray()[B

    move-result-object p0

    const-string v1, "IU0hBMQ"

    invoke-static {v1}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/security/MessageDigest;->getInstance(Ljava/lang/String;)Ljava/security/MessageDigest;

    move-result-object v1

    invoke-virtual {v1, p0}, Ljava/security/MessageDigest;->digest([B)[B

    move-result-object p0

    new-instance v1, Ljava/lang/StringBuffer;

    invoke-direct {v1}, Ljava/lang/StringBuffer;-><init>()V

    :goto_0
    array-length v2, p0

    if-ge v0, v2, :cond_1

    aget-byte v2, p0, v0

    and-int/lit16 v2, v2, 0xff

    or-int/lit16 v2, v2, 0x100

    invoke-static {v2}, Ljava/lang/Integer;->toHexString(I)Ljava/lang/String;

    move-result-object v2

    const/4 v3, 0x3

    const/4 v4, 0x1

    invoke-virtual {v2, v4, v3}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_1
    invoke-virtual {v1}, Ljava/lang/StringBuffer;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    sput-object p0, Lcom/loc/o;->q:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_2
    return-object p0

    :catchall_0
    const-string p0, ""

    return-object p0
.end method

.method private static y(Landroid/content/Context;)Ljava/lang/String;
    .locals 7

    const/4 v0, 0x1

    :try_start_0
    const-string v1, "WY29tLmFuZHJvaWQuaWQuaW1wbC5JZFByb3ZpZGVySW1wbA"

    invoke-static {v1}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Class;->newInstance()Ljava/lang/Object;

    move-result-object v2

    const-string v3, "MZ2V0T0FJRA"

    invoke-static {v3}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    new-array v4, v0, [Ljava/lang/Class;

    const-class v5, Landroid/content/Context;

    const/4 v6, 0x0

    aput-object v5, v4, v6

    invoke-virtual {v1, v3, v4}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1

    new-array v3, v0, [Ljava/lang/Object;

    aput-object p0, v3, v6

    invoke-virtual {v1, v2, v3}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    if-eqz p0, :cond_0

    check-cast p0, Ljava/lang/String;

    sput-object p0, Lcom/loc/o;->o:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :catchall_0
    move-exception p0

    const-string v1, "oa"

    const-string v2, "xm"

    invoke-static {p0, v1, v2}, Lcom/loc/as;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    sput-boolean v0, Lcom/loc/o;->p:Z

    :cond_0
    sget-object p0, Lcom/loc/o;->o:Ljava/lang/String;

    return-object p0
.end method

.method private static z(Landroid/content/Context;)Ljava/lang/String;
    .locals 6

    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v0

    const-string p0, "QY29udGVudDovL2NvbS52aXZvLnZtcy5JZFByb3ZpZGVyL0lkZW50aWZpZXJJZC9PQUlE"

    invoke-static {p0}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v1

    const/4 v2, 0x0

    const/4 v3, 0x0

    const/4 v4, 0x0

    const/4 v5, 0x0

    invoke-virtual/range {v0 .. v5}, Landroid/content/ContentResolver;->query(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object p0

    if-eqz p0, :cond_3

    :cond_0
    :goto_0
    invoke-interface {p0}, Landroid/database/Cursor;->moveToNext()Z

    move-result v0

    if-eqz v0, :cond_2

    invoke-interface {p0}, Landroid/database/Cursor;->getColumnCount()I

    move-result v0

    const/4 v1, 0x0

    :goto_1
    if-ge v1, v0, :cond_0

    const-string v2, "IdmFsdWU"

    invoke-static {v2}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-interface {p0, v1}, Landroid/database/Cursor;->getColumnName(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-interface {p0, v1}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/loc/o;->o:Ljava/lang/String;

    goto :goto_0

    :cond_1
    add-int/lit8 v1, v1, 0x1

    goto :goto_1

    :cond_2
    invoke-interface {p0}, Landroid/database/Cursor;->close()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_2

    :catchall_0
    move-exception p0

    const/4 v0, 0x1

    sput-boolean v0, Lcom/loc/o;->p:Z

    const-string v0, "oa"

    const-string v1, "vivo"

    invoke-static {p0, v0, v1}, Lcom/loc/as;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    :goto_2
    sget-object p0, Lcom/loc/o;->o:Ljava/lang/String;

    return-object p0
.end method
