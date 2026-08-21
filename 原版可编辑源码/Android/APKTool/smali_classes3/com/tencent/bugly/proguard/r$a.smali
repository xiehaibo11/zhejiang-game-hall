.class final Lcom/tencent/bugly/proguard/r$a;
.super Ljava/lang/Object;
.source "BUGLY"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tencent/bugly/proguard/r;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = "a"
.end annotation


# instance fields
.field final synthetic a:Lcom/tencent/bugly/proguard/r;

.field private b:Z

.field private c:Lcom/tencent/bugly/crashreport/biz/UserInfoBean;


# direct methods
.method public constructor <init>(Lcom/tencent/bugly/proguard/r;Lcom/tencent/bugly/crashreport/biz/UserInfoBean;Z)V
    .locals 0

    .line 175
    iput-object p1, p0, Lcom/tencent/bugly/proguard/r$a;->a:Lcom/tencent/bugly/proguard/r;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 176
    iput-object p2, p0, Lcom/tencent/bugly/proguard/r$a;->c:Lcom/tencent/bugly/crashreport/biz/UserInfoBean;

    .line 177
    iput-boolean p3, p0, Lcom/tencent/bugly/proguard/r$a;->b:Z

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    .line 182
    iget-object v0, p0, Lcom/tencent/bugly/proguard/r$a;->a:Lcom/tencent/bugly/proguard/r;

    invoke-static {v0}, Lcom/tencent/bugly/proguard/r;->a(Lcom/tencent/bugly/proguard/r;)Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    .line 186
    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/tencent/bugly/proguard/r$a;->c:Lcom/tencent/bugly/crashreport/biz/UserInfoBean;

    if-eqz v0, :cond_1

    .line 187
    iget-object v0, p0, Lcom/tencent/bugly/proguard/r$a;->c:Lcom/tencent/bugly/crashreport/biz/UserInfoBean;

    invoke-static {v0}, Lcom/tencent/bugly/proguard/r;->a(Lcom/tencent/bugly/crashreport/biz/UserInfoBean;)V

    const-string v0, "[UserInfo] Record user info."

    const/4 v1, 0x0

    .line 189
    new-array v2, v1, [Ljava/lang/Object;

    invoke-static {v0, v2}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 190
    iget-object v0, p0, Lcom/tencent/bugly/proguard/r$a;->a:Lcom/tencent/bugly/proguard/r;

    iget-object v2, p0, Lcom/tencent/bugly/proguard/r$a;->c:Lcom/tencent/bugly/crashreport/biz/UserInfoBean;

    invoke-static {v0, v2, v1}, Lcom/tencent/bugly/proguard/r;->a(Lcom/tencent/bugly/proguard/r;Lcom/tencent/bugly/crashreport/biz/UserInfoBean;Z)V

    .line 192
    :cond_1
    iget-boolean v0, p0, Lcom/tencent/bugly/proguard/r$a;->b:Z

    if-eqz v0, :cond_2

    .line 193
    iget-object v0, p0, Lcom/tencent/bugly/proguard/r$a;->a:Lcom/tencent/bugly/proguard/r;

    invoke-virtual {v0}, Lcom/tencent/bugly/proguard/r;->b()V
    :try_end_0
    .catch Ljava/lang/Throwable; {:try_start_0 .. :try_end_0} :catch_0

    :cond_2
    return-void

    :catch_0
    move-exception v0

    .line 196
    invoke-static {v0}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/Throwable;)Z

    move-result v1

    if-nez v1, :cond_3

    .line 197
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_3
    return-void
.end method
