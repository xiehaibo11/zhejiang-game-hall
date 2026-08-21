.class public final Llibrary/b;
.super Ljava/lang/Object;


# static fields
.field public static final a:Z

.field public static final b:Z


# direct methods
.method static constructor <clinit>()V
    .locals 1

    const-string v0, "androidx.fragment.app.FragmentActivity"

    invoke-static {v0}, Llibrary/b;->a(Ljava/lang/String;)Z

    move-result v0

    sput-boolean v0, Llibrary/b;->a:Z

    const-string v0, "android.support.v4.app.FragmentActivity"

    invoke-static {v0}, Llibrary/b;->a(Ljava/lang/String;)Z

    move-result v0

    sput-boolean v0, Llibrary/b;->b:Z

    return-void
.end method

.method private static a(Ljava/lang/String;)Z
    .locals 0

    :try_start_0
    invoke-static {p0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;
    :try_end_0
    .catch Ljava/lang/ClassNotFoundException; {:try_start_0 .. :try_end_0} :catch_0

    const/4 p0, 0x1

    goto :goto_0

    :catch_0
    const/4 p0, 0x0

    :goto_0
    return p0
.end method
