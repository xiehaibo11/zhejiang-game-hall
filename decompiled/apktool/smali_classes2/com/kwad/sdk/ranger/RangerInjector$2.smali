.class final Lcom/kwad/sdk/ranger/RangerInjector$2;
.super Lcom/bytedance/apm/common/utility/Logger$ILogWritter;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/ranger/RangerInjector;->tryProxyOtherOutput(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/kwad/sdk/ranger/RangerInjector$a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic aGW:I

.field final synthetic aGX:Lcom/bytedance/apm/common/utility/Logger$ILogWritter;

.field final synthetic aGY:Ljava/lang/String;

.field final synthetic aGZ:Lcom/kwad/sdk/ranger/RangerInjector$a;


# direct methods
.method constructor <init>(ILcom/bytedance/apm/common/utility/Logger$ILogWritter;Ljava/lang/String;Lcom/kwad/sdk/ranger/RangerInjector$a;)V
    .locals 0

    iput p1, p0, Lcom/kwad/sdk/ranger/RangerInjector$2;->aGW:I

    iput-object p2, p0, Lcom/kwad/sdk/ranger/RangerInjector$2;->aGX:Lcom/bytedance/apm/common/utility/Logger$ILogWritter;

    iput-object p3, p0, Lcom/kwad/sdk/ranger/RangerInjector$2;->aGY:Ljava/lang/String;

    iput-object p4, p0, Lcom/kwad/sdk/ranger/RangerInjector$2;->aGZ:Lcom/kwad/sdk/ranger/RangerInjector$a;

    invoke-direct {p0}, Lcom/bytedance/apm/common/utility/Logger$ILogWritter;-><init>()V

    return-void
.end method


# virtual methods
.method public final isLoggable(I)Z
    .locals 0

    const/4 p1, 0x1

    return p1
.end method

.method public final logD(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    :try_start_0
    iget v0, p0, Lcom/kwad/sdk/ranger/RangerInjector$2;->aGW:I

    const/4 v1, 0x3

    if-le v0, v1, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/ranger/RangerInjector$2;->aGX:Lcom/bytedance/apm/common/utility/Logger$ILogWritter;

    invoke-virtual {v0, p1, p2}, Lcom/bytedance/apm/common/utility/Logger$ILogWritter;->logD(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method public final logD(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V
    .locals 2

    :try_start_0
    iget v0, p0, Lcom/kwad/sdk/ranger/RangerInjector$2;->aGW:I

    const/4 v1, 0x3

    if-le v0, v1, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/ranger/RangerInjector$2;->aGX:Lcom/bytedance/apm/common/utility/Logger$ILogWritter;

    invoke-virtual {v0, p1, p2, p3}, Lcom/bytedance/apm/common/utility/Logger$ILogWritter;->logD(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method public final logE(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    :try_start_0
    iget v0, p0, Lcom/kwad/sdk/ranger/RangerInjector$2;->aGW:I

    const/4 v1, 0x6

    if-le v0, v1, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/ranger/RangerInjector$2;->aGX:Lcom/bytedance/apm/common/utility/Logger$ILogWritter;

    invoke-virtual {v0, p1, p2}, Lcom/bytedance/apm/common/utility/Logger$ILogWritter;->logE(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method public final logE(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V
    .locals 2

    :try_start_0
    iget-object v0, p0, Lcom/kwad/sdk/ranger/RangerInjector$2;->aGY:Ljava/lang/String;

    invoke-static {p1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/ranger/RangerInjector$2;->aGZ:Lcom/kwad/sdk/ranger/RangerInjector$a;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/ranger/RangerInjector$2;->aGZ:Lcom/kwad/sdk/ranger/RangerInjector$a;

    invoke-static {p3}, Landroid/util/Log;->getStackTraceString(Ljava/lang/Throwable;)Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1}, Lcom/kwad/sdk/ranger/RangerInjector$a;->eD(Ljava/lang/String;)V

    :cond_0
    iget v0, p0, Lcom/kwad/sdk/ranger/RangerInjector$2;->aGW:I

    const/4 v1, 0x6

    if-le v0, v1, :cond_1

    return-void

    :cond_1
    iget-object v0, p0, Lcom/kwad/sdk/ranger/RangerInjector$2;->aGX:Lcom/bytedance/apm/common/utility/Logger$ILogWritter;

    invoke-virtual {v0, p1, p2, p3}, Lcom/bytedance/apm/common/utility/Logger$ILogWritter;->logE(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method public final logI(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    :try_start_0
    iget v0, p0, Lcom/kwad/sdk/ranger/RangerInjector$2;->aGW:I

    const/4 v1, 0x4

    if-le v0, v1, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/ranger/RangerInjector$2;->aGX:Lcom/bytedance/apm/common/utility/Logger$ILogWritter;

    invoke-virtual {v0, p1, p2}, Lcom/bytedance/apm/common/utility/Logger$ILogWritter;->logI(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method public final logI(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V
    .locals 2

    :try_start_0
    iget v0, p0, Lcom/kwad/sdk/ranger/RangerInjector$2;->aGW:I

    const/4 v1, 0x4

    if-le v0, v1, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/ranger/RangerInjector$2;->aGX:Lcom/bytedance/apm/common/utility/Logger$ILogWritter;

    invoke-virtual {v0, p1, p2, p3}, Lcom/bytedance/apm/common/utility/Logger$ILogWritter;->logI(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method public final logK(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    :try_start_0
    iget-object v0, p0, Lcom/kwad/sdk/ranger/RangerInjector$2;->aGX:Lcom/bytedance/apm/common/utility/Logger$ILogWritter;

    invoke-virtual {v0, p1, p2}, Lcom/bytedance/apm/common/utility/Logger$ILogWritter;->logK(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method public final logV(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    :try_start_0
    iget v0, p0, Lcom/kwad/sdk/ranger/RangerInjector$2;->aGW:I

    const/4 v1, 0x2

    if-le v0, v1, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/ranger/RangerInjector$2;->aGX:Lcom/bytedance/apm/common/utility/Logger$ILogWritter;

    invoke-virtual {v0, p1, p2}, Lcom/bytedance/apm/common/utility/Logger$ILogWritter;->logV(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method public final logV(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V
    .locals 2

    :try_start_0
    iget v0, p0, Lcom/kwad/sdk/ranger/RangerInjector$2;->aGW:I

    const/4 v1, 0x2

    if-le v0, v1, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/ranger/RangerInjector$2;->aGX:Lcom/bytedance/apm/common/utility/Logger$ILogWritter;

    invoke-virtual {v0, p1, p2, p3}, Lcom/bytedance/apm/common/utility/Logger$ILogWritter;->logV(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method public final logW(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    :try_start_0
    iget v0, p0, Lcom/kwad/sdk/ranger/RangerInjector$2;->aGW:I

    const/4 v1, 0x5

    if-le v0, v1, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/ranger/RangerInjector$2;->aGX:Lcom/bytedance/apm/common/utility/Logger$ILogWritter;

    invoke-virtual {v0, p1, p2}, Lcom/bytedance/apm/common/utility/Logger$ILogWritter;->logW(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method public final logW(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V
    .locals 2

    :try_start_0
    iget v0, p0, Lcom/kwad/sdk/ranger/RangerInjector$2;->aGW:I

    const/4 v1, 0x5

    if-le v0, v1, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/ranger/RangerInjector$2;->aGX:Lcom/bytedance/apm/common/utility/Logger$ILogWritter;

    invoke-virtual {v0, p1, p2, p3}, Lcom/bytedance/apm/common/utility/Logger$ILogWritter;->logW(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method
